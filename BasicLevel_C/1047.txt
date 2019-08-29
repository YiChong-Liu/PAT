/*author:moonlake23
question1047:编程团体赛*/

#include<stdio.h>
int main() {
	int members;
	scanf("%d", &members);
	int team[1001] = { 0 };
	int t, player, score;

	for (int i = 0; i < members; i++) {
		scanf("%d-%d %d", &t, &player, &score);
		team[t] += score;
	}

	int max = 0, champion;
	for (int i = 0; i < 1000; i++) {
		if (team[i] > max) {
			max = team[i];
			champion = i;
		}
	}

	printf("%d %d\n",champion,max);

	return 0;
}




