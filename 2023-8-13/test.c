#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//�����������붨��
// 
// ����������

//#include"add.h"
//#include"sub.h"

//���뾲̬��
//#pragma comment(lib, "����")
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//�ӷ�
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	//����
//	int ree = sub(a, b);
//	printf("%d\n", ree);
//	return 0;
//}
//


//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ��
//���磺
//���룺1234�����1 2 3 4 .

//�ݹ��ʵ��

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//1 2 3 4
//	print(num);//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ��
//	
//	return 0;
//}

//%d ��ӡ�з��ŵ�����������������
//%u ��ӡ�޷��ŵ�����
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	
//
//	//4 3 2 1
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	//printf("%u\n", num);
//	return 0;
//}

#include<string.h>
//��д��������������ʱ���������ַ�������

//���ַ�������
//ģ��ʵ��strlen

//int my_strlen(char str[])//��������д���������ʽ
//int my_strlen(char* str)//��������д��ָ�����ʽ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}


//�ݹ����

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//			
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = { "abc" };
//	int len = my_strlen("arr");
//	printf("%d\n", len);
//	return 0;
//}


//�ݹ��ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}


//�����ķ�ʽ-�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret*= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//
//���n��쳲�������
//쳲�����������
//1 1 2 3 5 8 13 21 34 55 ...


//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	//printf("%d\n", ret);
//	printf("%d\n", ret);
//	return 0;
//}
//
//


