#define _CRT_SECURE_NO_WARNINGS 1



//
//HJ 108����С������
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int m = a > b ? a : b;
//    while (m % a != 0 || m % b != 0)
//    {
//        m++;
//    }
//    printf("%d\n", m);
//    return 0;
//}


//HJ 108����С������

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int tmp = 0;
//    int m = a * b;
//    while (tmp = a % b)
//    {
//        a = b;
//        b = tmp;
//    }
//    //��С������=����֮��/���Լ��
//    printf("%d\n", m / b);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    //����3
//    int i = 1;
//    //���m��a��b����С������
//    //��ôm/a=i,m/b=j
//    //��a*i�͵���m��a*i%b��Ȼ����0
//    while (a * i % b != 0)
//    {
//        i++;
//    }
//    printf("%d\n", a * i);
//    return 0;
//}


////�����ַ���
//#include <stdio.h>
//#include<string.h>
//
//
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    char* cur = &arr[len - 1];
//    while (1)
//    {
//        //�ҵ��ո�
//        while (*cur != ' ' && cur > arr)
//        {
//            cur--;
//        }
//        //��ֹcur����--��������Խ��
//        if (cur == arr)
//        {
//            printf("%s", cur);
//            break;
//        }
//        else
//        {
//            *cur = '\0';
//            printf("%s ", cur + 1);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    //����2����������
//    //�����������ַ�����������ÿ������
//    reverse(arr, arr + len - 1);
//    char* start = arr;
//    char* end = arr;
//    while (1)
//    {
//        while (*end != ' ' && end < arr + len - 1)
//        {
//            end++;
//        }
//        if (end == arr + len - 1)
//        {
//            reverse(start, end);
//            break;
//        }
//        else
//        {
//            reverse(start, end - 1);
//            start = end + 1;
//            end += 1;
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}



//#include <stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    //����2����������
//    //�����������ַ�����������ÿ������
//    reverse(arr, arr + len - 1);
//    //char* start = arr;
//    //char* end = arr;
//    // while (1)
//    // {
//    //     while (*end != ' ' && end < arr + len - 1)
//    //     {
//    //         end++;
//    //     }
//    //     if (end == arr + len - 1)
//    //     {
//    //         reverse(start, end);
//    //         break;
//    //     }
//    //     else
//    //     {
//    //         reverse(start, end - 1);
//    //         start = end + 1;
//    //         end += 1;
//    //     }
//    // }
//
//    //�򻯰�
//    char* cur = arr;
//    char* start = arr;
//    while (*cur)
//    {
//        char* start = cur;
//        while (*cur != ' ' && *cur != '\0')
//        {
//            cur++;
//        }
//        reverse(start, cur - 1);
//        if (*cur == ' ')
//            cur++;
//    }
//    printf("%s", arr);
//    return 0;
//}


