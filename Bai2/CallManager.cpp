#include "CallManager.h"
#include <algorithm>
#include <cstring>
CallManager::CallManager()
{

}
CallManager::~CallManager()
{

}
CallManager::CallManager(std::vector<Call> callList)
{
    this->callList = callList;
}

// setter, getter
void CallManager::setCallList(std::vector<Call> callList) { this->callList = callList; } 
std::vector<Call> CallManager::getCallList() { return this->callList; }

void CallManager::addCall(Call call)
{
    this->callList.push_back(call);
}

void CallManager::cancelCall(int index)
{
    this->callList.erase(this->callList.begin() + index);
}