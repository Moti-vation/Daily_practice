#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//typedef unsigned int  uint;
//typedef struct node
//{
//	int date;
//	struct node* next;
//}node;
//int main()
//{
//	struct node n;
//	node n2;
//
//	unsigned int num = 0;
//	uint num2 = 1;
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//修饰局部变量
//void test()      //void  不需要任何返回
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//修饰全局变量

//声明外部符号
//extern int vcc;
//int main()
//{
//	printf("%d\n", vcc);
//	return 0;
//}

//修饰函数
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//
//int main()
//{
//	registr int num = 3; //建议：3存放在寄存器中
//	return 0;
//}


//define定义标识符常量

//#define 定义宏
//宏是有参数
//#define nu 100
//
//#define add(x,y) ((x)+(y))
//int add(x, y)
//{
//	return x + y;
//}
//int main()
//{
	//printf("%d\n", nu);
	//int a = nu;
	//printf("%d\n", a);
	//int arr[nu] = { 0 };
    
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	float C = 0;//周长
//	float S = 0;//面积
//	float p = 0;//周长半径
//	scanf("%d %d %d", &a, &b, &c);
//	C = a + b + c;
//	p = (a + b + c) / 2.0;
//	//海伦公式
//	S = sqrt(p * (p - a)*(p - b)*(p - c));//sqrt平方根
//	printf("circumference%.2f area%.2f, n", C, S);
//	return 0;
//}


//int main()
//{
//	float weight = 0;//体重
//	float height = 0;//身高
//	float BMI = 0;
//	scanf("%f %f", &weight, &height);
//	BMI = (weight / ((double)height * height / 10000));
//	printf("%.2f\n", BMI);
//	return 0;
//}


//int main()
//{
//	char a = 0;
//	scanf("%c" , &a);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int lk = 0;
//	scanf("a=%d, b=%d", &a, &b);
//	lk = a;
//	a = b;
//	b = lk;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    int c = a;
//    a = b;
//    b = c;
//    printf("a=%d,b=%d\n", a, b);
//}

//多组输入，输入大写A转换成小写a。
//getchar() - 获取一个字符，输入一个字符
//putchar（） - 打印/输出一个字符

//多组输入
//int main()
//{
	//char ch = 0;
	//EOF -- end of fille.//文件结束标志 - 通常是文件的末尾
	//while ((ch = getchar()) != EOF)
//	{
//		putchar(ch + 32);
//		printf("\n");
//		getchar();//获取\n
//	}
//	return 0;
//}

//单组输入
// 
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	putchar(ch+32);//利用ASCLL码表
//	return 0;
//}




//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10.
//	//&a;//取地址操作符
//	//printf("%p\n", a);
//	int* p = &a;//存放地址。
//	//p就是指针变量。
//	//*p;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象。*p就是p指向的对象。
//	*p = 20;
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0;
//}



//int main()
//{
//	int * p;
//	char* p2;
	//不管什么类型的指针，都是在创建指针变量。
	// 指针变量是用来存放地址的
	// 指针变量的大小取决于一个地址存放的时候需要多大的空间
	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
	//
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}


//结构体
//学生
//struct stu
//{
//	//成员
//	char name [20];
//	int age ;
//	char sex [10];
//	char tele[20];
//};
//
//void print(struct stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//  ->
//	//结构体指针变量 ->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct stu s = { "Pierce Hua", 19, "male", "19509918630" };
//	//结构体对象 . 成员名称
//	//printf("%s\n %d\n %s\n %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}