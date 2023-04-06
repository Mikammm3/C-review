#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//
//int max(int x, int y)
//{
//    int c = 0;
//    while (c = x % y)
//    {
//        x = y;
//        y = c;
//    }
//    return y;
//}
//
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int sumA = 0;
//    int sumB = 1;
//    for (int i = 0; i < N; i++)
//    {
//        int a, b;
//        scanf("%d/%d", &a, &b);
//        sumA = sumA * b + a * sumB;
//        sumB = b * sumB;
//        int ret = max(sumA, sumB);//求最大公因数
//        sumA /= ret;
//        sumB /= ret;
//    }
//    if (sumA == 0)
//        printf("0");
//    else if (sumA % sumB == 0)
//        printf("%d", sumA / sumB);
//    else if ((sumA / sumB) > 1)//10/3
//        printf("%d %d/%d", sumA / sumB, sumA % sumB, sumB);
//    else
//        printf("%d/%d", sumA, sumB);
//    return 0;
//}