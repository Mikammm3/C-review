#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>


//int main()
//{
//    char arr[1001] = { 0 };
//    scanf("%s", arr);
//    int len = strlen(arr);
//    int i = 0;
//    for (i = 0; i < len - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < len - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                char tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < len; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}s


//int pivotIndex(int* nums, int numsSize)
//{
//    int total = 0;
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        total += nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        if (2 * sum + nums[i] == total)
//        {
//            return i;
//        }
//        sum += nums[i];
//    }
//    return -1;
//}