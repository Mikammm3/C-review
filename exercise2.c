#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int people = 0;
//    int time = 0;
//    scanf("%d", &people);
//    if (people >= 12)
//        time = 4 * (people / 12) + 2;
//    else
//        time = 2;
//    printf("%d\n", time);
//    return 0;
//}


//找四个数中的最大数

//int main()
//{
//	int i = 0;
//	int z = 0;
//	int max = 0;
//	for(i=0;i<4;i++)
//	{
//		scanf("%d", &z);
//		if (z > max)
//			max = z;
//	}
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 90 && a <= 100)
//            printf("A\n");
//        else if (a >= 80 && a <= 89)
//            printf("B\n");
//        else if (a >= 70 && a <= 79)
//            printf("C");
//        else if (a >= 60 && a <= 69)
//            printf("D");
//        else if (a <= 59 && a >= 0)
//            printf("E");
//        else
//            printf("F");
//    }
//    return 0;
//}

//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//    return 0;
//}

//int main()
//{
//    int a;
//    int count1 = 0;
//    int count2 = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a > 0)
//            count1++;
//        if (a < 0)
//            count2++;
//    }
//    printf("positive:%d\nnegative:%d\n", count1, count2);
//    return 0;
//}

int main()
{
    int a = 0;
    int max = 0;
    int min = 100;
    scanf("%d", &a);
    a = 0;
    while (scanf("%d", &a) != EOF)
    {
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    printf("%d\n", max - min);
    return 0;
}