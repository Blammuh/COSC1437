#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    double transactionsDollarValue;
    int numTransactions;
    int numShifts;
    double productivityScore;
    double bonus;

    // Input from the user
    cout << "Enter the transactions dollar value: ";
    cin >> transactionsDollarValue;
    cout << "Enter the number of transactions: ";
    cin >> numTransactions;
    cout << "Enter the number of shifts worked: ";
    cin >> numShifts;

    // Calculate productivity score
    productivityScore = transactionsDollarValue / numTransactions / numShifts;

    // Determine bonus based on productivity score
    if (productivityScore <= 30)
        bonus = 50.00;
    else if (productivityScore >= 31 && productivityScore <= 69)
        bonus = 75.00;
    else if (productivityScore >= 70 && productivityScore <= 199)
        bonus = 100.00;
    else
        bonus = 200.00;

    // Output the result
    cout << "Employee's productivity score: " << productivityScore << endl;
    cout << "Employee's bonus: $" << bonus << endl;

    return 0;
}