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
	*///1.�������ʾ�������ά����Ƚ�ʱ��ע��[0]������㣬���ҽ�UserName[0]��Ϊһ���ַ�����Ƚ�2.������������һ��'\0'�������������Ľ����Ӷ��Ƚ�
	char USinput[20];
	char PSinput[20];
	char ch;
	int times = 0;
	do
	{
	int i = 0;
	printf("����\n����������������");
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
	printf("�������������룺");
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
		}//����˸񷽷�copy�Ի������������˸����˸�����������Լ��ĸĽ������ַ����ڲ���scanfʱ���Ǻ����õ�
	}
	PSinput[i] = '\0';
	for(int i = 0;i <= 2;i++)
	{
	if(strcmp(UserName[i],USinput) == 0 && strcmp(PassWord[i],PSinput) == 0)
	{
		printf("\n��ӭ���ҵ����ˣ�Ϊ���������ҵ�����\n");
		success = 1;
		break;
	}
	else if(i == 2)
	{
		printf("\n�������������\n");
		printf("\n�㻹��%d�λ���\n",2 - times);
	}
	}
	if(success == 1)
		break;
	times++;
	}
	while (times < 3);
	if(times == 3)
	{
			printf("\n��ð����֮�������������\n");
			return_ = -1;
	}
	return return_;//����return�Ե�һ��return��ֵΪ׼���Ҫ��returnֵ�仯��Ӧ����һ������
}