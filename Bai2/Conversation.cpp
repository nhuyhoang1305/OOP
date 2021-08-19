#include "Conversation.h"
#include "helpers.h"

Conversation::Conversation()
{

}
Conversation::Conversation(int maxCalls)
{
    this->maxCalls = maxCalls;
}
Conversation::~Conversation()
{

}

Conversation::Conversation(std::vector<Call> callList)
{
    this->callList = callList;
}

Conversation::Conversation(std::vector<Call> callList, char *conversationId)
{
    this->callList = callList;
    this->conversationId = conversationId;
}

void Conversation::setCallList(std::vector<Call> callList) { this->callList = callList; }
std::vector<Call> Conversation::getCallList() { return this->callList; }
void Conversation::setConversationId(char *conversationId) { this->conversationId = conversationId; }
char *Conversation::getConversationId() { return this->conversationId; }
void Conversation::setMaxCalls(int maxCalls) {this->maxCalls = maxCalls;}
int Conversation::getMaxCalls() {return this->maxCalls;}

std::string Conversation::toString()
{
    std::string s = "\t\tConversation Information: \n";
    s += "Id: ";

    s += this->conversationId;
    s += '\n';
    if (this->maxCalls <= NORMALCONVERSATION)
    {
        s += "Type: Normal Conversation\n";
    }
    else 
    {
        s += "Type: Conference\n";
    }
    for (Call call : this->callList)
    {
        s += call.toString();
    }
    return s;
}