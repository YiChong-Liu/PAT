/*author:moonlake23
question1036:跟奥巴马一起编程*/

#include<stdio.h>
int main() {
	int lines, rows;
	char str;
	scanf("%d %c", &lines, &str);
	if (lines % 2 == 0)rows = lines / 2;
	else
		rows = (lines + 1) / 2;
	for (int j= 0; j < rows; j++) {
		if (j == 0 || j == rows - 1) {
			for (int i = 0; i < lines; i++) {
				printf("%c", str);
			}
			printf("\n");
		}
		else {
			printf("%c", str);
			for (int i = 1; i < lines - 1; i++) {
				printf(" ");
			}
			printf("%c\n", str);
		}
	}
	return 0;
}
