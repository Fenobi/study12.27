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
//	printf("���������룺");
//	int password[20] = { 0 };
//	scanf("%d", password);
//	printf("ȷ������(Y/N)��");
//	int ch = 0;
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	int cha = getchar();
//	if (cha == 'Y')
//	{
//		printf("��ȷ");
//	}
//	else
//	{
//		printf("����");
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
//	printf("����n�Ľ׳�\n������n��ֵ:>");
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
//	return 0;//����1��+2��+......+10��
//}


int main()//������������
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
			printf("�ҵ�Ŀ�꣬�±�Ϊ��%d\n", Mid);
			break;
		}
	}
	while (left > right)
	{
		printf("û��\n");
		break;
	}
	return 0;

}