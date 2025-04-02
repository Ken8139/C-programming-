#include<stdio.h>
typedef struct{
	char name[10];
	int rollNo;
	float cgpa;
}student;
int main(){
	student s[3];
	for(int i=0;i<3;i++){
		printf("\nName of the student:");
		scanf("%s",s[i].name);
		printf("\nEnter the roll no:");
		scanf("%d",&s[i].rollNo);
		printf("\nEnter the CGPA:");
		scanf("%f",&s[i].cgpa);
	}
	for(int i=0;i<3;i++){
		printf("\nName of the student: %s",s[i].name);
		printf("\nRoll No: %d",s[i].rollNo);
		printf("\nTotal CGPA: %f",s[i].cgpa);
	}
	return 0;
}

