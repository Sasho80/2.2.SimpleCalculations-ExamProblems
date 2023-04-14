#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int workDays;
	double moneysPerDay,moneysPerMonth;
	double dollarsToLeva;
	double salaryPerYear;
	double taxPerYear;
	double clearYearEarings;
	cin >> workDays;
	cin >> moneysPerDay;
	cin >> dollarsToLeva;
	cout.setf(ios::fixed);
	cout.precision(2);
	moneysPerMonth = workDays * moneysPerDay;
	salaryPerYear = moneysPerMonth * 12 + moneysPerMonth*2.5;
	taxPerYear = 0.25 * salaryPerYear;
	clearYearEarings = (salaryPerYear - taxPerYear)*dollarsToLeva;
	cout << clearYearEarings/365 << endl;
	return 0;
}