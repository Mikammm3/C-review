#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int arr[1000] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//    }
//    int j = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%d", arr[j]);
//    }
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%ld\n", sum);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int k = 0;
//    int hour = 0;
//    int minute = 0;
//    scanf("%d:%d %d", &hour, &minute, &k);
//    int m = k % 60 + minute;
//    int h = k / 60 + hour;
//    while (m >= 60)
//    {
//        m %= 60;
//        h++;
//    }
//    while (h >= 24)
//    {
//        h %= 24;
//    }
//    printf("%02d:%02d\n", h, m);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long max = 0;
//    long long min = 0;
//    long long tmp = 0;
//    long long a = n;
//    long long b = m;
//    while (tmp = a % b)
//    {
//        a = b;
//        b = tmp;
//    }
//    max = b;
//    min = n * m / max;
//    printf("%lld\n", max + min);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100001] = { 0 };
//    int tmp = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    int tmp = 0;
//    long long sum = 0;
//    int i = 0;
//    while (n)
//    {
//        if ((n % 10) % 2 == 0)
//        {
//            tmp = 0;
//        }
//        else
//        {
//            tmp = 1;
//        }
//        sum += tmp * pow(10, i++);
//        n /= 10;
//    }
//    printf("%lld", sum);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    char* p = arr;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if ((*p) == 'C')
//            c++;
//        else if ((*p) == 'H')
//            ch += c;
//        else if ((*p) == 'N')
//            chn += ch;
//        p++;
//    }
//    printf("%lld\n", chn);
//    return 0;
//}