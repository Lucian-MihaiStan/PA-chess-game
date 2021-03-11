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
            cout<<"feature sigint=0 san=0 name=\"LookingAtTheCeiling\""<<endl;
        }
        else if(command == "e2e4") {
            cout<<"move e7e5"<<endl;
        }
        else if(command == "f1c4") {
            cout<<"move b8c6"<<endl;
        }
        else if(command == "d1h5") {
            cout<<"move g8f6"<<endl;
        }
        else if(command == "h5f7") {
            cout<<"resign"<<endl;
        }
        myfile << command << endl;
        getline(cin, command);
	}
    myfile.close();
	return 0;
}
