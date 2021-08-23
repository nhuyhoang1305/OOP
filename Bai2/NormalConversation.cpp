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

std::string NormalConversation::toString()
{
    std::string s = "\t\tConversation Information: \n";
    s += "Id: ";

    s += this->getConversationId() + '\n';
    s += "Type: NormalConversation\n";
    for (Call call : this->getCallList())
    {
        s += call.toString();
    }
    return s;
}
