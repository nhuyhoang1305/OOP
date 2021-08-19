#pragma once
#include "Call.h"
#include <vector>
#include <iostream>

class CallManager
{
private:
    std::vector<Call> callList;
public:

    CallManager();
    ~CallManager();
    CallManager(std::vector<Call> callList);

    void setCallList(std::vector<Call> callList);
    std::vector<Call> getCallList();
    void addCall(Call call);
    void cancelCall(int index);
};