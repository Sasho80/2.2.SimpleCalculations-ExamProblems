#include <iostream>
using namespace std;
int main() {
    double bitcoins;
    double bitcoinsToLeva = 1168;
    double yuans;
    double yuansToDollars;
    double commission;
    double euro;
    double dollarsToLeva;
    cout.setf(ios::fixed);
    cout.precision(2);
    cin >> bitcoins;
    cin >> yuans;
    cin >> commission;
    yuansToDollars = yuans * 0.15;
    dollarsToLeva = yuansToDollars * 1.76;
    euro = (bitcoins * bitcoinsToLeva + dollarsToLeva) / 1.95;
    euro-=(euro*commission*0.01);
    cout << euro << endl;
	return 0;
}
