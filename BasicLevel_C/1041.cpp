/*author:moonlake23
question1041:考试座位号*/

#include<stdio.h>
typedef struct student {
	char testnumber[17];//准考证号
	int computernumber;//试机座位号
	int seatnumber;//考试座位号
}StudentInformation;

int main() {
	int students;
	scanf("%d",&students);
	StudentInformation stu[1001];
	for (int i = 0; i < students; i++) {
		scanf("%s %d %d",stu[i].testnumber,&stu[i].computernumber, &stu[i].seatnumber);
	}

	int checkstudents;
	scanf("%d", &checkstudents);
	int computernum[1001];
	for (int j = 0; j < checkstudents; j++) {
		scanf("%d", &computernum[j]);
	}

	for (int j = 0; j < checkstudents; j++) {
		for (int i = 0; i < students; i++) {
			if (stu[i].computernumber == computernum[j]) {
				printf("%s %d\n", stu[i].testnumber,stu[i].seatnumber);
			}
		}
	}

	return 0;
}




