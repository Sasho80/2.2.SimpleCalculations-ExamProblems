#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double PricePerKilogramVegetables;
	double PricePerKilogramFruit;
	int TotalKilogramsVegetables;
	int TotalKilogramsFruit;
	double price = 0;
	cin >> PricePerKilogramVegetables;
	cin >> PricePerKilogramFruit;
	cin >> TotalKilogramsVegetables;
	cin >> TotalKilogramsFruit;
				price = PricePerKilogramVegetables*TotalKilogramsVegetables;
			    price = price + (PricePerKilogramFruit * TotalKilogramsFruit);
				cout << setprecision(15) << price / 1.94 << endl;
	return 0;
}