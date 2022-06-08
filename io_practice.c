#include<stdio.h>

int main(void){
	char f, m, l;
	int age;
	printf("Input your initials, followed by your age: \n");
	scanf("%c %c %c %d", &f , &m, &l, &age);
	printf("My name is: %c %c %c and my age is %d.\n", f ,m ,l , age);
	return 0;
}
