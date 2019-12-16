#include<stdio.h>
int main(){
int i,n;
printf("tong ca chu so can nhap n= :\n");
scanf("%d",&n);
int aray[n];
for(i=0;i<n;i++){
	printf("nhap so trong day %d=\n", i);
	scanf("%d",&aray[i]);
}
int s=0;
int count=0;
float tb;
for(i=0;i<n;i++)
	if(aray[i]%2!=0){
	count=count + 1;
	s=s+aray[i];}
	tb=(float)s/count;

printf("trung binh cac so le trong day la : %f",tb);
printf("\n tong so le:%d gom %d chu so!",s,count);
return 0;
}
