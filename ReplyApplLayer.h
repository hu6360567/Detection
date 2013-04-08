//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef REPLYAPPLLAYER_H_
#define REPLYAPPLLAYER_H_

#include <BaseApplLayer.h>

#include "MessageKinds.h"

class ReplyApplLayer: public BaseApplLayer {
public:
    ReplyApplLayer() :
            BaseApplLayer(),received(0) {
    }
    virtual ~ReplyApplLayer();

    /** @brief Initialize module parameters*/
    virtual void initialize(int);

private:
    int received;
    bool set;
    bool attacked;
    simtime_t begintime;
    cOutVector hoptimeCountVector;

protected:
    /** @brief Handle self messages such as timer... */
    virtual void handleSelfMsg(cMessage*);

    /** @brief Handle messages from lower layer */
    virtual void handleLowerMsg(cMessage*);

    virtual void finish();

    void sendReplyMessage(cMessage *);

    void processInitialBroadcastMessage(cMessage *);

    void processACKReplyMessage(cMessage *);

    simtime_t delay();

};

#endif /* REPLYAPPLLAYER_H_ */
