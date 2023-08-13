#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//add(int x, int y)
//{
//	return x + y;
//}
//
//void swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//实参
//	scanf("%d%d", &a, &b);
//	//传值调用
//	int c = add(a, b);
//	printf("%d\n", c);
//	//传址调用
//	swap(&a, &b);
//	printf("交换后a = %d, b = %d\n", a ,b);
//	return 0;
//}


//打印100 - 200 之间的素数
//素数： 只能被1和他本身的数整除

#include<math.h>

//sqrt 是一个库函数
// 开平方的意思
//头文件marh.h
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int falg = 1;//falg是1表示是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				falg = 0;
//				break;
//			}
//		}
//		if (falg == 1)
//		{
//			ume++;
//			printf("%d ", i);
//		}
//	 
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}


//写一个函数判断是否为素数
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			ume++;
//		}
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}


//打印1000 - 2000年之间的闰年
//闰年判断的规则：
//1.能被4整除，并且不能被100整除
//2.能被400整除是闰年

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是润年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		    if (year % 400 == 0)
//		    {
//			   printf("%d ", year);
//		    }
//	}
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是润年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年

//是闰年返回1
//不是返回0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是润年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//写一个函数，实现一个整形有序的二分查找

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int k = 7;
//	int z = sizeof(arr) / sizeof(arr[0]);
//	int right = z - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("下标是%d", mid);
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (right < left)
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//找不到返回-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//
//布尔类型

#include<stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//
//}
//
//int main()
//{
//	int i = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			ume++;
//		}
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}



//写一个函数，每次调用这个函数，就将会是num的值加1

//void add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);//1
//	add(&num);
//	printf("%d\n", num);//2
//	add(&num);
//	printf("%d\n", num);//3
//	add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}


//链式访问

#include<string.h>

int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	//链式访问
	printf("%d\n", strlen("abcdef")); 
	return 0;
}

//main 函数有三个参数
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}

