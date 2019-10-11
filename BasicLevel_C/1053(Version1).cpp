/*author:moonlake23
question1053:住房空置率*/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int houses, CheckDays;
	double standard;
	cin >> houses >> standard >> CheckDays;
	int situations = houses;
	int LikelyEmpty = 0, Empty = 0;

	while (situations--) {
		int days, countlow = 0,counthigh=0;
		cin >> days;
		double temp;
		for (int i = 0; i < days; i++) {
			cin >> temp;
			if (temp < standard)countlow++;
		}
		if (countlow > days / 2) {
			if (countlow > CheckDays) {
				Empty++;
			}
			else {
				LikelyEmpty++;
			}
		}
	}

	double result1 =(double)LikelyEmpty*100.0 /houses;
	double result2 =(double) Empty*100.0 / houses;
	printf("%.1f%% %.1f%%\n", result1, result2);
	return 0;
}