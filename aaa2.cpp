#include<stdio.h>
int main()
{
	int sum=0;
	//loop through the first 10 odd numbers
	for (int i=1,count=0;count<10;i+=2,count++)
	{
		sum +=i;
	}
	//print the sum
	printf ("the sum of the first 10 odd numbers is:%d\n",sum);
	return 0;
}
