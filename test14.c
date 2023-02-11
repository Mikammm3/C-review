#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		//指针加整数
//		str++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = NULL;
//	for (p=arr; p < &arr[5]; p++)
//	{
//		*p = 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = &arr[9] - &arr[0];
//	printf("%d\n", n);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//指针数组-存放指针的数组
//	int* arr[] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 0 };
//	//arr[i][j]
//	//(*(arr+i))[j]
//	//*(*(arr+i)+j)
//	//*(arr[i]+j)
//	return 0;
//}



//#include<stdio.h>
////1
//struct Book
//{
//	char name[20];
//	int price;
//};
//
////2
//struct Book
//{
//	char name[20];
//	int price;
//}b1,b2,b3;//全局变量
//
////3
//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;//重命名
//
//int main()
//{
//	struct Book b4;//局部变量
//	struct Book b5;
//	return 0;
//}




//#include<stdio.h>
//struct S
//{
//	char c;
//	char arr[10];
//	int* p;
//};
//struct B
//{
//	int a;
//	struct S s;
//	double d;
//};
//int main()
//{
//	struct B b = { 100,{'c',"hehe",NULL},5.14 };
//	return 0;
//}

//#include<stdio.h>
//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//int main()
//{
//	Book b1 = { .price = 100,.name = "haha" };
//	Book b2 = { .price = 250,.name = "xixi" };
//	printf("%s%s\n", b2.name, b1.name);
//	Book* p = &b1;
//	printf("%d\n", p->price);
//	return 0;
//}


