#include <board.h>

using namespace std;

void Board::printBoard(){
    cout<<"     |     |     \n";
    cout<<"     |     |     \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<space[1][0]<<"  |  "<<space[1][1]<<"  |  "<<space[1][2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"     |     |     \n";
    cout<<"     |     |     \n";
}