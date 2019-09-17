/*author:moonlake23
question1077:互评成绩计算*/

#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	const int maxnum = 101;
	int cases, fullmark;
	cin >> cases >> fullmark;
	int rows = cases;
	while (cases--) {
		int scores[maxnum];
		for (int i = 0; i < rows; i++) {
			cin >> scores[i];
		}

		int G1, G2,all=0;
		G1 = scores[0];
		int max = 0, min = fullmark,mark=0;
		for (int i = 1; i < rows; i++) {
			if (scores[i] >= 0 && scores[i] <= fullmark) {
				mark++;
				all += scores[i];
				if (scores[i] > max)max = scores[i];
				if (scores[i] < min)min = scores[i];
			}
		}

		G2 = (all-max-min) / (mark-2);
		double result = (double)(G1 + G2) / 2.0;
		if ((int)(result * 2) % 2 == 1)result += 0.5;
		cout << result<<endl;
	}
	return 0;
}