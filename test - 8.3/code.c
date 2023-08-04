//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<math.h>
//
//int game(int i)
//{
//	int a = i;
//	int c = 0;
//	int sum = 0;
//	while (i)//算几次方
//	{
//		i = i / 10;
//		c++;
//	}
//	i = a;
//	while (a)//算每位数的和加在一起
//	{
//		sum = sum + pow(a % 10, c);
//		a /= 10;
//	}
//	if (sum == i)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()//打印 0-100000的水花仙数
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		game(i);
//	}
//	return 0;
//}
////————————————————
////版权声明：本文为CSDN博主「dabai__a」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/dabai__a/article/details/132056053