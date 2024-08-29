
#include<stdio.h>
#include<conio.h>
main()
{
	float unit,amou,total,bill;
	clrscr();
	printf("enter unt:");
	scanf("%f",&unit);
	if(unit>=0 && unit<=50)
	{
		amou=unit*0.5;

	}
	else if(unit>=51 && unit=150)
	{
		amou=25+((unit-50)*1.20);
	}
	else
	{

	}
}