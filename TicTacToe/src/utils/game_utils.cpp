#include "game_utils.h"

#include "../../Ansi-Text-Manipulation-Library/AnsiTextLibrary/src/ansi_lib.hpp"

using namespace Game_Utils;
using namespace Utils;

bool Game_Utils::check_result(Board *board){
    if(board->space[0][0] == "x" && board->space[1][1] == "x" && board->space[2][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][0] == "x" && board->space[0][1] == "x" && board->space[0][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][0] == "x" && board->space[1][0] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][2] == "x" && board->space[1][1] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][2] == "x" && board->space[1][2] == "x" && board->space[2][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[2][2] == "x" && board->space[2][1] == "x" && board->space[2][0] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][1] == "x" && board->space[1][1] == "x" && board->space[2][1] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[1][0] == "x" && board->space[1][1] == "x" && board->space[1][2] == "x"){
        println("Player with x wins!");
        return true;
    } else if(board->space[0][0] == "o" && board->space[1][1] == "o" && board->space[2][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][0] == "o" && board->space[0][1] == "o" && board->space[0][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][0] == "o" && board->space[1][0] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][2] == "o" && board->space[1][1] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][2] == "o" && board->space[1][2] == "o" && board->space[2][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[2][2] == "o" && board->space[2][1] == "o" && board->space[2][0] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][1] == "o" && board->space[1][1] == "o" && board->space[2][1] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[1][0] == "o" && board->space[1][1] == "o" && board->space[1][2] == "o"){
        println("Player with o wins!");
        return true;
    } else if(board->space[0][0] != " " && board->space[0][1] != " " && board->space[0][2] != " " && board->space[1][0] != " " && board->space[1][1] != " "
           && board->space[1][2] != " " && board->space[2][0] != " " && board->space[2][1] != " " && board->space[2][2] != " "){
        println("The game is tie!");
        return true;
    } else return false;
}

bool Game_Utils::turn(string message, Response response, vector<string> accepted_input, Board *board, string turn_of){
    println(message);
    print("> ");
    
    getline(cin, response.input);
    while(response.input != accepted_input.at(0) && response.input != accepted_input.at(1) && response.input != accepted_input.at(2) && response.input != accepted_input.at(3)
        && response.input != accepted_input.at(4) && response.input != accepted_input.at(5) && response.input != accepted_input.at(6) && response.input != accepted_input.at(7)
        && response.input != accepted_input.at(8)){
        println("Invalid input!");
        print("> ");
        getline(cin, response.input);
    }

    if(response.input == accepted_input.at(0) && board->space[0][0] == " "){
        board->space[0][0] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(1) && board->space[0][1] == " "){
        board->space[0][1] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(2) && board->space[0][2] == " "){
        board->space[0][2] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(3) && board->space[1][0] == " "){
        board->space[1][0] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(4) && board->space[1][1] == " "){
        board->space[1][1] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(5) && board->space[1][2] == " "){
        board->space[1][2] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(6) && board->space[2][0] == " "){
        board->space[2][0] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(7) && board->space[2][1] == " "){
        board->space[2][1] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    } else if(response.input == accepted_input.at(8) && board->space[2][2] == " "){
        board->space[2][2] = turn_of;
        AnsiTextLib::Text::clearScreen();
        board->printBoard();
        return true;
    }
    
    println("You cant do that here!");
    return false;
}