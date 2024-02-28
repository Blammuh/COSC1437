#include <iostream>
using namespace std;

float bat[8];

float TotalAvg()
{
    float Total;
    float NewAvg;

    Total = bat[0] + bat[1] + bat[2] + bat[3] + bat[4]
    + bat[5] + bat[6] + bat[7];
    NewAvg = Total / 8;
    return NewAvg;
    
}


int main()
{
    
    int MaxAvg = 8;
    float BatAvg;
    float BiggestNumber = 0;
    float SmallestNumber = 4;

    for (int i = 0; i < MaxAvg; ++i)
    {
        cout << "Enter new bat average:";
        cin >> BatAvg;
        bat[i] = BatAvg;
        
            if ( i == 0 || BatAvg > BiggestNumber)
                BiggestNumber = BatAvg;

            if (i == 0 || BatAvg < SmallestNumber)
                SmallestNumber = BatAvg;
    }

    cout << "The biggest batting average is " << BiggestNumber << endl;
    cout << "The smallest batting average is " << SmallestNumber << endl;
    float TotalBat = TotalAvg();
    cout << "The total batting average is " << TotalBat << endl;
}
