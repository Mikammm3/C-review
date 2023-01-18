#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[2000] = { 0 };
//    int i = 0;
//    int sum1 = 0;
//    int count1 = 0;
//    int count2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)
//        {
//            sum1 += arr[i];
//            count1++;
//        }
//        else if (arr[i] < 0)
//        {
//            count2++;
//        }
//    }
//    if (count1 == 0 && count2 == 0)
//        printf("0 0.0");
//    else
//    {
//        double avg = sum1 * 1.0 / count1;
//        printf("%d %.01lf\n", count2, avg);
//    }
//    return 0;
//}


//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int i = 0;
//    int min = rotateArray[0];
//    for (i = 1; i < rotateArrayLen; i++)
//    {
//        if (rotateArray[i] < min)
//            min = rotateArray[i];
//    }
//    return min;
//}