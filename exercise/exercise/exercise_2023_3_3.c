#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int n = 0;
//    char arr[101] = { 0 };
//    gets(arr);
//    scanf("%d", &n);
//    int count = 0;
//    int left = 0;
//    int len = strlen(arr);
//    int right = len - 1;
//    n %= len;
//    for (int i = n; i < len; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int n = 0;
//    char arr[101] = { 0 };
//    gets(arr);
//    scanf("%d", &n);
//    int count = 0;
//    int i = 0;
//    while (count < n)
//    {
//        char tmp = arr[0];
//        for (i = 0; i < strlen(arr) - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        arr[i] = tmp;
//        count++;
//    }
//    printf("%s", arr);
//    return 0;
//}