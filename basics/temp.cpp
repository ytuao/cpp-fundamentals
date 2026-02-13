#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int player_guess;
    int ANS = rand() % 101;

    int count = 0;

    while (true){

        ++count;

        int num = (count % 2) ? 1 : 2;

        cout << "Player " << num << ", please enter your guess (0-100(integer)): ";
        cin >> player_guess;

        if (player_guess < 0 || player_guess > 100){
            cout << "Please enter a number between 0 and 100: ";
            continue;
        }

        if (player_guess == ANS){
            cout << "Player " << num << ", you win!!!" << endl;
            break;

        } else if (player_guess > ANS){
            cout << "Sorry, the number is smaller than " << player_guess << "..." << endl;

        } else{
            cout << "Sorry, the number is bigger than " << player_guess << "..." << endl;
        }
        }
    }




