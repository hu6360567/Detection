//
// Generated file, do not edit! Created by opp_msgc 4.2 from SelfMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SelfMessage_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(SelfMessage);

SelfMessage::SelfMessage(const char *name, int kind) : cMessage(name,kind)
{
    this->aveHopTime_var = 0;
    this->hop_var = 0;
    this->begintime_var = 0;
}

SelfMessage::SelfMessage(const SelfMessage& other) : cMessage(other)
{
    copy(other);
}

SelfMessage::~SelfMessage()
{
}

SelfMessage& SelfMessage::operator=(const SelfMessage& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void SelfMessage::copy(const SelfMessage& other)
{
    this->address_var = other.address_var;
    this->aveHopTime_var = other.aveHopTime_var;
    this->hop_var = other.hop_var;
    this->begintime_var = other.begintime_var;
}

void SelfMessage::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->aveHopTime_var);
    doPacking(b,this->hop_var);
    doPacking(b,this->begintime_var);
}

void SelfMessage::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->aveHopTime_var);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->begintime_var);
}

LAddress::L3Type& SelfMessage::getAddress()
{
    return address_var;
}

void SelfMessage::setAddress(const LAddress::L3Type& address)
{
    this->address_var = address;
}

double SelfMessage::getAveHopTime() const
{
    return aveHopTime_var;
}

void SelfMessage::setAveHopTime(double aveHopTime)
{
    this->aveHopTime_var = aveHopTime;
}

int SelfMessage::getHop() const
{
    return hop_var;
}

void SelfMessage::setHop(int hop)
{
    this->hop_var = hop;
}

simtime_t SelfMessage::getBegintime() const
{
    return begintime_var;
}

void SelfMessage::setBegintime(simtime_t begintime)
{
    this->begintime_var = begintime;
}

class SelfMessageDescriptor : public cClassDescriptor
{
  public:
    SelfMessageDescriptor();
    virtual ~SelfMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(SelfMessageDescriptor);

SelfMessageDescriptor::SelfMessageDescriptor() : cClassDescriptor("SelfMessage", "cMessage")
{
}

SelfMessageDescriptor::~SelfMessageDescriptor()
{
}

bool SelfMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SelfMessage *>(obj)!=NULL;
}

const char *SelfMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SelfMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SelfMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SelfMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "address",
        "aveHopTime",
        "hop",
        "begintime",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SelfMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "aveHopTime")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "begintime")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SelfMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "LAddress::L3Type",
        "double",
        "int",
        "simtime_t",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SelfMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int SelfMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SelfMessage *pp = (SelfMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SelfMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SelfMessage *pp = (SelfMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 1: return double2string(pp->getAveHopTime());
        case 2: return long2string(pp->getHop());
        case 3: return double2string(pp->getBegintime());
        default: return "";
    }
}

bool SelfMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SelfMessage *pp = (SelfMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setAveHopTime(string2double(value)); return true;
        case 2: pp->setHop(string2long(value)); return true;
        case 3: pp->setBegintime(string2double(value)); return true;
        default: return false;
    }
}

const char *SelfMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "LAddress::L3Type",
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *SelfMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SelfMessage *pp = (SelfMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}


