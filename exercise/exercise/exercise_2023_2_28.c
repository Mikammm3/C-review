#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[81] = { 0 };
//    char arr2[81] = { 0 };
//    gets(arr1);
//    gets(arr2);
//    char* p = NULL;
//    //strcpy×Ö·û´®¿½±´
//    //strcat×·¼Ó×Ö·û´®
//    //strstrÕÒ×Ó´®
//    char tmp[81] = { 0 };
//    while ((p = strstr(arr1, arr2)) != NULL)
//    {
//        strcpy(tmp, p + strlen(arr2));//°ÑÊ£ÏÂµÄ×Ö·û´®¿½±´µ½tmpÀï
//        *p = '\0';
//        strcat(arr1, tmp);
//    }
//    puts(arr1);
//    return 0;
//}