#include <iostream>
using namespace std;

int product(int ProdNumber)
{
    int ProductTotal = 1;

        for(int i = 1; i <= ProdNumber; ++i)
        {
            ProductTotal *= i;
        }
    
    return ProductTotal;
}

int sum(int SumNumber)
{
    int NumberSum = 0;

        for(int i = 1; i <= SumNumber; ++i)
        {
            NumberSum += i;
        }
    
    return NumberSum;
}

int main()
{
    int Number, Sum, Product;
    cout << "Enter a positive integer or 0 to quit: " << endl;
    cin >> Number;

        if(Number == 0)
        {

        }
        else if(Number != 0)
        {
            Sum = sum(Number);
    Product = product(Number);

    cout << "The sum is: " << Sum << endl;
    cout << "The product is: " << Product << endl;

    return 0;
        }

    
}