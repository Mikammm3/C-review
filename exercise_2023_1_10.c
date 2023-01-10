#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int T = 0;
//    scanf("%d", &T);
//    int g = 0;
//    int r = 0;
//    for (int i = 1; i <= T; i++)
//    {
//        g += 3;
//        r += 9;
//        if (i % 10 == 0 && r > g)
//        {
//            if (T - i >= 30)
//            {
//                g += 30 * 3;
//                i += 30;
//            }
//            else
//            {
//                g += (T - i) * 3;
//                break;
//            }
//        }
//    }
//    if (r > g)
//        printf("^_^ %d\n", r);
//    else if (r < g)
//        printf("@_@ %d\n", g);
//    else
//        printf("-_- %d\n", r);
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d/%d", &a, &b);
//    int i = 0;
//    for (i = a; i >= 2; i--)
//    {
//        if (a % i == 0 && b % i == 0)
//        {
//            a /= i;
//            b /= i;
//        }
//    }
//    printf("%d/%d\n", a, b);
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n < 0)
//    {
//        printf("fu ");
//        n *= -1;
//    }
//    if (n == 0)
//        printf("ling");
//    int cnt = 0;
//    int tmp = n;
//    int i = 0;
//    while (tmp)
//    {
//        if (tmp % 10 != 0)
//        {
//            cnt++;
//            tmp /= 10;
//        }
//        else if (tmp % 10 == 0)
//        {
//            if (tmp / 10 != 0)
//                cnt++;
//            tmp /= 10;
//        }
//    }
//    int j = cnt;
//    for (i = 0; i < j; i++)
//    {
//        tmp = n / (int)pow(10, cnt - 1) % 10;
//        switch (tmp)
//        {
//        case 0:
//            if (i == j - 1)
//            {
//                printf("ling");
//                break;
//            }
//            printf("ling ");
//            break;
//        case 1:
//            if (i == j - 1)
//            {
//                printf("yi");
//                break;
//            }
//            printf("yi ");
//            break;
//        case 2:
//            if (i == j - 1)
//            {
//                printf("er");
//                break;
//            }
//            printf("er ");
//            break;
//        case 3:
//            if (i == j - 1)
//            {
//                printf("san");
//                break;
//            }
//            printf("san ");
//            break;
//        case 4:
//            if (i == cnt - 1)
//            {
//                printf("si");
//                break;
//            }
//            printf("si ");
//            break;
//        case 5:
//            if (i == j - 1)
//            {
//                printf("wu");
//                break;
//            }
//            printf("wu ");
//            break;
//        case 6:
//            if (i == j - 1)
//            {
//                printf("liu");
//                break;
//            }
//            printf("liu ");
//            break;
//        case 7:
//            if (i == j - 1)
//            {
//                printf("qi");
//                break;
//            }
//            printf("qi ");
//            break;
//        case 8:
//            if (i == j - 1)
//            {
//                printf("ba");
//                break;
//            }
//            printf("ba ");
//            break;
//        case 9:
//            if (i == j - 1)
//            {
//                printf("jiu");
//                break;
//            }
//            printf("jiu ");
//            break;
//        }
//        cnt--;
//    }
//    return 0;
//}