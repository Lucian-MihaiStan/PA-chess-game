//
// Created by student on 3/11/21.
//

#ifndef PA_CHESS_GAME_COMMANDPARSER_H
#define PA_CHESS_GAME_COMMANDPARSER_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <map>

#include "Command.h"
#include "XboardCommand.h"
#include "ForceCommand.h"
#include "GoCommand.h"
#include "NewCommand.h"
#include "QuitCommand.h"
#include "FeatureCommand.h"

using namespace std;

class CommandParser {
private:
    map<string, Command*> commandsMap;

public:
    CommandParser();
    ~CommandParser();

    void parseCommand(const string& commandString);

private:
    void initCommands();
};


#endif //PA_CHESS_GAME_COMMANDPARSER_H
