#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int Add(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 10;
//	int c = 100;
//	int d = (a += 3, b = a - 5, c = a + b);//5
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//想要访问5，就使用[],[]是下标访问操作符，
//	//它把arr和4是[]的两个操作数
//	printf("%d\n", arr[4]);
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//()就是函数调用操作符
//	//()的操作数有三个，
//	//Add，a和b就是()的操作数
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;//局部变量，自动创建，自动销毁
//	//所以也被叫做自动变量，所以也就相当于:
//	//auto int a = 10;  auto一般被省略
//	return 0;
//}


//int main()
//{
//	//建议把num放到寄存器中
//	//放不放看编译器自己
//	register int num = 100;
//	return 0;
//}


////类型重命名  类型    ——别名
//typedef unsigned int  u_int;
//int main()
//{
//	//unsigned 无符号数
//	unsigned int num = 10;
//	u_int num2 = 20;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);//打印10个2
//	//因为a是局部变量，进作用域生命开始，
//	//出作用域生命结束变量销毁，所以每一次都会重新定义初始化
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//void test()
//{
//	//static 修饰局部变量
//	//改变(延长)了局部变量的生命周期
//	static int a = 1;
//	a++;
//	printf("%d ", a);//打印2-11
//	//加了static修饰后，变成了静态变量，生命周期延长
//	//出作用域变量也不会消失，下次进函数时不再重新定义a
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



////声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


////static 修饰函数
////改变了函数的作用域，
////使得函数只能在所在的.c文件内部使用
////其他.c文件不能使用
////生命周期不受影响
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////#define定义常量和宏
////宏和函数类似
//#define M 1000
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	printf("%d\n", M);
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}


////%p  打印地址
//int main()
//{
//	//这代码的意思是向内存申请4个字节的空间来存放10
//	int a = 10;
//	printf("%p\n", &a);//&a是拿出a的(最小的)地址
//	//将a的地址存到指针变量里面
//	int* pa = &a;//*表示pa是个指针，指向的对象类型是int
//	*pa = 20;//*pa就是a，把a改为了20
//	//*是解引用操作符
//	return 0;
//}


struct Student
{
	char name[20];
	int age;
	char sex[10];
	float score;
};

int main()
{
	//定义一个s1学生并初始化
	struct Student s1 = { "张三",20,"男",83.5f };
	//打印s1的信息
	//使用 对象.成员
	printf("%s %d %s %f\n", s1.name, s1.age, s1.sex, s1.score);
	struct Student* ps = &s1;
	//使用指针1.
	printf("%s %d %s %f\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
	//使用指针的 ->
	printf("%s %d %s %f\n", ps->name, ps->age, ps->sex, ps->score);
	return 0;
}
