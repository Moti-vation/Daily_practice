#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//if�����ṹ
//if else ����ֻ�ܸ�һ����䣬������������ʹ��� {}
//int main()
//{
	//int age = 20;
	//if ((age) > 18)
	//	printf("����\n");
	// 
	// 
	//if (age < 18)
	//{
	//	printf("δ����\n");//���1
	//	printf("��������\n");
	//}
	//else
	//{
	//	printf("����\n");//���2
	//	printf("Ҫ�е���\n");
	//}

	//���֧
//	int age = 19;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("������\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 38)
//	{
//		printf("����\n");
//	}
//	else if (age >= 38 && age < 48)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 48 && age < 100)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//1.�����������������塢�淶��
//2.�ո񣬡����У�����
//int main()
//{
//	/*char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };
//	return 0;*/
//	int a = 0;
//	int b=0;
//}

//�ж���ż��
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num = num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//	return 0;
//}

//����1-100֮�������
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
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
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
//		printf("����һ\n");
//		break;
//	case 2 :
//		printf("���ڶ�\n");
//		break;
//	case 3 :
//		printf("������\n");
//		break;
//	case 4 :
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6 :
//		printf("������\n");
//		break;
//	case 7 :
//		printf("������\n");
//		break;
//	default:
//		printf("�������");
//			break;
//	}
//	return 0;
//}
//


//whileѭ���е�
// break�����õ���ֹѭ��
// continue��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ�ε�ѭ�����ж�
//��ӡ1-10
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

	//����
	//����������һ���ַ�
//	char password [20];
//	printf("����������:>>");
//	scanf("%s", &password);
//	//getchar(); //��ȡ\n
//	int ch = 0;
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	printf("���ٴ�ȷ������(Y/N)");
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