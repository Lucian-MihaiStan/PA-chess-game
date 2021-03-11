#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {

	string command;
	getline(cin, command);
    ofstream myfile;
    myfile.open ("test.txt");

    while(command != "quit") {
        if(command == "protover 2") {
            cout<<"feature sigint=0 san=0 name=\"myChess\""<<endl;
        }
        else if(command == "e2e4") {
            cout<<"move e7e5"<<endl;
        }
        myfile << command << endl;
        getline(cin, command);
	}
    myfile.close();
	return 0;
}
