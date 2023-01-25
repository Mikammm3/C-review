#define _CRT_SECURE_NO_WARNINGS 1


//感觉是对的，但是超时了
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int* arr1 = (int*)malloc(sizeof(int) * numsSize);
//    int* arr2 = (int*)malloc(sizeof(int) * numsSize);
//    for (int i = 0; i < numsSize; i++)
//    {
//        arr2[i] = i + 1;
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (nums[i] == arr2[j])
//            {
//                arr2[j] = -1;
//                break;
//            }
//        }
//    }
//    int j = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (arr2[i] != -1)
//        {
//            arr1[j++] = arr2[i];
//        }
//    }
//    *returnSize = j;
//    return arr1;
//}


//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int* ans = (int*)malloc(sizeof(int) * (numsSize + 1));
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        ans[nums[i]] = 1;
//    }
//    *returnSize = 0;
//    for (i = 1; i <= numsSize; i++)
//    {
//        if (ans[i] != 1)
//            ans[(*returnSize)++] = i;
//    }
//    return ans;
//}