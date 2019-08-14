#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	char name[11];
	char num[11];
	int score;
}Student;
int main()
{
	Student *p;
	int times,i,j;
	scanf("%d", &times);
	p = (Student *)malloc(times * sizeof(Student));
	for (i = 0; i < times; i++) {
		scanf("%s %s %d", (p+i)->name, (p+i)->num,&(p+i)->score);
	}
	int max, min;
	max = min = p->score;
	for (i = 0; i < times; i++)
	{
		if ((p+i)->score > max)max = (p+i)->score;
		if ((p+i)->score < min)min = (p+i)->score;
	}
	for (i = 0; i < times; i++)
	{
		if ((p+i)->score == max) {
			printf("%s %s\n", (p+i)->name, (p+i)->num);
			for (j = 0; j < times; j++) {
				if ((p+j)->score == min) 
				{
					printf("%s %s\n", (p+j)->name, (p+j)->num);
					break;
				}
			}
			break;
		}
	}
	return 0;
}