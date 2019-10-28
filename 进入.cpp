#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int enter()
{
	const char UserName[3][23] = {"wkricardo","wangke19","1"};
	const char PassWord[3][23] = {"wkwd2311234","w123456","1"};
	char test[20];
	int return_ = 0;
	int success = 0;
	/*
	test[0] = 'w';
	test[1] = 'a';
	test[2] = 'n';
	test[3] = 'g';
	test[4] = 'k';
	test[5] = 'e';
	test[6] = '1';
	test[7] = '9';
	test[8] = '\0';
	for( int i = 0;i <= 2;i++)
		for(int j = 0;j <= 23;j++) 
			printf("%c\n",UserName[i][j]);
	printf("%c %c\n",UserName[1][0],UserName[1][1]);
	getchar();
	printf("%d\n",strcmp(UserName[2],test));
	*///1.如测试所示，在与二维数组比较时，注意[0]才是起点，而且将UserName[0]视为一个字符数组比较2.在输入最后加入一个'\0'来标记输入数组的结束从而比较
	char USinput[20];
	char PSinput[20];
	char ch;
	int times = 0;
	do
	{
	int i = 0;
	printf("主人\n请输入您的尊名：");
	while(scanf("%c",&ch) == 1)
	{
		if(ch == '\n')
			break;
		else
			USinput[i] = ch;
		i ++;
	}
	USinput[i] = '\0';
	i = 0;
	printf("请输入您的密码：");
	while( (ch = getch()) != '\r')
	{
		if(ch != 8)
		{
			PSinput[i] = ch;
			putchar('*');
			i++;
		}
		else if(i != 0)
		{
			putchar('\b');
			putchar(' ');
			putchar('\b');
			i--;
		}//这个退格方法copy自互联网，但是退格不能退格输入框是我自己的改进，这种方法在不用scanf时还是很有用的
	}
	PSinput[i] = '\0';
	for(int i = 0;i <= 2;i++)
	{
	if(strcmp(UserName[i],USinput) == 0 && strcmp(PassWord[i],PSinput) == 0)
	{
		printf("\n欢迎你我的主人，为您服务是我的荣幸\n");
		success = 1;
		break;
	}
	else if(i == 2)
	{
		printf("\n密码错误请重试\n");
		printf("\n你还有%d次机会\n",2 - times);
	}
	}
	if(success == 1)
		break;
	times++;
	}
	while (times < 3);
	if(times == 3)
	{
			printf("\n敢冒充主之名，罪该万死！\n");
			return_ = -1;
	}
	return return_;//两个return以第一个return的值为准如果要让return值变化，应该设一个变量
}