#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int s, j;
//    scanf("%d", &n);
//    int grade[40] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &grade[i]);
//    }
//    for (s = 0; s < n - 1; s++)
//    {
//        for (j = 0; j < n - 1 - s; j++)
//        {
//            if (grade[j] < grade[j + 1])
//            {
//                int tmp = grade[j];
//                grade[j] = grade[j + 1];
//                grade[j + 1] = tmp;
//            }
//        }
//    }
//    printf("%d %d %d %d %d\n", grade[0], grade[1], grade[2], grade[3], grade[4]);
//    return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[40] = "0";
//    scanf("%s", arr);
//    int count1 = 0;
//    int count2 = 0;
//    int sz = strlen(arr);
//    for (int i = 0; i < sz; i++)
//    {
//        if (arr[i] == 'A')
//            count1++;
//        if (arr[i] == 'B')
//            count2++;
//    }
//    if (count1 > count2)
//        printf("A\n");
//    else if (count1 < count2)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}

//int main()
//{
//    int a, b;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 90 && a <= 100)
//            printf("Perfect\n");
//    }
//    return 0;
//}


//int main()
//{
//    int a, b;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}


//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d\n", a);
//    return 0;
//}