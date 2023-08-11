#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1 ,2 , 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1; 
//	
//	while (left <= right)
//	{
		//int mid = (left + right) / 2;
	//	int mid = left + (right - left) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("滚犊子");
	//}
	//return 0;
//}
//
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = { "Welcome to bit !!!!" };
//	char arr2[] = { "###################" };
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr) / sizeof(arr[0]) - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(100);//休眠
//		//清空屏幕
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//模拟代码实现，模拟用户登录情景，并且只能登陆三次。（只允许输入三次密码，
//如果密码正确泽提示登陆完成，如果三次均输入三次，则退出程序。

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码abcdef
//	for(i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)//如果返回值是0则两个字符串相等
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入\n");
//		}
//     }
//	if (i == 3)
//	{
//		printf("输入错误过多，退出系统\n");
//	}
//	return 0;
//}


//电脑产生一个随机数（1 - 100）
//猜数字小游戏
//猜大了
//猜小了
//直到猜对了，结束

#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*******1.play*******\n");
//	printf("*******0.exit*******\n");
//	printf("********************\n");
//}
////rand范围  0-RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.生成随机数
//	int ret = rand() % 100 + 1;//生成随机数的函数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
////指针
////int* p = NULL	;//空指针(初始化)
////int a = 0;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 0:
//				printf("退出游戏\n");
//				break;
//		default:
//				printf("输入错误，请重新选择\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//
//

//void test()
//{
//	again:
//}
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//关机程序
//电脑运行起来，一分钟内关机
//如果输入我是猪就取消关机
#include<string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 30");
//again:
//	printf("请注意，你的电脑在30s内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = " hello bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


////函数的定义
//int get_max(int a, int b)
//{
//	return(a > b ? a : b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求最大值
//	//函数的调用
//	int z = get_max(a, b);
//	printf("%d\n", z);
//	return 0;
//}


//写一个函数可以交换两个整形变量的内容

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

void Swap(int* px, int* py)
{
	int z = *px;//z = a
	*px = *py;//a = b
	*py = z;//b = a
}

//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a = %d b = %d\n", a, b);
	//a和b叫参数
	//Swap(a, b);
	Swap(&a, &b);
	printf("交换后：a = %d b = %d\n", a, b);

	return 0;
}