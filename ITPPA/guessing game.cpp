/*
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(){


    string guess;

    srand(time(0));

    std::cout << "Guessing Game:\n"
                 "1. Play higher or lower\n"
                 "2. Play paper-scissors-rock\n"
                 "3. Guess the number of fingers\n"
                 "4. Quit";


    const int size = 2;

    int nums[size];
string cont;


int whichgame;

START:
cout << "\n choose your game 1-3, 4 to quit\n";
cin >> whichgame;

    switch (whichgame) {

        case 1: {
            string cont ;
            while (whichgame == 1) {
                START4:

                for (int i = 0; i < 2; i++) {

                    nums[i] = 2 + rand() % 18;

                }

                cout << "\nThis is the first number : " << nums[0]
                     << " is the second number higher or lower? type L | H ";

                cin >> guess;

                if (guess != "H" && guess != "L") {

                    cout << "enter a valid input L or H";
                    goto START4;

                }

                if (nums[0] < nums[1] && guess == "H") {

                    cout << "\nYES, YOU WIN" << "The number was : " << nums[1];


                } else if (nums[0] > nums[1] && (guess == "L")) {

                    cout << "YES, YOU WIN" << "\nThe number was : " << nums[1];
                } else {cout << "Sorry , you lose" << "The number after was : " << nums[1] << "\n";}
                
                cout << "\nplay again? type 'quit' to go to the main menu, and any button to play again\n ";
                cin >> cont;
                if(cont == "quit"){goto START;}
            }
            goto START;
            
        }
        case 2: {
            cout << "\n This is rock paper scissors\n";
            cout << "\n0: ROCK, 1:PAPER, 2: SCISSORS\n";
            int playedcpu, played;

            while (whichgame == 2) {
                START2:

                playedcpu = rand() % 3;
                cout << "\nPLay your hand\n";
                cin >> played;
                if (played != 0 && played != 1 && played != 2 ){cout << "Invalid Option, 0: ROCK, 1:PAPER, 2: SCISSORS "; goto START2;}
                if (played == playedcpu) {
                    cout << "Draw the cpu played : " << playedcpu;
                    break;
                } else if ((played == 0 && playedcpu == 2) || (played == 2 && playedcpu == 1) ||
                           (played == 1 && playedcpu == 0)) {
                    cout << "You win the cpu played : " << playedcpu;
                    break;
                } else {cout << "You lose, the cpu played : " << playedcpu;}
                cout << "play again? type 'quit' to go to the main menu, and any button to play again";
                cin >> cont;
                if(cont == "quit"){goto START;}
                goto START;
            }
        }
            case 3 : {

                while (whichgame == 3) {
                    START3:

                    int finger, fingerguess;

                    finger = 1 + rand() % 4;
                    cout << "The cpu has put up , how many fingers ? \n";
                    cin >> fingerguess;
                    if (fingerguess != 1 && fingerguess != 2 && fingerguess != 3 && fingerguess != 4 && fingerguess != 5){
                        cout << "invalid , try the ranges 1-5";goto START3;
                    }

                    if (finger == fingerguess) {
                        cout << "You win";
                    } else{cout << "You lose, the cpu put out : " << finger;}
                    cout << "\nplay again? type 'quit' to go to the main menu, and any button to play again\n";
                    cin >> cont;
                    if(cont == "quit"){goto START;}

                }
            }

        case 4:{ cout << "\nBYE"; break;}

        default : cout << "enter a valid number";
            goto START;


    }

    return 0;
}

*/