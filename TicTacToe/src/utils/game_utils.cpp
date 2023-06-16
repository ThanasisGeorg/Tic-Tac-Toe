#include "game_utils.h"
#include "prompt.h"

using namespace Game_Utils;
using namespace Utils;

bool Game_Utils::check_result(Board *board){
    if(board->space[0][0] == "x" && board->space[1][1] == "x" && board->space[2][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][0] == "x" && board->space[0][1] == "x" && board->space[0][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if (board->space[0][0] == "x" && board->space[1][0] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if (board->space[0][2] == "x" && board->space[1][1] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if (board->space[0][2] == "x" && board->space[1][2] == "x" && board->space[2][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if (board->space[2][2] == "x" && board->space[2][1] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][0] == "o" && board->space[1][1] == "o" && board->space[2][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if (board->space[0][0] == "o" && board->space[0][1] == "o" && board->space[0][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if (board->space[0][0] == "o" && board->space[1][0] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else if (board->space[0][2] == "o" && board->space[1][1] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else if (board->space[0][2] == "o" && board->space[1][2] == "o" && board->space[2][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if (board->space[2][2] == "o" && board->space[2][1] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else return false;
}