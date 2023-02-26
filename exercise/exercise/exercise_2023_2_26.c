#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void test3()
//{
//	struct Stu s2[] = { {"zhangsan",99},{"lisi",78},{"wangwu",120} };
//	int sz = sizeof(s2) / sizeof(s2[0]);
//	qsort(s2, sz, sizeof(s2[0]), cmp_stu_by_name);
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",99},{"lisi",78},{"wangwu",120} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test1()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void Swap(char* buf1, char* buf2, size_t width)
//{
//	size_t i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, size_t num, size_t width, int(*cmp)(const void* p1, const void* p2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		int flag = 1;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	struct Stu s2[] = { {"zhangsan",99},{"lisi",78},{"wangwu",120} };
//	int sz = sizeof(s2) / sizeof(s2[0]);
//	bubble_sort(s2, sz, sizeof(s2[0]), cmp_stu_by_name);
//	return 0;
//}