#include "Conversation.h"
#include "helpers.h"

class NormalConversation : public Conversation
{
public:
    NormalConversation();
    ~NormalConversation();
    NormalConversation(int maxCalls);

    std::string toString();
};