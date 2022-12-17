#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>


//int main()
//{
//    int w = 0;
//    int h = 0;
//    while (scanf("%d %d", &w, &h) != EOF)
//    {
//        float bmi = w * 1.0 / pow(h * 0.01, 2);
//        if (bmi < 18.5)
//            printf("Underweight\n");
//        else if (bmi >= 18.5 && bmi <= 23.9)
//            printf("Normal\n");
//        else if (bmi > 23.9 && bmi <= 27.9)
//            printf("Overweight\n");
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            float d = b * b - 4 * a * c;
//            if (d == 0)
//            {
//                if ((-b / 2.0 / a) == 0)
//                    printf("x1=x2=%.02f\n", 0.00);
//                else
//                    printf("x1=x2=%.02f\n", -b / 2.0 / a);
//            }
//            else if (d > 0)
//            {
//                printf("x1=%.02f;x2=%.02f\n", (-b - sqrt(d)) / 2.0 / a, (-b + sqrt(d)) / 2.0 / a);
//            }
//            else
//            {
//                printf("x1=%.02f-%.02fi;x2=%.02f+%.02fi\n",
//                    -b / 2.0 / a, sqrt(-d) / 2.0 / a, -b / 2.0 / a, sqrt(-d) / 2.0 / a);
//            }
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//            printf("%d\n", 31);
//        else if (b == 4 || b == 6 || b == 9 || b == 11)
//            printf("%d\n", 30);
//        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//        {
//            if (b == 2)
//                printf("%d\n", 29);
//        }
//        else
//        {
//            if (b == 2)
//                printf("%d\n", 28);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    double a, b;
//    char c;
//    while (scanf("%lf%c%lf", &a, &c, &b) != EOF)
//    {
//        if (c != '+' && c != '-' && c != '*' && c != '/')
//            printf("Invalid operation!\n");
//        else
//        {
//            if (c == '*')
//                printf("%.04lf*%.4lf=%.04lf\n", a, b, a * b);
//            else if (c == '-')
//                printf("%.04lf-%.04lf=%.04lf\n", a, b, a - b);
//            else if (c == '+')
//                printf("%.04lf+%.04lf=%.04lf\n", a, b, a + b);
//            else
//            {
//                if (b == 0)
//                    printf("Wrong!Division by zero!\n");
//                else
//                    printf("%.04lf/%.04lf=%.04lf\n", a, b, a * 1.0 / b);
//            }
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}