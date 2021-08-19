#include "helpers.h"
#include <string>
#include <iostream>

char *generatorIdHelper()
{
    static int serialNumber;
    return const_cast<char *>(std::__cxx11::to_string(serialNumber++).c_str());
}

int generatorChannelIdHelper()
{
    static int channelId;
    return channelId++;
}