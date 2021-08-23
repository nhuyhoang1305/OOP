#include "Conference.h"
#include "helpers.h"

Conference::Conference()
{
    this->setMaxCalls(CONFERENCE);
}
Conference::~Conference()
{

}
Conference::Conference(int maxCalls)
{
    this->setMaxCalls(maxCalls);
}

std::string Conference::toString()
{
    std::string s = "\t\tConversation Information: \n";
    s += "Id: ";

    s += this->getConversationId() + '\n';
    s += "Type: Conference\n";
    for (Call call : this->getCallList())
    {
        s += call.toString();
    }
    return s;
}