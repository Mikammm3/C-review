#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//void reverse(char* str)
//{
//    char tmp = *str;
//    int len = strlen(str);
//    *str = *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if (strlen(str + 1) >= 2)
//        reverse(str + 1);
//    *(str + len - 1) = tmp;
//}
//int main()
//{
//    char arr[32] = { 0 };
//    scanf("%s", arr);
//    reverse(arr);
//    printf("%s", arr);
//    return 0;
//}


//#include <stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    char str[10000] = { 0 };
//    gets(str);
//    int i = 0;
//    int len = strlen(str);
//    int tmp = len;
//    int j = 0;
//    for (i = len - 1; i >= 0; i--)
//    {
//        if (str[i] == ' ')
//        {
//            for (j = i + 1; j <= tmp - 1; j++)
//            {
//                printf("%c", str[j]);
//            }
//            printf(" ");
//            tmp = i;
//        }
//    }
//    for (j = 0; j <= tmp - 1; j++)
//    {
//        printf("%c", str[j]);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    char str[10000] = { 0 };
//    gets(str);
//    int i = 0;
//    int len = strlen(str);
//    int tmp = len;
//    for (i = len - 1; i >= 0; i--)
//    {
//        if (!isalpha(str[i]))
//        {
//            printf("%s ", &str[i + 1]);
//            str[i] = '\0';
//        }
//    }
//    printf("%s", &str[0]);
//    return 0;
//}