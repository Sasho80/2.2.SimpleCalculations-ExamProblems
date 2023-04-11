#include <iostream>
using namespace std;
int main() {
	double length;
	double width;
	cin >> length;
	cin >> width;
	if ((length>=3||length<=100)&&(width>=3||width<=100)&&(length>=width)){
		width = width * 100;
		length = length * 100;
		int col = ((int)width - 100) / 70;
		int row = ((int)length/120);
		int seat = row * col - 3;
		cout << seat << endl;
	}
	return 0;
}
