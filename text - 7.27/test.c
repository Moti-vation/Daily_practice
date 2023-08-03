#define _CRT_SECURE_NO_WARNINGS


//1.字面常量
//2.const修饰的常量
//3define 定义的标识符常量
//4.枚举常量

#include<stdio.h>

//int main()
//字面常量
//{
	//30；
	//'a' ；//字符
 //   "abc"；//字符串
//const修饰的常量
// 	
 //const int a = 10;//在c语言中，const修饰的a，本质是变量，但是不能被修改，有常量的属性。
	//a = 20;
	//printf("%d\n", a);//20
//	return 0;
//}

//define 定义的标识常量
//
//#define Max 500
//#define SR "abcder"
//int main()
//{
//	printf("%d\n", Max);
//	int a = Max;
//	printf("%d\n", a);
//	printf("%s\n", SR);
//	return 0;
//}

//枚举常量
//enum color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
////性别
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE
//	SECRET
//};

//int main()
//{
//	//三原色
//	//Red Green Blue 
//	int num = 10;
//	enum color = RED;
//	return 0;
//}
//#include<string.h>
//int main()
//{
	//100 - int
	//char 字符类型
	//char ch = 'a'
		//c语言中有没有字符串类型 - 没有
		//"abcde";
	//char arr1[] = "abcdef";
	//char arr2[] = { 'a','b','c', 'd', 'e','f','\0'};
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//int len = strlen("abcd"); //求字符串长度的函数， string length  strenlen头文件 sting.h
	//printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
// 	return 0;
//}


//int main()
//{
//	printf("abc\n");
//		return 0;
//}

//转义字符
///?

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu -  打印sizeof的返回值

//int main()
//{
//	printf("%s\n", "（are you ok \? \?）");
//	return 0;
//}
//
//注释
//1.注释可以梳理思绪
//2.对复杂的代码进行解释
//3.写代码进行注释既能帮助自己也能帮助别人

//int main()
//{
//	int intup = 0;
//	printf("上大学之后\n");
//    printf("要好好学习吗?（1/0）");
//	scanf("%d\n", &intup);
//		if (intup == 1)
//		{
//			printf("获得好offer\n");
//		}
//		else
//		{
//			printf("回家烤地瓜\n");
//		}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}

//求两个任意整数的和
//函数
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d",&n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	//打印
//	printf("%d\n", sum);
//	return 0;
//}

//数组
//int main()
//{
	//int a = 10;
	//int b = 9;
	//int c = 8;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr[8]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
//	}
//		return 0;
//}


//int main()
//{
	//int a = 7 / 2;
	//int b = 7 % 2;//取模
	//printf("%d\n", b);
	//printf("%d\n", a);
	//return 0;
	//除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数除法。
	//float a = 7 / 2.0;
	//int b = 7 % 2;//取模
	//取模操作符的两个操作符只能是整数
//	printf("%d\n", b);
//	printf("%.1f\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a = a + 3;//a = 23
//	a += 3;
//	a -= 2;//a=18
//	return 0;
//}


//c语言中
//0表示假

//int main()
//{
	//int abc = 2;
	//	if (!abc)
	//{
	//		printf("hehe\n");
	//}
	//int a = -10;
	//int b = -a;
	//printf("%d\n", b);

//sizeof是操作符，是单目操作符。

	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof(int));//4

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//计算的是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数

	//int a = 10;
	//int b = a++;//后置++，先使用，在++。
	//int b = a; a = a + 1;
	//int b = a + 1; a = b
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int a = (int)3.14;
	//printf("%d\n", a);
	////3.14字面浮点数，编译器默认理解为double类型。
	//return 0;
//}


//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//&& 逻辑与 - 并且
//|| 逻辑或 - 或者
//int main()
//{
	//int a = 20;
	//int b = 10;
	//if (a && b)
	//{
	//	printf("hehe\n");
	//}
	//if (a || b)
	//{
	//	printf("hehe\n");
	//}
//
//	int a = 10;
//	int b = 20;
//
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//	return 0;
//}


//逗号表达式就是逗号隔开的一串表达式。
//特点：从左往右依次计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 5;
//	int d = (c = a + 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符，arr和3就是[]的操作数
//	return 0;
//}


//函数调用操作符
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//()就是函数调用操作符，add，2，3都是()的操作数
//	return 0;
//	}

