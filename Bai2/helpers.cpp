#include "helpers.h"
#include <string>
#include <iostream>
#include <cstring>

char *generatorIdHelper()
{
    static int serialNumber;
    char* char_type = new char[std::__cxx11::to_string(serialNumber).length()];
    strcpy(char_type, std::__cxx11::to_string(serialNumber++).c_str());
    return char_type;
}

int generatorChannelIdHelper()
{
    static int channelId;
    return channelId++;
}