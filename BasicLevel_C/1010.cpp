/*author:moonlake23
question1010:一元多项式求导*/

#include<iostream>
using namespace std;

int main() {
	int xishu, zhishu,flag=0;
	while (cin >> xishu >> zhishu) {
		if (zhishu != 0) {
			if (flag == 1)cout << " ";
			xishu = xishu*zhishu;
			zhishu -= 1;
			cout << xishu << " " << zhishu;
			flag = 1;
		}
	}
	if (!flag)cout << "0 0" << endl;

	return 0;
}