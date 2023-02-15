#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    double d1 = 0.0;
//    double d2 = 0.0;
//    int n = 0;
//    char c = 0;
//    scanf("%lf %d %c %lf", &d1, &n, &c, &d2);
//    printf("%c %d %.2lf %.2lf\n", c, n, d1, d2);
//    return 0;
//}


#include<stdio.h>

//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    scanf("%d:%d", &n1, &n2);
//    if (n1 > 12)
//    {
//        printf("%d:%d PM\n", n1 - 12, n2);
//    }
//    else if (n1 < 12)
//    {
//        printf("%d:%d AM\n", n1, n2);
//    }
//    else
//    {
//        printf("%d:%d PM", n1, n2);
//    }
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    if (i > 60)
//        printf("Speed: %d - Speeding\n", i);
//    else
//        printf("Speed: %d - OK\n", i);
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int arr[3] = { 0 };
//    int flag = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    if (arr[0] == arr[1])
//        printf("C\n");
//    else if (arr[0] == arr[2])
//        printf("B\n");
//    else if (arr[1] == arr[2])
//        printf("A\n");
//    return 0;
//}



#include<stdio.h>

//int main()
//{
//    int y = 0;
//    int t = 0;
//    double s = 0;
//    scanf("%d %d", &y, &t);
//    if (y < 5)
//    {
//        if (t <= 40)
//        {
//            s = 30.0 * t;
//            printf("%.2lf\n", s);
//        }
//        else
//        {
//            s = 30 * 1.5 * (t - 40) + 30 * 40;
//            printf("%.2lf\n", s);
//        }
//    }
//    else
//    {
//        if (t <= 40)
//        {
//            s = 50.0 * t;
//            printf("%.2lf\n", s);
//        }
//        else
//        {
//            s = 50.0 * 40 + 50 * 1.5 * (t - 40);
//            printf("%.2lf\n", s);
//        }
//    }
//    return 0;
//}