#include <iostream>
using namespace std;

    // Initializations for all values
    float Signcost = 35.00;
    float Extraprice = 4.00;
    float Oakprice = 20.00;
    float Goldprice = 15.00;
    float Total = 35.00;
    float Base = 5;

    // Calculation of extra letters
    float Extratotal(int Letters)
    {
        
        int Extraletters = Letters - Base;
        return Extraletters * Extraprice;
         
    }

int main()
{
    cout << "The base price for a sign is " << Signcost << "$" << endl;
    
    // Finding extra letters
    int Letters;
    cout << "How many letters are you writing?" << endl;
    cin >> Letters;
    float Lettercost = Extratotal(Letters);
    Total += Lettercost;

        // Oak or pine sign process
        int Signmaterial;
        cout << "Do you want an oak or pine sign?" << endl;
        cout << "1 for oak, 2 for pine: " << endl;
        cin >> Signmaterial;
 
            if(Signmaterial = 1)
            {
                Total += Oakprice;
            }
        
        // Gold lettered process
        int Lettermaterial;
        cout << "Do you want gold lettering?" << endl;
        cout << "1 for yes, 2 for no: " << endl;
        cin >> Lettermaterial;

            
            if(Lettermaterial = 1)
            {
                Total += Goldprice;
            }
            
            // Final Total
            cout << "If everything is right, your total is " << Total << "$" << endl;
}

