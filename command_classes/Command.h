// Created by Radu on 3/11/21.
//

#ifndef PA_CHESS_GAME_COMMAND_H
#define PA_CHESS_GAME_COMMAND_H

#include <stdlib.h>

class Command {
public:
    virtual void execute() = 0;
};


#endif //PA_CHESS_GAME_COMMAND_H
