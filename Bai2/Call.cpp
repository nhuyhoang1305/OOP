#include "Call.h"
#include "helpers.h"
#include <cstring>

bool Call::operator==(Call call)
{
    return strcmp(this->callId, call.getCallId());
}

// constructor
Call::Call()
{
}
Call::~Call()
{
}
Call::Call(char *callId, int callType, int channelId, int conversationType)
{
    this->callId = callId;
    this->callType = callType;
    this->channelId = channelId;
    this->conversationType = conversationType;
}

// setter, getter
void Call::setCallId(char *callId) { this->callId = callId; }
char *Call::getCallId() { return this->callId; }
void Call::setCallType(int callType) { this->callType = callType; }
int Call::getCallType() { return this->callType; }
void Call::setChannelId(int channelId) { this->channelId = channelId; }
int Call::getChannelId() { return this->channelId; }
void Call::setConversationType(int conversationType) { this->conversationType = conversationType; }
int Call::getConversationType() { return this->conversationType; }

std::string Call::toString()
{
    std::string type = "", conversationType = "", callId = "", channelId;
    if (this->callType == CALLIN)
    {
        type = "Goi vao";
    }
    else if (this->callType == CALLOUT)
    {
        type = "Goi ra";
    }
    if (this->conversationType == NORMALCONVERSATION)
    {
        conversationType = "Cuoc goi thong thuong";
    }
    else if (this->conversationType == CONFERENCE)
    {
        conversationType = "Cuoc hoi thoai";
    }
    for (int i = 0; this->callId[i] != '\0'; ++i)
    {
        callId += this->callId[i];
    }
    return "\t\tCall Information:\nId: " + callId + "\nType: " + type + "\nChannel Id: " + std::__cxx11::to_string(this->channelId) + "\nConversation Type: " + conversationType + '\n';
}