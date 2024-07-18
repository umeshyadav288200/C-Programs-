#include<stdio.h>
int main()  //Code given by Susobhan Akhuli
{
int n,sum=0,rem;
printf("Enter the integer number: ");
scanf("%d",&n);  //Input integer number
while(n)  //Loop rotates till number greater than 0
{
rem=n%10;  //Calculate last digit of the number
n=n/10;  //Delete last digit of the value
sum=sum+rem;  //Count number of digits
}
printf("\nThe sum of the digits are: %d",sum); //Print sum of digits
return 0;
}
