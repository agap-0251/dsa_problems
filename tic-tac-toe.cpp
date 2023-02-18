#include <iostream>
#include <ctime>
using namespace std;

bool checkTie(char *choices);
bool checkWinner(char *choices, char player, char computer);
void playerMove(char *choices, char player);
void computerMove(char *choices, char computer);
void drawBoard(char *choices);

int main(void) {

    char spaces[] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    bool running = true;
    char player = 'X', computer = 'O';
    drawBoard(spaces);
    while(running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }    
    
        else if(checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }    
        
        else if(checkTie(spaces)) {
            running = false;
            break;
        }
    }
    cout << "Thanks for playing!!"; 

return 0;
}

void drawBoard(char *choices) {
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << choices[0] << "  |  " << choices[1] << "  |  " << choices[2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << choices[3] << "  |  " << choices[4] << "  |  " << choices[5] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << choices[6] << "  |  " << choices[7] << "  |  " << choices[8] << "  \n";
    cout << "\n";
} 

void playerMove(char *choices, char player) {
    int n;
    do {
        cout << "Enter position(1-9): ";
        cin >> n;
        n--;
        if(choices[n] == ' ') {
            choices[n] = player;
            break;
        }
    }while(!n > 0 || !n < 8);
    
}

void computerMove(char *choices, char computer) {
    srand(time(0));
    int d;
    do {
        d = rand() % 9;
        if(choices[d] == ' ') {
            choices[d] = computer;
            break;
        }
    }while(true);
}

bool checkWinner(char *choices, char player, char computer) {
    
    if((choices[0] != ' ') && (choices[0] == choices[1]) && (choices[1] == choices[2])) {
        choices[0] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[3] != ' ') && (choices[3] == choices[4]) && (choices[4] == choices[5])) {
        choices[3] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[6] != ' ') && (choices[6] == choices[7]) && (choices[7] == choices[8])) {
        choices[6] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[0] != ' ') && (choices[0] == choices[3]) && (choices[3] == choices[6])) {
        choices[0] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[1] != ' ') && (choices[1] == choices[4]) && (choices[4] == choices[7])) {
        choices[1] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[2] != ' ') && (choices[2] == choices[5]) && (choices[5] == choices[9])) {
        choices[2] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[0] != ' ') && (choices[0] == choices[4]) && (choices[4] == choices[8])) {
        choices[0] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else if((choices[2] != ' ') && (choices[2] == choices[4]) && (choices[4] == choices[6])) {
        choices[2] == player ? cout << "You won!!" : cout << "You lost!!";
    }
    else {
        return false;
    }
    
    return true;
}

bool checkTie(char *choices) {
    for(int i = 0; i < 9; i++) {
        if(choices[i] == ' ')
            return false;
    }
    cout << "Its a tie!!";
    return true;
}
