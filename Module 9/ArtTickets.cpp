#include <iostream>
using namespace std;

string noDiscount()
{
    return "You're not preregistered and don't qualify for a 5% discount";
}

string discount()
{
    return "You are preregistered and qualify for a 5% discount";
}

int main()
{
    char TicketResponse;
    cout << "Did you preregister?" << endl;
    cin >> TicketResponse;

        while(TicketResponse != 'Y' && 'N')
        {
            cout << "That's not a valid response, try again: " << endl;
            cin >> TicketResponse;
        }

        if(TicketResponse == 'Y')
        {
            cout << discount() << endl;
        }
        else if(TicketResponse == 'N')
        {
            cout << noDiscount() << endl;
        }
   
   return 0;

}