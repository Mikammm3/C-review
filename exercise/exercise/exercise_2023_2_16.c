#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include<math.h>
//int a[9999], b[999];
//int apm, aps, apn, apt, aptotal;
//int m, s, n, t, total;
//
//#include <stdio.h>
//#include<math.h>
//int a[9999], b[999];
//int apm, aps, apn, apt, aptotal;
//int m, s, n, t, total;
//
//int ck()
//{
//	if (total > 5)
//		return 1;
//	int a = s;
//	int b = t;
//	for (int i = 0; i < m; i++)
//	{
//		a = a * 10 + s;
//	}
//	for (int i = 0; i < total - m; i++)
//	{
//		a *= 10;
//	}
//	for (int i = 1; i < total - m; i++)
//	{
//		b = t + b * 10;
//	}
//	return a + b > n;
//}
//
//int main()
//{
//	while (scanf("%d", &n) && n)
//	{
//		printf("%d: ", n);
//		if (n == 1)
//		{
//			printf("10\n");
//			continue;
//		}
//		a[0] = 1;
//		b[0] = 1;
//		for (int i = 1; i < 9999; i++)
//		{
//			a[i] = (a[i - 1] * 10 + 1) % n;
//		}
//		for (int i = 1; i < 999; i++)
//		{
//			b[i] = b[i - 1] * 10 % n;
//		}
//		for (total = 1, aps = 0; total < 9999; total++)
//		{
//			int k = 0;
//			if ((n % 10 == 0 || n % 25 == 0) && total > 11)
//				k = total - 11;
//			//m¸ös£¬total-m¸öt
//			for (m = k; m < total; m++)
//				for (s = 1; s < 10; s++)
//					for (t = 0; t < ((n % 10 == 0) ? 1 : 10); t++)
//						if ((t != s) &&
//							(((long long)a[m]) * b[total - m] * s + t * a[total - m - 1]) % n == 0 && ck() &&
//							(!aps || aps > s))
//						{
//							aps = s;
//							apt = t;
//							aptotal = total;
//							apm = m;
//						}
//			if (aps)
//				break;
//		}
//		for (int i = 0; i < apm + 1; i++)
//		{
//			printf("%d", aps);
//		}
//		for (int i = 0; i < aptotal - apm; i++)
//		{
//			printf("%d", apt);
//		}
//		printf("\n");
//	}
//	return 0;
//}




