    /*
    When two points in time are compared, each given as hours (in military time, ranging
    from 0 and 23) and minutes, the following pseudocode determines which comes
    first.
    If hour1 < hour2
    time1 comes first.
    Else if hour1 and hour2 are the same
    If minute1 < minute2
    time1 comes first.
    Else if minute1 and minute2 are the same
    time1 and time2 are the same.
    Else
    time2 comes first.
    Else
    time2 comes first.
    Write a program that prompts the user for two points in time and prints the time that
    comes first, then the other time.  
    */

#include <iostream>

using namespace std;

int main(){

    cout << "This is for determining which time comes first in the format of (HHMM), " << endl;
    cout << "where 'HH' for hours(0-23) while 'MM' for minutes(0-59)." << endl << endl;

    int time[2], hour[2], minute[2];
    string prompt[2] = {"Please enter time1 (HHMM): ", "Please enter time2 (HHMM): "};

    // Input validation
    for (int i = 0; i < 2; i++) {
        cout << prompt[i]; cin >> time[i];

        hour[i] = time[i] / 100; 
        minute[i] = time[i] % 100;

        while (cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Not an integer. Please re-enter: "; cin >> time[i]; 
        }

        while (hour[i] < 0 || hour[i] > 23){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Hour must be between 0 and 23. Please re-enter: "; cin >> time[i];
            hour[i] = time[i] / 100;
        }

        while (minute[i] < 0 || minute[i] > 59){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Minute must be between 0 and 59. Please re-enter: "; cin >> time[i];
            minute[i] = time[i] % 100;
        }

        while (typeid(time[i]) != typeid(int)){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Not an integer. Please re-enter: "; cin >> time[i];
        }
        cout << endl;   
    }

    int first_time, second_time;

    // Check which time comes first;
    if (hour[0] < hour[1]){
        first_time = time[0];
    } else if (hour[0] == hour[1]){
        if (minute[0] < minute[1]){
            first_time = time[0];
        } else if (minute[0] == minute[1]){
            cout << "time1 and time2 are the same." << endl;
            return 0;
        } else{
            first_time = time[1];
        }
    } else {
        first_time = time[1];
    }

    if (first_time == time[0]) {
        second_time = time[1];
    } else{
        second_time = time[0];
    }

    cout << first_time << " comes first while " << second_time << " comes next." << endl;
       
    return 0;
}

// Input validation is not ok + repetition of code 

    



