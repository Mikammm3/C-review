#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int total_rabbit(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n >= 3)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = total_rabbit(n);
//    printf("%d\n", sum);
//    return 0;
//}


//#include <stdio.h>
//
//int total_rabbit(int n)
//{
//    if (n > 2)
//    {
//        return total_rabbit(n - 1) + total_rabbit(n - 2);
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = total_rabbit(n);
//    printf("%d\n", sum);
//    return 0;
//}



//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    double n = 0.0;
//    int m = 0;
//    while (~scanf("%lf %d", &n, &m))
//    {
//        double sum = 0.0;
//        while (m)
//        {
//            sum += n;
//            n = sqrt(n);
//            m--;
//        }
//        printf("%.02lf\n", sum);
//    }
//    return 0;
//}