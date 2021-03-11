#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {

	char *command = (char *)calloc(sizeof(char), 100);
	cin.getline(command,100);
    ofstream myfile;
    myfile.open ("test.txt");

    while(strcmp(command, "quit") != 0) {
        if(strcmp(command, "protover 2") == 0) {
            cout<<"feature sigint=0 san=0 name=\"LookingAtTheCeiling\""<<endl;
        }
        else if(strcmp(command, "e2e4") == 0) {
            cout<<"move e7e5"<<endl;
        }
        else if(strcmp(command, "f1c4") == 0) {
            cout<<"move b8c6"<<endl;
        }
        else if(strcmp(command, "d1h5") == 0) {
            cout<<"move g8f6"<<endl;
        }
        else if(strcmp(command, "h5f7") == 0) {
            cout<<"resign"<<endl;
        }
        myfile << command << endl;
        cin.getline(command,100);
	}
    myfile.close();
	return 0;
}
