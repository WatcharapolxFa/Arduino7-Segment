#include<iostream>
using namespace std;
bool check(int num)
{
	int six = num - 6; int nine = num - 9; int yesib = num - 20;
	if (six == 0) return true;
	else if (nine == 0) return true;
	else if (nine == 0) return true;
	else if (six < 0) return false;
	return check(six) || check(nine) || check(yesib);
}
int main()
{
	int a, i, b = 0;
	cin >> a;
	for (i = 1; i <= a; i++)
		if (check(i))
		{
			cout << i << endl;
			b++;
		}
	if (b == 0) cout << "no";
	return 0;
}