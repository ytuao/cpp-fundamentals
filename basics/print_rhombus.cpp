#include <iostream>
using namespace std;

int main() 
{
    int side_len;
    cout << "Enter the side length: ";
    cin >> side_len;

    if (side_len == 0) {cout << "...it doesn't exit!" << endl; return 0;}

    for (int i = 1; i <= side_len; i++)
    {   
        for (int space = side_len - i; space >= 0; space--)
        {
            cout << " ";
        }
        for (int asterisk = 1; asterisk <= 2 * i - 1; asterisk++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int j = side_len - 1; j >= 1; j--)
    {
        for (int space2 = 0; space2 <= side_len - j; space2++)
            {
                cout << " ";
            }
        for (int asterisk2 = 2 * j - 1; asterisk2 >= 1; asterisk2 --)
            {
                cout << "*";
            }

        cout << endl;
    }

    return 0;
    
}
