#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include<math.h>

//int main()
//{
//    double a, b, c;
//    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            double d = b * b - 4 * a * c;
//            if (d == 0)
//            {
//                if (((-b) / (2 * a)) == (-0.00))
//                {
//                    printf("x1=x2=0.00\n");
//                }
//                else
//                    printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//            }
//            else if (d > 0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n", ((-b) - sqrt(d)) / (2 * a),
//                    ((-b) + sqrt(d)) / (2 * a));
//            }
//            else
//            {
//                double real = (-b) / (2 * a);
//                double image = (sqrt(-d)) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, image, real, image);
//            }
//        }
//    }
//    return 0;
//}



#include <stdio.h>

//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (~scanf("%d%d", &y, &m))
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//                day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}



#include <stdio.h>

//int main()
//{
//    double n1 = 0.0;
//    double n2 = 0.0;
//    char op = 0;
//    scanf("%lf%c%lf", &n1, &op, &n2);
//    switch (op)
//    {
//    case'+':
//        printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//        break;
//    case'-':
//        printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//        break;
//    case'*':
//        printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//        break;
//    case'/':
//        if (n2 == 0.0)
//            printf("Wrong!Division by zero!\n");
//        else
//            printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//        break;
//    default:
//        printf("Invalid operation!\n");
//        break;
//    }
//    return 0;
//}


#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int h = a / 100;
//    int m = a % 100;
//    if (b >= 0)
//    {
//        m += b;
//        int tmp = m / 60;
//        h += tmp;
//        m %= 60;
//        if (m == 0)
//            printf("%d00\n", h);
//        else
//            printf("%d%d\n", h, m);
//    }
//    else
//    {
//        m = 60 * h + m + b;
//        h = m / 60;
//        m %= 60;
//        printf("%d%d", h, m);
//    }
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int n1 = a % 10;//¸ö
//    int n2 = (a / 10) % 10;//Ê®
//    int n3 = (a / 100) % 10;//°Ù
//    if (n1 == 0)
//    {
//        if (n2 == 0)
//            printf("%d\n", n3);
//        else
//            printf("%d%d\n", n2, n3);
//    }
//    else
//    {
//        printf("%d%d%d\n", n1, n2, n3);
//    }
//    return 0;
//}