#include<stdio.h>
int main(){
	char operator
	int num1,num2,result;
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the operator(+ for add,- for sub):);
		scanf("%d",&operator);
	printf("Enter the second number:");
	scanf("%d",&num2);
	if(operator=='+'){
		result=num1+num2;
	printf("Result:%d+%d=%d\n",num1,num2,result);
}else if(operator=='-'){
		result=num1-num2;
	printf("Result:%d-%d=%d\n",num1,num2,result);
}else{
	printf("Invalid operator");
	return 0;
}
