#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//if基本结构
//if else 后面只能跟一条语句，如果跟多条语句就带上 {}
//int main()
//{
	//int age = 20;
	//if ((age) > 18)
	//	printf("成年\n");
	// 
	// 
	//if (age < 18)
	//{
	//	printf("未成年\n");//语句1
	//	printf("不能饮酒\n");
	//}
	//else
	//{
	//	printf("成年\n");//语句2
	//	printf("要有担当\n");
	//}

	//多分支
//	int age = 19;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 38)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 38 && age < 48)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 48 && age < 100)
//	{
//		printf("老年");
//	}
//	else
//	{
//		printf("神仙\n");
//	}
//	return 0;
//}

//1.变量的命名（有意义、规范）
//2.空格，、空行，换行
//int main()
//{
//	/*char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };
//	return 0;*/
//	int a = 0;
//	int b=0;
//}

//判断奇偶数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num = num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}

//输入1-100之间的奇数
//int main()
//{
//	int num = 1;
//	while (num < 100)
//	{
//		printf("%d\n", num);
//		num+=2;
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期四\n");
//	else .......
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//		printf("星期一\n");
//		break;
//	case 2 :
//		printf("星期二\n");
//		break;
//	case 3 :
//		printf("星期三\n");
//		break;
//	case 4 :
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6 :
//		printf("星期六\n");
//		break;
//	case 7 :
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误");
//			break;
//	}
//	return 0;
//}
//


//while循环中的
// break是永久的终止循环
// continue跳过本次循环后面的代码，直接去判断部分，进行下一次的循环的判断
//打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		continue;              //break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
	//int ch = 0;
	//while(getchar())
	//EOF - end of file
	//int ch = getchar( );
	//printf("%c\n", ch);//1
	//putchar(ch);  // 2
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	//举例
	//假设密码是一串字符
//	char password [20];
//	printf("请输入密码:>>");
//	scanf("%s", &password);
//	//getchar(); //读取\n
//	int ch = 0;
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	printf("请再次确认密码(Y/N)");
//	int ret = getchar() ;
//	if ('Y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//int main()
//{
//	char ch  = '\n';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}