/*
the following code takes a decimal number as input and then converts that decimal number into binary number.
*/
#include<stdio.h>
int main(){
	int i, num;
	printf("please enter any number and i will convert it into a binary number");
	scanf("%d", &num);
	while(num>0){
	i = num % 2;
	num = num / 2;
	printf("%d\n", i);
}
}
