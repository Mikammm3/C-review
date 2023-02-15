#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//    char c = '0';
//    while (scanf("%c", &c) != EOF)
//    {
//        if (c == '\n')
//            continue;
//        if (c == 65 || c == 97 || c == 69 || c == 101 || c == 73 || c == 79 || c == 85 || c == 105 || c == 111 || c == 117)
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}


//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        if (a == '\n')
//            continue;
//        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
//            printf("%c is an alphabet.\n", a);
//        else
//            printf("%c is not an alphabet.\n", a);
//    }
//    return 0;
//}


//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch == '\n')
//            continue;
//        if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", ch + 32);
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//    }
//    return 0;
//}



//int main()
//{
//    int t = 0;
//    int y = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}


//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//
//        if (((a + b) <= c) || ((a - b) >= c) || ((a + c) <= b) || ((a - c) >= b) || ((b + c) <= a) || ((b - c) >= a))
//            printf("Not a triangle!\n");
//        else
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//    }
//    return 0;
//}