#pragma once

#include <iostream>

using namespace std;

class Board {
    public:
        string space[3][3] = {{" ", " ", " "}, {" ", " ", " "}, {" ", " ", " "}};

        int row;
        int column;

        Board(){};
        ~Board(){};

        void printBoard();
};
