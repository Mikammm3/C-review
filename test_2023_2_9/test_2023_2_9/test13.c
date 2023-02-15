#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//p就是指针变量，里面存放了a的地址
//	*p = 20;
//	//通过*就可以找到p所指向的元素
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0x0012ff44;
//	int* p = &a;
//	char* pc = &a;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 100;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p + i) = i + 1;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}




//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//野指针
//	return 0;
//}


