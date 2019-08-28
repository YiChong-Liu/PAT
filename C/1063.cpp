/*author:moonlake23
question1063:计算谱半径*/

#include<stdio.h>
#include<math.h>
int main() {
	int cases;
	scanf("%d", &cases);
	double max = 0.0;
	for (int i = 0; i < cases; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		double radius = sqrt(a*a + b*b);
		if (max < radius)max = radius;
	}
	printf("%.2f\n", max);
	return 0;
}




