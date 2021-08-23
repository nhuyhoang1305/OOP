#pragma once
#include "Conversation.h"
#include <vector>
#include <iostream>

class ConversationManager
{
private:
    std::vector<Conversation *> conversationList;
public:

    ConversationManager();
    ~ConversationManager();
    ConversationManager(std::vector<Conversation *> conversationList);

    void setConversationList(std::vector<Conversation *> conversationList);
    std::vector<Conversation *> getConversationList();
    void addConversation(Conversation *conversation);
    void cancelConversation(int index);
};