#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[1000], occ[1000], place[1000];
	int age;
	printf("Introduce yourself\n");
	printf("Input your name : ");
	scanf("%[^\n]", name);
	printf("Input your age : ");
	scanf("%d", &age);
	printf("Input your occupation : ");
	scanf("%s", occ);
	printf("Where do you work? : ");
	scanf("%s", place);
	printf("Hello my name is %s. Age %d year old. I am %s at %s. nice to meet you.", name, age, occ, place);
	return 0;
}