#include <string>
#include <iostream>
#include <fstream>
#include "command_classes/CommandParser.h"

using namespace std;

int main() {

    auto* parser = new CommandParser();
    ofstream myfile;
    myfile.open ("test.txt");

    /*while(command != "quit") {
        if(command == "protover 2") {
            std::cout<<"feature sigint=0 san=0 name=\"LookingAtTheCeiling\""<<std::endl;
        }
        else if(command == "e2e4") {
            std::cout<<"move e7e5"<<std::endl;
        }
        else if(command == "f1c4") {
            std::cout<<"move b8c6"<<std::endl;
        }
        else if(command == "d1h5") {
            std::cout<<"move g8f6"<<std::endl;
        }
        else if(command == "h5f7") {
            std::cout<<"resign"<<std::endl;
        }
        myfile << command << std::endl;
        getline(std::cin, command);
	}*/

    while(true) {
        string command;
        cin >> command;
        parser->parseCommand(command);
    }

    myfile.close();
	return 0;
}
