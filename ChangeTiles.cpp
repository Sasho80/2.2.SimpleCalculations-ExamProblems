#include <iostream>
using namespace std;
int main() {
	int groundlength;
	double tileWidth;
	double tileLength;
	int  benchWidth;
	int benchLength;
	double areaTile;
	int areaBench;
	int totalArea;
	double areaToRepear;
	double tiles;
	double time;
	  cin >> groundlength;
	  cin >> tileWidth;
	  cin >> tileLength;
	  cin >> benchWidth;
	  cin >> benchLength;
	     areaBench = benchWidth * benchLength;
		 totalArea = groundlength * groundlength;
		 areaToRepear = (double)totalArea - areaBench;
		 tiles=areaToRepear / (tileWidth * tileLength);
		 cout << tiles << endl;
		 cout << tiles * 0.2 << endl;
	return 0;
}