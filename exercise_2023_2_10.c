#define _CRT_SECURE_NO_WARNINGS 1

void Print_Factorial(const int N)
{
    if (N < 0)
        printf("Invalid input");
    else
    {
        int arr[3000] = { 0 };
        int i = 0;
        int rest = 0;
        int arrlength = 1;
        arr[0] = 1;
        for (i = 1; i <= N; i++)//4=1*2*3*4
        {
            for (int j = 0; j < arrlength; j++)
            {
                int tmp = rest + i * arr[j];
                arr[j] = tmp % 10;
                rest = tmp / 10;
            }
            while (rest)
            {
                arr[arrlength++] = rest % 10;
                rest /= 10;
            }
        }
        for (i = arrlength - 1; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
    }
}