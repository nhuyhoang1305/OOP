#include "ConversationManager.h"
#include <algorithm>

ConversationManager::ConversationManager()
{

}
ConversationManager::~ConversationManager()
{

}
ConversationManager::ConversationManager(std::vector<Conversation> conversationList)
{
    this->conversationList = conversationList;
}

// setter, getter
void ConversationManager::setConversationList(std::vector<Conversation> conversationList) { this->conversationList = conversationList; } 
std::vector<Conversation> ConversationManager::getConversationList() { return this->conversationList; }

void ConversationManager::addConversation(Conversation conversation)
{
        this->conversationList.push_back(conversation);
}
void ConversationManager::cancelConversation(int index)
{
    this->conversationList.erase(this->conversationList.begin() + index);
}