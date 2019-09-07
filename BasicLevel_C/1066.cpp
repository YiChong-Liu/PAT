/*author:moonlake23
question1066:图像过滤*/

#include<stdio.h>
int main() {
	int rows, lines;
	scanf("%d %d", &rows, &lines);

	int min, max, option;
	scanf("%d %d %d", &min, &max, &option);

	int images[501][501];
	for (int j = 0; j < rows; j++) {
		for (int i = 0; i < lines; i++) {
			scanf("%d", &images[i][j]);
			if (images[i][j] >= min&&images[i][j] <= max)
				images[i][j] = option;
		}
	}

	for (int j = 0; j < rows; j++) {
		for (int i = 0; i < lines; i++) {
			if (images[i][j] < 10)printf("00%d", images[i][j]);
			else if (images[i][j] < 100)printf("0%d", images[i][j]);
			else
				printf("%d", images[i][j]);

			if (i == lines - 1)printf("\n");
			else
				printf(" ");
		}
	}
	return 0;
}