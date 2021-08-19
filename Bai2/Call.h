#ifndef CALL_H
#define CALL_H

#include <string>

class Call
{
private:
    char *callId;
    int callType;
    int channelId;
    int conversationType;

public:

    bool operator==(Call call);

    // constructor
    Call();
    ~Call();
    
    Call(char *callId, int callType, int channelId, int conversationType);

    // setter, getter
    void setCallId(char *callId);
    char *getCallId();
    void setCallType(int callType);
    int getCallType();
    void setChannelId(int channelId);
    int getChannelId();
    void setConversationType(int conversationType);
    int getConversationType();

    std::string toString();
};

#endif