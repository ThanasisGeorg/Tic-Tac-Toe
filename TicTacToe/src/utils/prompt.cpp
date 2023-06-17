#include "prompt.h"
#include "../../Ansi-Text-Manipulation-Library/AnsiTextLibrary/src/ansi_lib.hpp"

using namespace Utils;

bool Utils::prompt(string message, vector<string> accepted_input, Board *board, string turn_of){    
    Response response;
    
    if(turn_of == "x"){
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
            board->space[0][0] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(1) && board->space[0][1] == " "){
            board->space[0][1] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(2) && board->space[0][2] == " "){
            board->space[0][2] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(3) && board->space[1][0] == " "){
            board->space[1][0] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(4) && board->space[1][1] == " "){
            board->space[1][1] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(5) && board->space[1][2] == " "){
            board->space[1][2] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(6) && board->space[2][0] == " "){
            board->space[2][0] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(7) && board->space[2][1] == " "){
            board->space[2][1] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(8) && board->space[2][2] == " "){
            board->space[2][2] = "x";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else {
            println("You cant do that here!");
            return false;
        }

    } else if(turn_of == "o"){
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
            board->space[0][0] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(1) && board->space[0][1] == " "){
            board->space[0][1] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(2) && board->space[0][2] == " "){
            board->space[0][2] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(3) && board->space[1][0] == " "){
            board->space[1][0] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(4) && board->space[1][1] == " "){
            board->space[1][1] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(5) && board->space[1][2] == " "){
            board->space[1][2] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(6) && board->space[2][0] == " "){
            board->space[2][0] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(7) && board->space[2][1] == " "){
            board->space[2][1] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else if(response.input == accepted_input.at(8) && board->space[2][2] == " "){
            board->space[2][2] = "o";
            AnsiTextLib::Text::clearScreen();
            board->printBoard();
            return true;
        } else {
            println("You cant do that here!");
            return false;
        }
    }
    
    return false;
}

void Utils::println(string message){
    cout << message << endl;
}

void Utils::print(string message) {
    cout << message; 
}