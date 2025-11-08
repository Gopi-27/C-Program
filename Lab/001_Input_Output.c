#include<stdio.h>
int main ()
{
	int tel,hin,eng,mat,sci,sum;
	float avg;
	printf("Enter The Marks of Telugu, Hindi, English, Maths, Science");
	scanf("%d %d %d %d %d",&tel, &hin, &eng, &mat,&sci);
	sum = tel + hin + eng + mat + sci;
	printf("The Total Score Out of 500 is : %d",sum);
	avg = (tel + hin + eng + mat + sci) / 5;
	printf("The Average Marks is: %.2f",avg);
	return 0;
}

