#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int robustness_int(int min,int max);
//����
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
        printf("���������½�\n");
		min = robustness_int(0,100000);
		max = robustness_int(0,100000);
        do
        {
               q = sushu(min);
               if(q > 0)
                       printf("%d������\n",q);
               min ++;
        }
        while(min <= max );
        }
        while(min != 1618 && max != 1618);
        return 0;
}
//����
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
printf("��ϲ������?\n");
printf("1 ���� ͬ��\n");
printf("0 ���� ���Ǹ�����\n");
printf("������������Ļش�.\n");
x = robustness_int(0,1);
if(x == 1)
printf("�������е����ң����Ǻ�������ǰ���̵档\n");
else
do
{
printf("��Ҫ��Ϊ����С¹��ȸԾ�����������ѡ��\n");
printf( "��������һ������˳��������ġ�\n");
printf("��Ҫ����1��ζ���Ҹ���0�����Żںޡ�\n");
scanf("%d",& x);
}
while(x != 1);
love();
printf("������ɫ������\n");
printf("δ����������ϲ���㣬��Ǹ�ˡ�\n");
system("color 7C");
}
//��������
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
//��˹����
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
//���������
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
//����
void sakura()
{
		int Input;
		char ch;
		do{
		printf("��ӭ�����Ƶ�����\n--��֮Ԫʼ\n");
		printf("��Ŀǰֻ��һЩ�����򵥵Ĺ���\n");
		printf("1.����\n");
		printf("2.����\n");
		printf("3.��������\n");
		printf("4.��˹����(�������֣�\n");
		printf("5.��˹���루�����ַ���\n");
		printf("6.��������㣨��bug���������ܴ���34)\n");
		Input = robustness_int(1,10);
		switch(Input)//������������Ǳ����
		{
		case 1:qiusushu();break;
		case 2:loveyou();break;
		case 3:binbao();break;
		case 4:asc();break;
		case 5:asc1();break;
		case 6:C();break;
		default:printf("Are you OK?\n");break;
		}
		printf("���������(y �� n)\n");
		fflush(stdin);
		scanf("%c",&ch);
		}while(Input != 1618 && ch != 'y' && ch != 'Y' );
}