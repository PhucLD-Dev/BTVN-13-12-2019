#include<stdio.h>
int main(){
int i,n;
printf("tong ca chu so can nhap n= :\n");
scanf("%d",&n);
int aray[n];
for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&aray[i]);
		for (int j=0;j<i;j++)
		    {
		    	if(aray[i]==aray[j]){
		    		i--;
		    		printf("da trung` so' thu %d.vui long nhap lai\n",j+1);
				}
				
			}
	}
	return 0;
}
