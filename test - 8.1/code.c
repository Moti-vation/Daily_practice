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
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//���ξֲ�����
//void test()      //void  ����Ҫ�κη���
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

//����ȫ�ֱ���

//�����ⲿ����
//extern int vcc;
//int main()
//{
//	printf("%d\n", vcc);
//	return 0;
//}

//���κ���
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
//	registr int num = 3; //���飺3����ڼĴ�����
//	return 0;
//}


//define�����ʶ������

//#define �����
//�����в���
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
//	float C = 0;//�ܳ�
//	float S = 0;//���
//	float p = 0;//�ܳ��뾶
//	scanf("%d %d %d", &a, &b, &c);
//	C = a + b + c;
//	p = (a + b + c) / 2.0;
//	//���׹�ʽ
//	S = sqrt(p * (p - a)*(p - b)*(p - c));//sqrtƽ����
//	printf("circumference%.2f area%.2f, n", C, S);
//	return 0;
//}


//int main()
//{
//	float weight = 0;//����
//	float height = 0;//���
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

//�������룬�����дAת����Сдa��
//getchar() - ��ȡһ���ַ�������һ���ַ�
//putchar���� - ��ӡ/���һ���ַ�

//��������
//int main()
//{
	//char ch = 0;
	//EOF -- end of fille.//�ļ�������־ - ͨ�����ļ���ĩβ
	//while ((ch = getchar()) != EOF)
//	{
//		putchar(ch + 32);
//		printf("\n");
//		getchar();//��ȡ\n
//	}
//	return 0;
//}

//��������
// 
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	putchar(ch+32);//����ASCLL���
//	return 0;
//}




//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10.
//	//&a;//ȡ��ַ������
//	//printf("%p\n", a);
//	int* p = &a;//��ŵ�ַ��
//	//p����ָ�������
//	//*p;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
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
	//����ʲô���͵�ָ�룬�����ڴ���ָ�������
	// ָ�������������ŵ�ַ��
	// ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
	//
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}


//�ṹ��
//ѧ��
//struct stu
//{
//	//��Ա
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
//	//�ṹ��ָ����� ->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct stu s = { "Pierce Hua", 19, "male", "19509918630" };
//	//�ṹ����� . ��Ա����
//	//printf("%s\n %d\n %s\n %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}