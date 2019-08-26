/*author:moonlake23
question1037:在霍格沃兹找零钱*/

#include<stdio.h>
int main() {
	int P, A;
	int galleon1, galleon2, sickle1, sickle2, knut1, knut2;
	scanf("%d.%d.%d", &galleon1, &sickle1, &knut1);
	scanf("%d.%d.%d", &galleon2, &sickle2, &knut2);

	P = (galleon1 * 17 + sickle1) * 29 + knut1;
	A = (galleon2 * 17 + sickle2) * 29 + knut2;

	int remain = A-P;

	//如果钱不够
	if (remain < 0) {
		remain=-remain;
		putchar('-');
	}
	printf("%d.%d.%d\n", remain / (17 * 29), remain/29 %17, remain % 29);
	return 0;
}
