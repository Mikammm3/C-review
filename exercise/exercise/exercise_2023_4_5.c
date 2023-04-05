#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = sqrt(n);
//    int start = 0;
//    int maxStart = 0;
//    int cnt = 0;
//    int tmp = 0;
//    int num = 0;
//    for (int i = 2; i <= k; i++)
//    {
//        num = n;
//        cnt = 0;
//        start = i;
//        for (int j = i; num % j == 0 && num != 0; j++)
//        {
//            num /= j;
//            cnt++;
//        }
//        if (cnt > tmp)
//        {
//            tmp = cnt;
//            maxStart = start;
//        }
//    }
//    if (tmp == 0)
//    {
//        printf("1\n%d", n);
//    }
//    else
//    {
//        printf("%d\n", tmp);
//        for (int i = maxStart; i < maxStart + tmp; i++)
//        {
//            if (i != maxStart)
//                printf("*");
//            printf("%d", i);
//        }
//    }
//    return 0;
//}