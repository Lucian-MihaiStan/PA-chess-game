#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {

	char *command = (char *)calloc(sizeof(char), 100);
	cin>>command;
    cout<<command<<endl;

    while(strcmp(command, "quit") != 0) {
        if(strcmp(command, "protover N") == 0) {
            cout<<"feature san=0 sigint=0 name=\"myChess\"";
            cout.flush();
        }
        cout<<command<<endl;
        cin>>command;
	}
	return 0;
}
