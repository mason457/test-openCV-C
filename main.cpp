#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <conio.h>
int f(int value);
int g(int value);
void main()
{
	int a;
	printf("please key in:");
	scanf("%d",&a);
	f(a);
	printf("%d\n",f(a));
	getch();
}
int f(int value)
{
	int va1;
	va1 = value * g(value);
	return va1;
}
int g(int value)
{
	int va2;
	va2 = (value * 2) + 2;
	return va2;
}