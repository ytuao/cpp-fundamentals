#include <iostream>
#include <iomanip>

using namespace std;

/* 
   *    *    *
   **   **   **
   ***  ***  ***
   **** **** ****
   ***************

   In order to print the above pattern, we may need 4 loops: 
   1 controls the number of rows, 
   1 controls the number of * in each row, 
   1 controls the the number of spaces in each row, 
   and 1 controls the number of triangles. 
   
*/

int main() {


    int height;
    int count;

    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    cout << "How many triangles do you want? ";
    cin >> count;


    // Outer: Controls the numebr of rows
    for (int i = 1; i <= height; i++){

            // Middle: Controls the number of triangles
            for (int t = 1; t <= count; t++){
                
                // Inner 1: Controls the number of '*'
                for (int j = 1; j <= i; j++){
                    cout << '*';
                }

                // Inner 2: Controls the number of ' '
                for (int k = height-i; k >= 1; k--){
                    cout << " "; // 
                }
            }
            cout << endl; // Change line after printing each row
        }
       
}






