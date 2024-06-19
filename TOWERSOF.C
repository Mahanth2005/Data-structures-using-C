#include<stdio.h>
#include<conio.h>
void towersofhanoi(int n,char fromTower,char toTower,char auxTower)
{
	if(n==1)
	{
		printf("\n move disk 1 from %c tower to %c tower \n",fromTower,toTower);
	}
	else
	{
		towersofhanoi(n-1,fromTower,auxTower,toTower);
		printf("\n move disk %d from %c tower to %c tower \n",n,fromTower,toTower);
		towersofhanoi(n-1,auxTower,toTower,fromTower);
	}
}
void main()
{
	int n;
	clrscr();
	printf("enter the no of disk: ");
	scanf("%d",&n);
	towersofhanoi(n,'A','C','B');
	getch();
}