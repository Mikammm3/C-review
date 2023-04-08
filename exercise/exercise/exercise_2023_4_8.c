#define _CRT_SECURE_NO_WARNINGS 1


//L1-012 计算指数
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805128870084608
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = pow(2, n);
//    printf("2^%d = %d\n", n, ret);
//    return 0;
//}



//L1-015 跟奥巴马一起画方块
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805124398956544
//#include <stdio.h>
//
//int main()
//{
//    int N = 0;
//    char c = 0;
//    scanf("%d %c", &N, &c);
//    int tmp = N;
//    if (N % 2 == 0)
//    {
//        tmp /= 2;
//    }
//    else
//        tmp = tmp / 2 + 1;
//    for (int i = 0; i < tmp; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            printf("%c", c);
//        }
//        printf("\n");
//    }
//    return 0;
//}