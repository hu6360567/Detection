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

#ifndef HOPAPPLLAYER_H_
#define HOPAPPLLAYER_H_

#include <BaseApplLayer.h>

class HopApplLayer: public BaseApplLayer {
public:
    HopApplLayer() :
            BaseApplLayer(),num(5),current(0),self(0) {
        TimeVector.setName("AveHopTime");
        NodeVector.setName("Node");
        ;
    }
    virtual ~HopApplLayer();

    /** @brief Initialize module parameters*/
    virtual void initialize(int);

protected:
    /** @brief Handle self messages such as timer... */
    virtual void handleSelfMsg(cMessage*);

    /** @brief Handle messages from lower layer */
    virtual void handleLowerMsg(cMessage*);

    virtual void finish();

    void sendBroadcastMsg();
    void sendACKMsg(cMessage *);
    void generageSelfACKMessage(cMessage *);

private:
    int num;
    int current;
    int self;

    cLongHistogram TimeStats;
    cOutVector NodeVector;
    cOutVector TimeVector;
};

#endif /* HOPAPPLLAYER_H_ */
