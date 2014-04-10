#include <iostream>
#include <string>

#include "LuaReader.h"

int main() {
    LuaScript script("config.lua");
    std::string elfIp = script.get<std::string>("elfogo.ip");
    std::string elfPort = script.get<std::string>("elfogo.port");

    std::cout<<"Elfogo IP: "<< elfIp << std::endl;
    std::cout<<"Elfogo Port: " << elfPort <<std::endl;  
} 
