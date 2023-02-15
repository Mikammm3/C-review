#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//    int x = 0;
//    double y = 0.0;
//    scanf("%d", &x);
//    if (x <= 15)
//        y = x * 4.0 / 3;
//    else
//        y = 2.5 * x - 17.5;
//    printf("%.2lf\n", y);
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    char op = 0;
//    scanf("%d %c %d", &a, &op, &b);
//    switch (op)
//    {
//    case'+':
//        printf("%d\n", a + b);
//        break;
//    case'-':
//        printf("%d\n", a - b);
//        break;
//    case'*':
//        printf("%d\n", a * b);
//        break;
//    case'/':
//        if (b != 0)
//            printf("%d\n", a / b);
//        break;
//    case'%':
//        if (b != 0)
//            printf("%d\n", a % b);
//        break;
//    default:
//        printf("ERROR\n");
//        break;
//    }
//    return 0;
//}




#include<stdio.h>

//int main()
//{
//    double o = 0.0;
//    double h = 0.0;
//    double l = 0.0;
//    double c = 0.0;
//    scanf("%lf %lf %lf %lf", &o, &h, &l, &c);
//    if (c < o)
//        printf("BW-Solid");
//    else if (c > o)
//        printf("R-Hollow");
//    else
//        printf("R-Cross");
//    if ((l < o && l < c) && (h > o && h > c))
//        printf(" with Lower Shadow and Upper Shadow\n");
//    else if (l < o && l < c)
//        printf(" with Lower Shadow\n");
//    else if (h > o && h > c)
//        printf(" with Upper Shadow\n");
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int cnt = 0;
//    int sum = 0;
//    for (int i = a; i <= b; i++)
//    {
//        sum += i;
//        printf("%5d", i);
//        cnt++;
//        if (cnt % 5 == 0 && i != b)
//            printf("\n");
//    }
//    printf("\nSum = %d", sum);
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-4d", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}