#include "./game_structure/board.h"
#include "./utils/prompt.h"
#include "./utils/game_utils.h"

using namespace Utils;
using namespace Game_Utils;

void start(Board *board){
    Prompt prompt;
    prompt.accepted_input = {"a1", "a2", "a3", "b1", "b2", "b3", "c1", "c2", "c3"};

    bool flag = false, result;

    board->printHelpingBoard();

    board->printBoard();

    do{
        flag = Utils::prompt("X's turn", prompt.accepted_input, board, "x");
        while(!flag){
            flag = Utils::prompt("X's turn", prompt.accepted_input, board, "x");
        }

        result = Game_Utils::check_result(board);
        if(result == true){
            break;
        }

        flag = Utils::prompt("O's turn", prompt.accepted_input, board, "o");
        while(!flag){
            flag = Utils::prompt("O's turn", prompt.accepted_input, board, "o");
        }

        result = Game_Utils::check_result(board);
    } while(!result);

}

int main() {
    Board *board = new Board();

    start(board);

    return 0;
}