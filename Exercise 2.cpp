#include<stdio.h>
int main()
{
	float capital;
	float interest;
	float interestrate;
	int years;
	printf("Enter Capital Sum\n");
	scanf("%f",&capital);
	printf("Enter Rate of Interest\n");
	scanf("%f",&interestrate);
	printf("Enter No of years\n");
	scanf("%d",&years);
	for(int i=1;i<=years;i++){
		interest=capital*(interestrate/100);
		capital+=interest;
		interest=capital;
		printf("Year     Interest       Sum\n%d        %f   %f\n",i,interest,capital);
	}
	return 0;
}
