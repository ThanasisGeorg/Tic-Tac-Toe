#pragma once

#include "../game_structure/board.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace Utils{
    struct Prompt{
        string message;
        vector<int> accepted_input;
    };

    struct Response{
        int input;
    };

    bool prompt(string message, vector<int> accepted_input, Board *board, string turn_of);

    void println(string message);
    void print(string message);
}
