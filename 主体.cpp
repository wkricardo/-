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
		printf("��ӭ�����Ƶ�����\n--��֮Ԫʼ\n");
		printf("1.С����\n");
		printf("2.С��Ϸ\n");
		Input = robustness_int(1,3);
		switch (Input)
		{
		case 1:sakura();break;
		case 2:game();break;
		default:break;
		}
	}
}