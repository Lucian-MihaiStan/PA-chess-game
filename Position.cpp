#include <iostream>
#include <cstring>
#include <cstdlib>

class Position
{
private:
    char column;
    int line;

public:
    int getLine(){
        return line;
    }
    int getColumn(){
        return column;
    }
    void setLine(int l){
        line = l;
    }
    void setColumn(char c){
        column = c;
    }
    char* toString(){
        char pos[2];
        pos[0] = column;
        pos[1] = '0'+line;
        return pos;
    }
};
