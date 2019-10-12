#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("Nhap so n\n");
	scanf("%d",&n);
	for(i=3; i < n ; i++){
		if( i%3 == 0 ){
			printf("%d ",i);
		}
	}
	return 0;
}
