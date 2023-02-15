#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int flag = 0;
//    for (int i = 0; i < 100; i++)
//    {
//        if (arr[i] == 'A')
//            flag++;
//        if (arr[i] == 'B')
//            flag--;
//    }
//    if (flag > 0)
//        printf("A\n");
//    else if (flag < 0)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = a > b ? a : b;
//    max = max > c ? max : c;
//    printf("%d\n", max);
//    return 0;
//}


#include <stdio.h>
#include<string.h>

//int main()
//{
//    char arr[10] = "AaEeIiOoUu";
//    char ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (strchr(arr, ch))
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}


//int  Search_Bin(SSTable T, KeyType k)
//{
//    int left = 1;
//    int right = T.length;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (T.R[mid].key < k)
//            left = mid + 1;
//        if (T.R[mid].key > k)
//            right = mid - 1;
//        if (T.R[mid].key == k)
//            return mid;
//    }
//    return 0;
//}


//int main()
//{
//    int cm = 0;
//    scanf("%d", &cm);
//    int foot = cm / 100.0 / 0.3048;
//    int inch = (cm / 100.0 / 0.3048 - foot) * 12;
//    printf("%d %d", foot, inch);
//    return 0;
//}