#include<stdio.h>
void main()
{
 	int a[10],i,* p[10],n;
	printf("\n enter size:");
	scanf("%d",&n);
	for(i=0;i,n;i++)
	p[i]=&a[i];
	printf("\n enter element");
	for(i=0;i<n;i++)
	scanf("%d",p[i]);
	printf("\n the elements of array using pointers");
	for(i=0;i<n;i++)
	printf("%d",*p[i]);
}








