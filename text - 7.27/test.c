#define _CRT_SECURE_NO_WARNINGS


//1.���泣��
//2.const���εĳ���
//3define ����ı�ʶ������
//4.ö�ٳ���

#include<stdio.h>

//int main()
//���泣��
//{
	//30��
	//'a' ��//�ַ�
 //   "abc"��//�ַ���
//const���εĳ���
// 	
 //const int a = 10;//��c�����У�const���ε�a�������Ǳ��������ǲ��ܱ��޸ģ��г��������ԡ�
	//a = 20;
	//printf("%d\n", a);//20
//	return 0;
//}

//define ����ı�ʶ����
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

//ö�ٳ���
//enum color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
////�Ա�
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE
//	SECRET
//};

//int main()
//{
//	//��ԭɫ
//	//Red Green Blue 
//	int num = 10;
//	enum color = RED;
//	return 0;
//}
//#include<string.h>
//int main()
//{
	//100 - int
	//char �ַ�����
	//char ch = 'a'
		//c��������û���ַ������� - û��
		//"abcde";
	//char arr1[] = "abcdef";
	//char arr2[] = { 'a','b','c', 'd', 'e','f','\0'};
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//int len = strlen("abcd"); //���ַ������ȵĺ����� string length  strenlenͷ�ļ� sting.h
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

//ת���ַ�
///?

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu -  ��ӡsizeof�ķ���ֵ

//int main()
//{
//	printf("%s\n", "��are you ok \? \?��");
//	return 0;
//}
//
//ע��
//1.ע�Ϳ�������˼��
//2.�Ը��ӵĴ�����н���
//3.д�������ע�ͼ��ܰ����Լ�Ҳ�ܰ�������

//int main()
//{
//	int intup = 0;
//	printf("�ϴ�ѧ֮��\n");
//    printf("Ҫ�ú�ѧϰ��?��1/0��");
//	scanf("%d\n", &intup);
//		if (intup == 1)
//		{
//			printf("��ú�offer\n");
//		}
//		else
//		{
//			printf("�ؼҿ��ع�\n");
//		}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//���������������ĺ�
//����
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
//	//����
//	scanf("%d %d",&n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	//��ӡ
//	printf("%d\n", sum);
//	return 0;
//}

//����
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
	//int b = 7 % 2;//ȡģ
	//printf("%d\n", b);
	//printf("%d\n", a);
	//return 0;
	//���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и�����������
	//float a = 7 / 2.0;
	//int b = 7 % 2;//ȡģ
	//ȡģ������������������ֻ��������
//	printf("%d\n", b);
//	printf("%.1f\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//	a = a + 3;//a = 23
//	a += 3;
//	a -= 2;//a=18
//	return 0;
//}


//c������
//0��ʾ��

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

//sizeof�ǲ��������ǵ�Ŀ��������

	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof(int));//4

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//���������������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - �����Ԫ�ظ���

	//int a = 10;
	//int b = a++;//����++����ʹ�ã���++��
	//int b = a; a = a + 1;
	//int b = a + 1; a = b
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int a = (int)3.14;
	//printf("%d\n", a);
	////3.14���渡������������Ĭ�����Ϊdouble���͡�
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


//&& �߼��� - ����
//|| �߼��� - ����
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


//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ��
//�ص㣺�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��

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
//	arr[n] = 20;//[]�����±����ò�������arr��3����[]�Ĳ�����
//	return 0;
//}


//�������ò�����
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//()���Ǻ������ò�������add��2��3����()�Ĳ�����
//	return 0;
//	}

