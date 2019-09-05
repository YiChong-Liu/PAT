/*author:moonlake23
question1051:复数乘法*/

/*可以作为一道高中
数学题，嘿嘿嘿*/

/*有一点坑的地方在于:
注意下实部和虚部在
靠近0处（-0.005到0.005）
变成0的问题*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double r1, p1, r2, p2, A, B;
	cin >> r1 >> p1 >> r2 >> p2;
	A = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
	B = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);
	if (A + 0.005 >= 0 && A < 0)
		printf("0.00");
	else
		printf("%.2f", A);
	if (B >= 0)
		printf("+%.2fi", B);
	else if (B + 0.005 >= 0 && B < 0)
		printf("+0.00i");
	else
		printf("%.2fi", B);
	return 0;
}