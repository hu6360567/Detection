       org.eclipse.cdt.core activeConfiguration *org.omnetpp.cdt.gnu.config.debug.277342215     pdomName detection.1364213291174.pdom     settingConfiguration *org.omnetpp.cdt.gnu.config.debug.277342215 org.eclipse.cdt.make.core discoveredScannerConfigFileName detection.sc                                                                                                                                                                                                                                tails.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "BroadcastApplLayer.h"
#include "SelfMessage_m.h"
#include "ApplPkt_m.h"
#include "TimerMessage_m.h"
#include "NetwControlInfo.h"

Define_Module(BroadcastApplLayer);


BroadcastApplLayer::~BroadcastApplLayer() {
    // TODO Auto-generated destructor stub
}

void BroadcastApplLayer::initialize(int stage)
{
    ReplyApplLayer::initialize(stage);
    if(stage==0)
    {
        switcher=par("switcher").boolValue();
    }
    else if(stage==1&&switcher)
    {
        generateBroadcastMessage();
    }
}



void BroadcastApplLayer::handleSelfMsg(cMessage *msg)
{
    switch(msg->getKind())
    {
    case SELF_REPLY_MESSAGE:
        sendReplyMessage(msg);
        break;
    case SELF_BROADCAST_MESSAGE:
        EV<<"Generating Rubbish Messages!!! Occupying the Channel!!!!!!"<<std::endl;
        sendBroadcastMessage();
        break;
    default:
        EV<<"Unkown Message!!! Kind is "<<msg->getKind()<<std::endl;
        break;
    }
    drop(msg);
    delete msg;
}



void BroadcastApplLayer::generateBroadcastMessage()
{
    SelfMessage *smsg=new SelfMessage("Self",SELF_BROADCAST_MESSAGE);
    scheduleAt(simTime()+0.1,smsg);
}



void BroadcastApplLayer::sendBroadcastMessage()
{
    TimerMessage *pkt=new TimerMessage("Occupying the Channel",RUBBISH_MESSAGE);
    pkt->setSrcAddr(myApplAddr());
    pkt->setDestAddr(LAddress::L3BROADCAST);
    NetwControlInfo::setControlInfo(pkt, pkt->getDestAddr());
    sendDown(pkt);

    generateBroadcastMessage();
}



