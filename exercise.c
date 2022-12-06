#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int cmp(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = cmp(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}

//int main()
//{
//    int grade = 0;
//    while (scanf("%d", &grade) != EOF)
//    {
//        printf("%d ", grade);
//    }
//    return 0;
//}

//int main()
//{
//    int a, b;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int i = a;
//        while (i)
//        {
//            printf("*");
//            i--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

int main()
{
    float f = 0.0;
    int i = 0;
    float sum = 0.0;
    while (i < 5)
    {
        scanf("%f", &f);
        sum += f;
        i++;
    }
    printf("%.1f", sum / 5);
    return 0;
}