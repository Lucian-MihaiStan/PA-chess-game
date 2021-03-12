//
// Created by student on 3/11/21.
//

#ifndef PA_CHESS_GAME_QUITCOMMAND_H
#define PA_CHESS_GAME_QUITCOMMAND_H

#include "Command.h"

class QuitCommand : public Command{
public:
    void execute() override {
        exit(0);
    }
};


#endif //PA_CHESS_GAME_QUITCOMMAND_H
