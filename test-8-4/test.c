#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 32, 105, 116, 33 };
//	int i = 0;
//	//sizeof(arr)计算数组的总大小--单位是字节
//	//sizeof（arr[0]）计算的是数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, & month, & date);
//	//输出
//	printf("year = %d", year);
//	printf("month = %0d", month);
//	printf("date = %0d", date);
//	return 0;
//}


//int main()
//{
//	int NO = 0;
//	float C = 0.0f;
//	float ms = 0.0f;
//	float es = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &NO, &C, &ms, &es);
//	//输出
//	printf("The each subject score of NO. %d is %.2f, %.2f, %.2f.", NO, C, ms, es);
//	return 0;
//}

//
//int main()
//{
//	int n = printf("Hello World!");
//	printf("\n%d\n", n);
//	return 0;
//}


//int sum(int(a))
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout\<<\"Hello World!\"\<<endl;");
//	return 0;
//}

//方法一
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	//找最大值
//	//假设第一个就是最大值
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//方法2
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	//假设第一个元素取最大值
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (max < n)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	//初始化，养成良好的编程习惯
//	int a = 0;
//	//0.0默认是double类型
//	float a = 0.0f;
//	return 0;
//}


//测量球的体积
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", v);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//初始化
//	while (i < 10)//判断
//	{
//		if (i == 5)
//		{
//			continue;        //break;
//		}
//		printf("%d", i);
//
//		i++;//调整
//	}
//	return 0;
//}

//for 循环
//1--10

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;            //break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//for循环判断部分省略意味着判断条件恒成立
//int main()
//{
////	for (;;)
////	{
////		printf("hehe\n");
////	}
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 0; a < 3; a++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//循环多少次
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 0, i = 0; i = 0; a++, i++)//i为零为假
//	{
//		i++;
//	}
//	return 0;
//}


//do  while()语句
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;	        //break;
//		}
//		printf("%d ", i);
//		i++;
//
//	}
//	while (i <= 10);
//	return 0;
//}


//计算n的阶乘
//1*2*3*4*5*6...*n


//int main()
//{
//	int n = 0;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//计算1！+2！+3！+4！+....10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
	//for (n = 1; n <= 10; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= 10; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
//	for (n = 1; n <= 10; n++)
//	{
//		
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//1!+2！+3！= 9
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int k = 14;
//	//在一个有序数组中查找具体某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof (arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标为：%d\n", i);
//			break;
//		}
//	}
//	if (arr[i] == sz)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//二分查找/折半查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	//int mid = (right + left) / 2;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
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
//			printf("找到了下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}