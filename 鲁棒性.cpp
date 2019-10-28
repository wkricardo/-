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
		printf("格式错误\n");
	fflush(stdin);//输入其他字符时必须清空缓冲区，否则error会重复出现
}
while(return_ == -1);
	return  return_;
}
