#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, match_str;

    cout << "Please enter the long word: ";
    cin >> str;
    cout << "Please enter your matching word: ";
    cin >> match_str;

    for (int position = 0; position < str.length(); ++position)
    {
        for (int i = 1; i <= str.length() - position; ++i)  
        {
            string ch = str.substr(position, i);

            if (ch == match_str) 
            {
                cout << "The matching word is in this long word!" << endl;
                return 0; 
            }
        }
    }
    
    cout << "The matching word is not found..." << endl;
    return 0;
}
