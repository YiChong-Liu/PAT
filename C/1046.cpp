/*author:moonlake23
question1046:»®È­*/

#include<stdio.h>
int main() {
	int times, Alose=0, Blose=0;
	scanf("%d", &times);
	while (times--) {
		int Asay, Apoint, Bsay, Bpoint;
		scanf("%d %d %d %d", &Asay, &Apoint, &Bsay, &Bpoint);
		int sum = Asay + Bsay;
		if (sum == Apoint&&sum != Bpoint)Blose++;
		else if (sum == Bpoint&&sum != Apoint)Alose++;
	}
	printf("%d %d\n", Alose, Blose);
	return 0;
}




