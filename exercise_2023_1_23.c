#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include<string.h>
 

//int main()
//{
//    char arr[501] = { 0 };
//    int tmp[128] = { 0 };
//    int asc = 0;
//    scanf("%s", arr);
//    int i = 0;
//    int count = 0;
//    int len = strlen(arr);
//    for (i = 0; i < len; i++)
//    {
//        asc = (int)arr[i];
//        if (tmp[asc] == 0)
//        {
//            count++;
//            tmp[asc] = 1;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}



//int majorityElement(int* nums, int numsSize)
//{
//    int key = nums[0];
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == key)
//            count++;
//        if (nums[i] != key)
//            count--;
//        if (count <= 0)
//            key = nums[i + 1];
//    }
//    return key;
//}