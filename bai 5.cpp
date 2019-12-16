#include <stdio.h>
int main(){
	int aray[10];
	for(int i=0;i<10;i++)
	{
		printf("nhap so aray%d : ",i+1);
		scanf("%d",&aray[i]);
		int s=0;
		for(;aray[i]!=0;aray[i]/=10)
		{
			s=s*10+aray[i]%10;
		}
		printf("nghich dao cua aray[%d] la %d\n",i+1,s);
	}
	return 0;
}
