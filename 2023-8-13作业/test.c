#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 140)
//    {
//        printf("Genius");
//    }
//    return 0;
//}


//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score <= 100 && score >= 90)
//    {
//        printf("Perfect");
//    }
//    return 0;
//}


//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//        {
//            printf("Pass\n");
//        }
//        else {
//            printf("Fail\n");
//        }
//
//    }
//    return 0;
//}

//
//int main()
//{
//    int m = 0;
//    while (scanf("%d", &m) != EOF)
//    {
//        if (m % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int a, b, c, max;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        max = a;
//        if (b > a)
//        {
//            max = b;
//        }
//        if (c > b)
//        {
//            max = c;
//        }
//    }
//    printf("%d \n", max);
//    return 0;
//}



//int main()
//{
//    int temp = 0;
//    char arr;
//    char Vowel[10] = { 'a','e','i','o','u','A','E','I','O','U' };
//
//    while (scanf("%c", &arr) != EOF)
//    {
//        if (arr != '\n')
//        {
//            for (temp = 0; temp < 10; temp++)
//            {
//                if (arr == Vowel[temp])
//                {
//                    printf("Vowel\n");
//                    temp = 20;
//                }
//            }
//            if (temp == 10)
//            {
//                printf("Consonant\n");
//            }
//
//        }
//    }
//        return 0;
    //}




//int main()
//{
//    char arr;
//    while ((arr = getchar()) != EOF)
//    {
//        if (('a' <= arr) && (arr <= 'z') || (arr >= 'A') && (arr <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", arr);
//        }
//        else {
//            printf("%c is not an alphabet.\n", arr);
//        }
//        getchar();
//    }
//    return 0;
//}

//
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num > 0)
//        {
//            printf("1\n");
//        }
//        else if (num == 0) {
//            printf("0.5\n");
//        }
//        else {
//            printf("0\n");
//        }
//
//    }
//    return 0;
//}



//int main()
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && b + c > a && a + c > b)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//
//}




//#include<math.h>
//int main()
//{
//    int weight = 0;
//    int height = 0;
//    float BMI = 0.0f;
//    while (scanf("%d %d", &weight, &height) != EOF)
//    {
//        BMI = weight / pow(height / 100.0, 2);
//        if (BMI < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (BMI >= 18.5 && BMI <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (BMI > 23.9 && BMI <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
//}