//usando git
//programa que imprime las tablas de multiplicar del 1 al 10
#include<stdio.h>
main()
{
	int n,i,r;
	for(n=1;n<=10;n++)
	{
	for(i=1;i<=10;i++)
	{
	r=n*i;
	printf("\n%d x %d = %d",n,i,r);
	}
	printf("\n");}	
	getche();
}
