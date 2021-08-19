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