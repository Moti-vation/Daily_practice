#define _CRT_SECURE_NO_WARNINGS
//c语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门打印数据的

//注释快捷键：ctrl+k+c   取消注释快捷键：ctrl+k+u
//vs2019环境如何运行代码：
//ctrl+f5
//fn+ctrl+f5
//
//std-标准
//i-input
//o-out[ut
//
#include <stdio.h>

//
// c语言规定
// main函数是程序入口
// main函数有且仅有一个
// 
//标准的主函数写法
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//古老的写法-不推荐
// void main
// {
// 
// }


//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}


//int main()
//{
//	int age = 20;
//	double price = 66.6；
//	return 0;
//}

//变量和常量的概念
//变量分为：
//局部变量 - {}内部定义的变量
//全局变量 - {}外部定义的变量

//int b = 20； //全局变量

//int main()
//{
	//short age = 20;//年龄
	//int high = 180；//身高
	//	float weight = 88.5;//体重
	//int a = 10；//局部变量
	//return 0;
//}


//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同情况下，局部优先
//
//	return 0;
//}

//不建议将全局变量和局部变量的名字写成一样的

//写一个代码计算两个整数的和
//scanf 是一个输入函数
//printf 是一个输出函数

//在源文件放上 #define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	//输入两个数值
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}


//变量的作用域
// 1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 2.全局变量
// 全局变量的作用域是整个工程

//变量的生命周期
//局部变量：进入作用域生命周期开始，出作用域生命周期结束
//全局变量：生命周期是整个程序的生命周期
//
//int main()
//{
//
//	return 0;
//}
//
////声明来自外部的符号 
//extern int a；
//
//
//int main()
//{
//
//	return 0;
//}