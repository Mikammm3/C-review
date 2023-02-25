#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//    int a1, b1, a2, b2;
//    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
//    int max = b1 > b2 ? b1 : b2;
//    while (max % b1 != 0 || max % b2 != 0)
//    {
//        max++;
//    }
//    a1 = max / b1 * a1;
//    a2 = max / b2 * a2;
//    int tmp = (a1 + a2);
//    if (tmp % max == 0)
//        printf("%d\n", tmp / max);
//    else
//    {
//        for (int i = tmp; i > 1; i--)
//        {
//            if (tmp % i == 0 && max % i == 0)
//            {
//                tmp /= i;
//                max /= i;
//            }
//        }
//        printf("%d/%d\n", tmp, max);
//    }
//    return 0;
//}