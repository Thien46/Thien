#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3;
	printf("%d ",f1);
	for(int i=0;i<100;i++){
		if(f3<100){
			f3=f1+f2;
			printf("%d ",f2);
			f1=f2;
			f2=f3;
		}
	}
	return 0;
}
