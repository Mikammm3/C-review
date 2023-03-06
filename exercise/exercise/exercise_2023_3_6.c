#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//double a1, a2, b1, b2;
//
//void print(double x, double y, char ch)
//{
//    int flag = 0;
//    printf("(%.01lf", a1);
//    if (b1 >= 0)
//        printf("+");
//    printf("%.01lfi)", b1);
//    printf(" %c ", ch);
//    printf("(%.01lf", a2);
//    if (b2 >= 0)
//        printf("+");
//    printf("%.01lfi) = ", b2);
//    if (fabs(x) < 0.1 && fabs(y) < 0.1)
//        printf("0.0");
//    else
//    {
//        if (fabs(x) >= 0.1)
//        {
//            printf("%.01lf", x);
//            flag = 1;
//        }
//        if (fabs(y) >= 0.1)
//        {
//            if (y >= 0.1 && flag == 1)
//                printf("+");
//            printf("%.01lfi", y);
//        }
//    }
//    printf("\n");
//}
//
//
//int main()
//{
//    double x, y;
//    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
//    char arr[4] = { '+','-','*','/' };
//    for (int i = 0; i < 4; i++)
//    {
//        switch (arr[i])
//        {
//        case '+':
//            x = a1 + a2;
//            y = b1 + b2;
//            break;
//        case '-':
//            x = a1 - a2;
//            y = b1 - b2;
//            break;
//        case '*':
//            x = a1 * a2 - b1 * b2;
//            y = b1 * a2 + a1 * b2;
//            break;
//        case '/':
//            x = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2);
//            y = (b1 * a2 - a1 * b2) / (a2 * a2 + b2 * b2);
//            break;
//        }
//        print(x, y, arr[i]);
//    }
//    return 0;
//}