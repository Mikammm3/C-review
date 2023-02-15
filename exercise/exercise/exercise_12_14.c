#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int a = -4;
//    //int b = 00;
//    ////%x打印16进制，%o打印8进制
//    //scanf("%x%o", &a, &b);
//    printf("%d %o %x\n", a,a,a);
//    return 0;
//}

//int main()
//{
//    char a = '0';
//    scanf("%c", &a);
//    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}

#include<math.h>
//int main()
//{
//    float w = 0;
//    float h = 0.0f;
//    scanf("%f %f", &w, &h);
//    float bmi = w / h / h;
//    if (bmi >= 18.5 && bmi <= 23.9)
//        printf("Normal\n");
//    else
//        printf("Abnormal\n");
//    return 0;
//}


//int main()
//{
//    float price = 0;
//    int month = 0;
//    int day = 0;
//    int q = 0;
//    scanf("%f%d%d%d", &price, &month, &day, &q);
//    if (month == 11 && day == 11)
//        price = price * 0.7 - q * 50;
//    if (month == 12 && day == 12)
//        price = price * 0.8 - q * 50;
//    if (price <= 0)
//        printf("0.00\n");
//    else
//        printf("%.02f\n", price);
//    return 0;
//}


//int is_Lily_Numbe(int x)
//{
//    int n1 = x / 10000;
//    int n2 = x % 10000;
//    int n3 = x / 1000;
//    int n4 = x % 1000;
//    int n5 = x / 100;
//    int n6 = x % 100;
//    int n7 = x / 10;
//    int n8 = x % 10;
//    if (x == (n1 * n2) + (n3 * n4) + (n5 * n6) + (n7 * n8))
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        //判断是否为lily
//        int ret = is_Lily_Numbe(i);
//        if (ret == 1)
//            printf("%d ", i);
//    }
//    return 0;
//}
//}