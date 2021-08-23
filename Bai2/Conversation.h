#pragma once
#include <iostream>
#include <vector>
#include "Call.h"

class Conversation
{
private:
    std::vector<Call> callList;
    char *conversationId;
    int maxCalls;
public:
    typedef Conversation super;
    Conversation();
    ~Conversation();
    Conversation(std::vector<Call> callList);
    Conversation(std::vector<Call> callList, char *conversationId);
    Conversation(int maxCalls);
    void setMaxCalls(int maxCalls);
    int getMaxCalls();
    void setCallList(std::vector<Call> callList);
    std::vector<Call> getCallList();
    void setConversationId(char *conversationId);
    char *getConversationId();
    
    virtual std::string toString() = 0;
};