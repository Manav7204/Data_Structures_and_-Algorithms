#include <iostream>
using namespace std;

int main() {
    float simple_interest;
    int principal_amount;
    float rate_of_interest;
    float time;

    cout << "Enter principal_amount: " << endl;
    cin >> principal_amount;
    cout << "Enter rate of interest: " << endl;
    cin >> rate_of_interest;
    cout << "Enter time in years: " << endl;
    cin >> time;

    simple_interest = (principal_amount*rate_of_interest*time)/100;
    cout << "Simple Interest = " << simple_interest << endl;
}