#include<stdio.h>
#include<string>
#include<time.h>
int robustness_int(int min,int max);
void guess()
{
	int guessInput,guess0,times = 0;
	srand((unsigned)time(NULL));
	guess0 = rand() % 20 + 1;
	do{
	printf("��һ������1��20֮�䣩\n");
	guessInput = robustness_int(1 , 20);
	if(guessInput < guess0)
	{
		printf("̫С��\n");
		times++;
		printf("�㻹��%d�λ���\n",7 - times);
	}
	if(guessInput == guess0)
	{
		printf("�ɹ��ˣ�\n");
		break;
	}
	if(guessInput > guess0)
	{
		printf("̫����\n");
		times++;
		printf("�㻹��%d�λ���\n",7 - times);
	}
	}while(times < 7);
}
void game()
{
	int Input;
	char ch;
	do{
	printf("1.��������Ϸ\n");
	Input = robustness_int ( 1 , 2);
	printf("�Ǥϡ����`���ʼ��ޤ��礦\n");
	switch (Input)
	{
	case 1:guess();break;
	default:break;
	}
	printf("���������(y �� n)\n");
	fflush(stdin);
	scanf("%c",&ch);
	}while (ch != 'y');
}