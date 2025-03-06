#pragma once
#include "3ds.h"
#include "map"
#include "ArticProtocolCommon.hpp"
#include "ArticProtocolServer.hpp"
#include "memory.h"
#include "string"

namespace ArticBaseFunctions {
    // All method handlers should be defined here
    extern std::map<std::string, void(*)(ArticProtocolServer::MethodInterface& out)> functionHandlers;

    // All setup functions should be defined here
    extern std::vector<bool(*)()> setupFunctions;

    // All destruct functions should be defined here
    extern std::vector<bool(*)()> destructFunctions;
};