#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//	putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	printf("请输入密码：");
//	int password[20] = { 0 };
//	scanf("%d", password);
//	printf("确认密码(Y/N)：");
//	int ch = 0;
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	int cha = getchar();
//	if (cha == 'Y')
//	{
//		printf("正确");
//	}
//	else
//	{
//		printf("错误");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (; (a = getchar()) != EOF; )
//		putchar(a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	do
//	{
//		break;
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//int main()
//{
//	printf("计算n的阶乘\n请输入n的值:>");
//	int a = 1;
//	int sum = 1;
//	int n = 1;
//	int s = 0;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		sum = a * sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int sum = 0;
//	int s = 1;
//	for (a = 1; a <= 10; a++)
//	{
//		s = s * a;
//		sum = sum + s;
//	}
//	printf("%d\n", sum);
//	return 0;//计算1！+2！+......+10！
//}


int main()//查找有序数列
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int Mid = (left + right) / 2;
		if (arr[Mid] < k)
		{
			left = Mid + 1;
		}
		else if (arr[Mid] > k)
		{
			right = Mid - 1;
		}
		else
		{
			printf("找到目标，下标为：%d\n", Mid);
			break;
		}
	}
	while (left > right)
	{
		printf("没有\n");
		break;
	}
	return 0;

}