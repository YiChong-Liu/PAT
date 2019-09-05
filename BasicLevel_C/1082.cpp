/*author:moonlake23
question1082:射击比赛*/

typedef struct {
	char ID[5];
	int x;
	int y;
}Player;

#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int cases;
	scanf("%d", &cases);
	Player group[10001];
	for (int i = 0; i < cases; i++) {
		scanf("%s %d %d", group[i].ID, &group[i].x, &group[i].y);
	}

	double max = 0.0,min=200.0,distance;
	char IDmax[5], IDmin[5];
	for (int i = 0; i < cases; i++) {
		distance = sqrt(group[i].x*group[i].x + group[i].y*group[i].y);
		if (distance > max) {
			max = distance;
			strcpy(IDmax, group[i].ID);
		}
		if (distance < min) {
			min = distance;
			strcpy(IDmin, group[i].ID);
		}
	}
	printf("%s %s\n", IDmin, IDmax);
	return 0;
}



