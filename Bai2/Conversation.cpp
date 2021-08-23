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