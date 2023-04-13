#define _CRT_SECURE_NO_WARNINGS 1

//L1-028 判断素数
//#include <stdio.h>
//#include <math.h>
//int is_prime_num(int n)
//{
//    if (n == 1)
//        return 0;
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//    while (n)
//    {
//        scanf("%d", &tmp);
//        int ret = is_prime_num(tmp);
//        if (ret == 1)
//            printf("Yes\n");
//        else
//            printf("No\n");
//        n--;
//    }
//    return 0;
//}



//L1-029 是不是太胖了
//#include <stdio.h>
//
//int main()
//{
//    int H = 0;
//    scanf("%d", &H);
//    double weight = (H - 100) * 0.9 * 2;
//    printf("%.01lf\n", weight);
//    return 0;
//}