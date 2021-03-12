//
// Created by student on 3/11/21.
//

#include "CommandParser.h"

CommandParser::CommandParser() {
    initCommands();
}

CommandParser::~CommandParser() {

}

void CommandParser::initCommands() {
    commandsMap.insert(pair<string, Command*>("xboard", new XboardCommand()));
    commandsMap.insert(pair<string, Command*>("feature", new FeatureCommand()));
    commandsMap.insert(pair<string, Command*>("new", new NewCommand()));
    commandsMap.insert(pair<string, Command*>("force", new ForceCommand()));
    commandsMap.insert(pair<string, Command*>("go", new GoCommand()));
    commandsMap.insert(pair<string, Command*>("quit", new QuitCommand()));

}

void CommandParser::parseCommand(const string& commandString) {
    if (commandsMap.count(commandString))
        commandsMap[commandString]->execute();
    else {
        size_t found = commandString.find("protover");
        if(found != string::npos) {
            cout << "feature sigint=0 san=0 name=\"myChess\"" << endl;
        }
        else if(commandString == "e2e4") {
            cout << "move e7e5" << endl;
        }
    }
}
