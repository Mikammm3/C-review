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
//    //strcpy�ַ�������
//    //strcat׷���ַ���
//    //strstr���Ӵ�
//    char tmp[81] = { 0 };
//    while ((p = strstr(arr1, arr2)) != NULL)
//    {
//        strcpy(tmp, p + strlen(arr2));//��ʣ�µ��ַ���������tmp��
//        *p = '\0';
//        strcat(arr1, tmp);
//    }
//    puts(arr1);
//    return 0;
//}