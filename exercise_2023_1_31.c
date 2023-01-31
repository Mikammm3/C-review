#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    long n, k;
//    while (~scanf("%ld%ld", &n, &k))
//    {
//        if (k == 0)
//        {
//            printf("%ld\n", n * n);
//            continue;
//        }
//        long count = 0;
//        for (int y = k + 1; y <= n; y++)
//        {
//            count += ((n / y) * (y - k) + ((n % y >= k) ? (n % y - k + 1) : 0));
//        }
//        printf("%ld\n", count);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    char str[1000] = { 0 };
//    int k = 0;
//    scanf("%s %d", str, &k);
//    str[k] = '\0';
//    printf("%s\n", str);
//    return 0;
//}