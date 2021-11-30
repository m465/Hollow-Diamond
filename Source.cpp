#include<iostream>
using namespace std;
int main() {
	int num, i, j, a;
	cout << "Enter size :";
	cin >> num;
	a = num / 2 + 1;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			if (j == a || j == num - a + 1) {
				cout << "*";
			}
			else
				cout << " ";
			
			
		}
		if (i <= num / 2)
			a--;
		else
			a++;
		cout << endl;
		}
	return 0;
	}
