#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int robustness_int(int min,int max);
//素数
int sushu(int x)
{
        int n = 1,a = 1;
        do
        {
               n ++;
               a = x % n;
        }
        while(a != 0 &&  n < (x - 1) );
        if (x == 2)
               a = 2;
        if (a == 0 || x == 1)
               x = -1;
        else
               x = x;
        return x;
}
int qiusushu()
{
        int min,max,q;
        do{
        printf("请输入上下界\n");
		min = robustness_int(0,100000);
		max = robustness_int(0,100000);
        do
        {
               q = sushu(min);
               if(q > 0)
                       printf("%d是素数\n",q);
               min ++;
        }
        while(min <= max );
        }
        while(min != 1618 && max != 1618);
        return 0;
}
//浪漫
int love()
{
    float y, x, z, f;
    for (y = 1.5f; y > -1.5f; y-=0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            z = x*x + y*y -1;
            f = z*z*z - x*x*y*y*y;
            putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)]:' ');
        }
        putchar('\n');
    }
return 0;
}
void loveyou()
{
int x;
printf("你喜欢我吗?\n");
printf("1 代表 同意\n");
printf("0 代表 你是个好人\n");
printf("现在请输入你的回答.\n");
x = robustness_int(0,1);
if(x == 1)
printf("今生所有的迷乱，都是和你相遇前的铺垫。\n");
else
do
{
printf("不要因为心中小鹿的雀跃而做出错误的选择。\n");
printf( "现在深吸一口气，顺从你的内心。\n");
printf("不要忘了1意味着幸福，0代表着悔恨。\n");
scanf("%d",& x);
}
while(x != 1);
love();
printf("今晚月色真美。\n");
printf("未经允许，擅自喜欢你，抱歉了。\n");
system("color 7C");
}
//冰雹猜想
int binbao()
{
        int n,s = 0,a;
        do
        {
        s = 0;
		n = robustness_int(0,10000);
        a = n;
        do
        {
               if(n % 2 == 0)
                       n = n / 2;
               else
                       n = 3 * n + 1;
               s ++;
        }
        while(n  > 1);
        printf("%d\n",s);
        }
        while( a != 1618);
        return 0;
}
//阿斯克码
int asc()
{
	int i = 1;
	int min,max;
	min = robustness_int(0,200);
	max = robustness_int(0,200);
	i = min;
	do
	{ 
		printf("%d.%c\n",i,i);
		i = i + 1;
	}
	while(i <= max);
	getchar();
	return 0;
}
void asc1()
{
	char c;
	getchar();
	scanf("%c",&c);
	printf("%d\n",c);
}
//组合数计算
int C()
{
		int x,y;
		do{
		x = robustness_int(0,100000);
		y = robustness_int(0,100000);
		int y_ = 1,x_ = 1,yx_ = 1;
        int i;
        for(i = 1;i <=y;i++)
               y_ *= i;
        for(i = 1;i <=x;i++)
               x_ *= i;
        for(i = 1;i <= y - x;i++)
               yx_ *= i;
        x = y_ / (x_ * yx_);
        printf("%d\n",x);
		}while(x != 1618);
        return x;
}//have bug
//程序
void sakura()
{
		int Input;
		char ch;
		do{
		printf("欢迎来到燮的王国\n--燮之元始\n");
		printf("它目前只有一些究极简单的功能\n");
		printf("1.素数\n");
		printf("2.浪漫\n");
		printf("3.冰雹猜想\n");
		printf("4.阿斯克码(输入数字）\n");
		printf("5.阿斯克码（输入字符）\n");
		printf("6.组合数计算（有bug输入数不能大于34)\n");
		Input = robustness_int(1,10);
		switch(Input)//函数后的括号是必须的
		{
		case 1:qiusushu();break;
		case 2:loveyou();break;
		case 3:binbao();break;
		case 4:asc();break;
		case 5:asc1();break;
		case 6:C();break;
		default:printf("Are you OK?\n");break;
		}
		printf("你想结束吗？(y 或 n)\n");
		fflush(stdin);
		scanf("%c",&ch);
		}while(Input != 1618 && ch != 'y' && ch != 'Y' );
}