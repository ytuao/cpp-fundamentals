#include <iostream>

using namespace std;

int main() {

    const double PIG_W = 4.5, SHEEP_W = 3, TOTAL_W = 36;

    for (int i = 0; i <= TOTAL_W/PIG_W; i++) {
        for (int j = 0; j <= TOTAL_W/SHEEP_W; j++) {
            if ((i * PIG_W + j * SHEEP_W) == TOTAL_W) {
                cout << i << " * " << PIG_W << " + "
                     << j << " * " << SHEEP_W << " = " << TOTAL_W << endl;
            }
        }
    }

    
    }




