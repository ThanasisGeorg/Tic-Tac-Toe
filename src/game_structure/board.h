#include <iostream>

using namespace std;

class Board {
    public:
        char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        int row;
        int column;

        Board(){};
        ~Board(){};

        void printBoard();
};
