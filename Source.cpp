#include<iostream>

using namespace std;
int main() {
	int x, y, z, n, m, average;
	cout << "enter marks in first subject" << endl;
	cin >> x ;
	cout << "enter marks in second subject" << endl;
	cin >> y;
    cout << "enter marks in third subject" << endl;
	cin >> z;
	cout << "enter marks in fourth subject" << endl;
	cin >> n;
	cout << "enter marks in fifth subject" << endl;
	cin >> m;
	average = (x + y + z + m + n) / 5;
	if (average >= 91 && average < 100)
		cout << "A1" << endl;
	
	else if (average >= 81 && average < 90)
		cout << "A2" << endl;

	else if (average >= 71 && average < 80)
		cout << "B1" << endl;

	else if (average >= 61 && average < 70)
			cout << "B2" << endl;

	else if (average >= 51 && average < 60)
	        cout << "C1" << endl;

	else if (average >= 41 && average < 50)
		cout << "C2" << endl;

	else if (average >= 33 && average < 40)
		cout << "D" << endl;

	else if (average >= 21 && average < 32)
		cout << "E1" << endl;

	else if (average >= 0 && average < 20)
		cout << "E2" << endl;
	return 0;

}