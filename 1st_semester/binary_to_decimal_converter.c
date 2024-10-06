/*
The following code takes a binary number as input and converts it into a decimal number

*/
#include<stdio.h>
#include<math.h>
int main(){
	int i, validate_binary, bin, power=0, sum=0, check, value;
	printf("please enter the binary number and i will change it to a decimal number: ");
	scanf("%d", &bin);
	validate_binary = bin;
	while(validate_binary>0){
	i = validate_binary % 10;
	validate_binary = validate_binary / 10;
	if (i>1 || i<0){
	printf("Please enter a valid vinary number:");
	scanf(" %d", &bin);
	validate_binary = bin;
}
}
	while(bin>0){
	check = bin % 10;
	value = check*(pow(2,power)) ;
	power += 1;
	sum+=value;
	bin = bin / 10;
}
	printf("decimal number: %d", sum);
}
