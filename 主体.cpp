#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int robustness_int(int min,int max);
int enter();
void sakura();
void game();
int main()
{
	int c;
	c = enter();
	if(c == 0)
	{
		int Input;
		printf("欢迎来到燮的王国\n--燮之元始\n");
		printf("1.小程序\n");
		printf("2.小游戏\n");
		Input = robustness_int(1,3);
		switch (Input)
		{
		case 1:sakura();break;
		case 2:game();break;
		default:break;
		}
	}
}