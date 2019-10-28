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
	printf("猜一个数（1到20之间）\n");
	guessInput = robustness_int(1 , 20);
	if(guessInput < guess0)
	{
		printf("太小了\n");
		times++;
		printf("你还有%d次机会\n",7 - times);
	}
	if(guessInput == guess0)
	{
		printf("成功了！\n");
		break;
	}
	if(guessInput > guess0)
	{
		printf("太大了\n");
		times++;
		printf("你还有%d次机会\n",7 - times);
	}
	}while(times < 7);
}
void game()
{
	int Input;
	char ch;
	do{
	printf("1.猜数字游戏\n");
	Input = robustness_int ( 1 , 2);
	printf("では、ゲームを始めましょう\n");
	switch (Input)
	{
	case 1:guess();break;
	default:break;
	}
	printf("你想结束吗？(y 或 n)\n");
	fflush(stdin);
	scanf("%c",&ch);
	}while (ch != 'y');
}