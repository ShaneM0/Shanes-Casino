// THIS ENTIRE CODE IS MADE BY _sm0 FROM SCRATCH NO HELP

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

class Casino {
public:
    // Public Variables Used Throughout the entire Code
    string answer;
    char letter;

    // Stats
    int tokens = 25;
    int numAnswer;


    void question() {
        cout << "Would you like to play?!" << "\n";
        cin >> answer;

        if (answer == "yes" || answer == "YES" || answer == "Yes") {
            cout << "What would you like to play!" << "\n";

            cout << "[ A - Diamond Wheel    ]  [ B - Slot Machines   ]" << "\n";
            cout << "[ C - Guess The Number ]" << "\n";

            cin >> letter;

            // Selects what mode you want it to be on
            switch (letter) {
            case 'A':
                diamondWheel();
                break;
            case 'B':
                slotMachines();
                break;
            case 'C':
                guessTheNum();
                break;
            default:
                cout << "You do NOT want to gamble" << endl;
            }
        }
    }

    void diamondWheel() {
        // Casino Wheel Spin Rewards
        string car = "Car";
        int tokens100 = 100;
        string lose = "Lose";
        int tokens10 = 10;

        // Code
        cout << "Are you ready to play?" << "\n";
        cin >> answer;

        if (answer == "yes" || answer == "YES" || answer == "Yes") {
            cout << "Cost of wheel spin: 5 Tokens" << "\n";
            cout << "Currently, you have " << tokens << ". Spend Wisely!\n";
            cout << "Input tokens here: ";
            cin >> numAnswer;

            if (numAnswer == 5 && tokens >= 5) {
                tokens -= 5;

                srand(time(0));

                int spinResult = rand() % 3;

                if (spinResult == 0) {
                    cout << "Good job mate, you won a " << car << ". You earned " << tokens100 << " tokens too!\n";
                    tokens += tokens100;
                }
                else if (spinResult == 1) {
                    cout << "womp womp, you " << lose << ". Better luck next time BUDDY.\n";
                }
                else {
                    cout << "Good job, you won " << tokens10 << " tokens.\n";
                    tokens += tokens10;
                }

                cout << "You now have " << tokens << " tokens.\n";

                question();
            }
            else {
                cout << "Invalid input or insufficient tokens.\n";
                question();
            }
        }
        else if (answer == "no" || answer == "NO" || answer == "No") {
            question();
        }
    }

    void slotMachines() {
        // Slot Machine
        string diamond = "diamond";
        string bin = "bin";
        string clubs = "club";
        string hearts = "hearts";
        string spades = "spades";

        // Slot Machine Token Rewards
        int nothing = 0;
        int token10 = 10;
        int token25 = 25;
        int token30 = 30;
        int jackpot = 200;

        // Code
        cout << "Are you ready to play?" << "\n";
        cin >> answer;

        if (answer == "yes" || answer == "YES" || answer == "Yes") {
            cout << "Cost of spins: 10 Tokens" << "\n";
            cout << "Currently, you have " << tokens << ". Spend Wisely!\n";

            cout << "The rules are: Get 3 diamonds you get the jackpot, you get 3 bins you get nothing, you get 3 hearts you get 25 points, you get clubs you get 30 points and if you get spades you get 10." << "\n";
            cout << "if you get anything other than the three in a row you don't get any points. So are you ready to play?" << "\n";
            cin >> answer;

            if (answer == "yes" || answer == "YES" || answer == "Yes") {
                cout << "Input tokens here: ";
                cin >> numAnswer;

                if (numAnswer == 10 && tokens >= 10) {
                    tokens -= 10;

                    srand(time(0));
                    int spinResult = rand() % 21;

                    if (spinResult == 0) {
                        cout << "Diamond, Clubs, Hearts, Spades. 0 POINTS!";
                    }
                    else if (spinResult == 1) {
                        cout << "Diamond, Spades, Clubs, Hearts, 0 POINTS!";
                    }
                    else if (spinResult == 2) {
                        cout << "Clubs, Diamond, Spades, Hearts, 0 POINTS!";
                    }
                    else if (spinResult == 3) {
                        cout << "Clubs, Hearts, Diamond, Spades, 0 POINTS!";
                    }
                    else if (spinResult == 4) {
                        cout << "Clubs, Hearts, Diamond, Spades, 0 POINTS!";
                    }
                    else if (spinResult == 5) {
                        cout << "Diamond, Diamond, Diamond, Diamond. 200 POINTS!";
                        tokens += jackpot;
                    }
                    else if (spinResult == 6) {
                        cout << "Clubs, Hearts, Spades, Diamond, 0 POINTS!";
                    }
                    else if (spinResult == 7) {
                        cout << "Clubs, Spades, Diamond, Hearts, 0 POINTS!";
                    }
                    else if (spinResult == 8) {
                        cout << "Clubs, Spades, Hearts, Diamond, 0 POINTS!";
                    }
                    else if (spinResult == 9) {
                        cout << "Hearts, Diamond, Clubs, Spades, 0 POINTS!";
                    }
                    else if (spinResult == 10) {
                        cout << "Spades, Spades, Spades, Spades, 10 POINTS!";
                        tokens += token10;
                    }
                    else if (spinResult == 11) {
                        cout << "Clubs, Clubs, Clubs, Clubs, 30 POINTS!";
                        tokens += token30;
                    }
                    else if (spinResult == 12) {
                        cout << "Hearts, Clubs, Spades, Diamond, 0 POINTS!";
                    }
                    else if (spinResult == 13) {
                        cout << "Hearts, Spades, Diamond, Clubs, 0 POINTS!";
                    }
                    else if (spinResult == 14) {
                        cout << "Bin, Bin, Bin, Bin, 0 POINTS!";
                    }
                    else if (spinResult == 15) {
                        cout << "Spades, Diamond, Clubs, Hearts, 0 POINTS!";
                    }
                    else if (spinResult == 16) {
                        cout << "Spades, Diamond, Hearts, Clubs, 0 POINTS!";
                    }
                    else if (spinResult == 17) {
                        cout << "Spades, Clubs, Diamond, Hearts, 0 POINTS!";
                    }
                    else if (spinResult == 18) {
                        cout << "Hearts, Hearts, Hearts, Hearts, 25 POINTS";
                        tokens += token25;
                    }
                    else if (spinResult == 19) {
                        cout << "Spades, Hearts, Diamond, Clubs, 0 POINTS!";
                    }
                    else if (spinResult == 20) {
                        cout << "Spades, Hearts, Clubs, Diamond, 0 POINTS!";
                    }

                    cout << " You now have " << tokens << " tokens.\n";
                    question();
                }
            }
            else if (answer == "no" || answer == "NO" || answer == "No") {
                cout << "Invalid input or insufficient tokens.\n";
                question();
            }
        }
    }

    void guessTheNum() {
        // Guess The Num Token Rewards
        int token20 = 20;
        int token10 = 10;

        // Code
        cout << "Aim of the game, guess the number. Every time you lose you lose 10 tokens, so I recommend getting some.\n Lucky for you, you don't need to pay!" << "\n";
        cout << "Are you ready to play?" << "\n";

        cin >> answer;

        if (answer == "yes" || answer == "YES" || answer == "Yes") {
            cout << "In this, you will need to guess a number between 1 - 30. Every time you guess it right you get 20 tokens. Guess the number right now: ";
            cin >> numAnswer;
            srand(time(0));

            int spins = rand() % 31;

            cout << spins;

            if (numAnswer == spins) {
                cout << "Congrats! You guessed it!" << "\n";
                tokens += token20;
                question();
            }
            else {
                cout << "Whoops, You got it wrong! There goes 10 tokens." << "\n";
                tokens -= token10;
                cout << "Again?" << "\n";
                cin >> answer;
                if (answer == "yes" || answer == "YES" || answer == "Yes") {
                    guessTheNum();
                }
                else if (answer == "no" || answer == "NO" || answer == "No") {
                    question();
                }
            }
        }
        else if (answer == "no" || answer == "NO" || answer == "No") {
            cout << "Invalid Answer!";
            question();
        }
    }
};

int main() {
    Casino casino;
    casino.question();

    return 0;
}
