/*author:moonlake23
question1071:小赌怡情*/

#include<iostream>
using namespace std;

void WinGame(int tokens, int currentTokens) {
	printf("Win %d!  Total = %d.\n",tokens, currentTokens);
}

void LoseGame(int tokens,int currentTokens) {
	printf("Lose %d.  Total = %d.\n", tokens, currentTokens);
}
int main() {
	int OriginTokens, cases;
	cin >> OriginTokens >> cases;
	while (cases--) {
		//输光就结束程序
		if (OriginTokens <= 0) {
			cout << "Game Over." << endl;
			break;
		}

		int num1, judge, tokens, num2;
		cin >> num1 >> judge >> tokens >> num2;
		if (tokens > OriginTokens) {
			printf("Not enough tokens.  Total = %d.\n", OriginTokens);
		}
		else {
			if ((num2 > num1&&judge == 1)|| (num1 > num2&&judge == 0)) {
				OriginTokens += tokens;
				WinGame(tokens,OriginTokens);
			}
			else if ((num2 > num1&&judge == 0) || (num1 > num2&&judge == 1)) {
				OriginTokens -= tokens;
				LoseGame(tokens, OriginTokens);
			}
		}
	}

	return 0;
}