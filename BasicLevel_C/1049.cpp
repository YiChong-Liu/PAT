/*author:moonlake23
 question1049:数列的片段和*/

/*题目解析:对位置i元素,包括前面元素一共i+1个片段；
后面每个元素都可以与前面的一个片段结合形成新片段；
则:一共有(i+1)*(cases-i)个片段，即该元素被调用(i+1)*(cases-i)次 */
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	double sum = 0.0, temp;
	for (int i = 0; i < cases; i++) {
		cin >> temp;
		sum += temp*(i + 1)*(cases - i);
	}
	printf("%.2lf\n", sum);
	return 0;
}