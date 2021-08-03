

#include <iostream>
using namespace std;

int main() {

	int x;
	cin >> x;

	if (90 <=x && x<=100)
		cout << "A" << endl;
	else if (80 <= x)
		cout << "B" << endl;
	else if (70 <= x)
		cout << "C" << endl;
	else if (60 <= x)
		cout << "D" << endl;
	else
		cout << "F" << endl;

}