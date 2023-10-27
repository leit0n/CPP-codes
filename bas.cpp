#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main (int argc, char * const argv[]) {
 
    int numberCount;
    int maxNumbers;
 
    cout << "Lottery Game" << endl << "=================================" << endl;
    cout << "How many Lottery Numbers = ";
    cin >> numberCount;
    cout << "from 1 to ? ";
    cin >> maxNumbers;
    cout << "You have chosen " << numberCount << " Lottery Numbers from 1 to " << maxNumbers << endl;
 
    int lotteryNumbers[numberCount];
    int i, j;
    bool newNumber;
 
    srand(0);
    for(i=0; i<numberCount; i++) // get numbers
    {
        do
        {   // Check Random
            lotteryNumbers[i] = rand() % maxNumbers + 1;
            newNumber = true;
            for (j=0; j<i; j++)
            {
                if (lotteryNumbers[j]==lotteryNumbers[i])
                { // Check for existing numbers
                    newNumber = false;
                }
            }
        } while (!newNumber);
    }
    for (i=0; i<numberCount; i++)
    {
        cout << lotteryNumbers[i] << " ";
    }
    cout << endl;
}