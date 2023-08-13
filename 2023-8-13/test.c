#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//函数的声明与定义
// 
// 函数的声明

//#include"add.h"
//#include"sub.h"

//导入静态库
//#pragma comment(lib, "名字")
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//加法
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	//减法
//	int ree = sub(a, b);
//	printf("%d\n", ree);
//	return 0;
//}
//


//接受一个整型值（无符号）按照顺序打印它的每一位。
//例如：
//输入：1234，输出1 2 3 4 .

//递归的实现

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
//	print(num);//接受一个整型值（无符号）按照顺序打印它的每一位。
//	
//	return 0;
//}

//%d 打印有符号的整数（有正负数）
//%u 打印无符号的整数
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
//编写函数不允许创建临时变量，求字符串长度

//求字符串长度
//模拟实现strlen

//int my_strlen(char str[])//参数部分写出数组的形式
//int my_strlen(char* str)//参数部分写成指针的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}


//递归求解

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


//递归的实现
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


//迭代的方式-非递归
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
//求第n个斐波那契数
//斐波那契额数列
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


