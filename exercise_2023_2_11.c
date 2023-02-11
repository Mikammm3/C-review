#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* str)
//{
//    char tmp = *str;//abcdef
//    int len = strlen(str);
//    *str = *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if (strlen(str + 1) >= 2)
//        reverse_string(str + 1);
//    *(str + len - 1) = tmp;
//}
//int main()
//{
//    char str[10001] = { 0 };
//    gets(str);
//    reverse_string(str);
//    printf("%s\n", str);
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//#include<stdio.h>
//int get_count(int money)
//{
//	int total = 0;
//	int rest = money/1;
//	total += rest;
//	while (rest / 2 != 0)
//	{
//		total += 1;
//		rest -= 1;
//	}
//	return total;
//}
//int main()
//{
//	int money = 20;
//	int bottle = get_count(money);
//	printf("%d\n", bottle);
//	return 0;
//}