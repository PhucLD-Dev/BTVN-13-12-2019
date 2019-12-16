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
for(i=0;i<n;i++)
	if(aray[i]<0){
	aray[i]=0;}
	printf("\nMang sau khi thay the la: ");
    for(int i = 0;i < n;++i){
      printf("%d ", aray[i]);}
return 0;
}
