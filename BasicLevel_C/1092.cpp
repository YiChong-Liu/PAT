/*author:moonlake23
question1092:最好吃的月饼*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int moon, city;
	scanf("%d %d", &moon, &city);
	int mooncake[1001] = { 0 };
	int citys[1001][101];
	for (int j = 0; j < city; j++) {
		for (int i = 0; i < moon; i++) {
			scanf("%d", &citys[i][j]);
			mooncake[i] += citys[i][j];
		}
	}

	int max = 0, maxmoon[1001];
	int mark = 0;
	for (int i = 0; i < moon; i++) {
		if (mooncake[i] > max)max = mooncake[i];
	}
	cout << max << "\n";
	for (int i = 0; i < moon; i++) {
		if (mooncake[i] == max) {
			maxmoon[mark++] = i + 1;
		}
	}
	sort(maxmoon, maxmoon + mark);
	for (int i = 0; i < mark; i++) {
		if (i == mark - 1)printf("%d\n", maxmoon[i]);
		else
			printf("%d ", maxmoon[i]);
	}
	return 0;
}
