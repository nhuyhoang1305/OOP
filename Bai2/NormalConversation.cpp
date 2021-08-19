#include "NormalConversation.h"

NormalConversation::NormalConversation()
{
    this->setMaxCalls(NORMALCONVERSATION);
}

NormalConversation::~NormalConversation()
{

}

NormalConversation::NormalConversation(int maxCalls)
{
    this->setMaxCalls(maxCalls);
}
