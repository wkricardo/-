#include<stdio.h>
int robustness_int(int min,int max)
{
	int a,return_ = -1;
	int x;
do
{
	x = scanf("%d",&a);
	if(x == 1 && a >= min && a <= max)
	{
		return_ = a;
		break;
	}
	else
		printf("��ʽ����\n");
	fflush(stdin);//���������ַ�ʱ������ջ�����������error���ظ�����
}
while(return_ == -1);
	return  return_;
}
