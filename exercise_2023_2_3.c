#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    double arr[5][5] = { 0 };
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &arr[i][j]);
//        }
//    }
//    double sum[5] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            sum[i] += arr[i][j];
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.01lf ", arr[i][j]);
//            if (j == 4)
//                printf("%.01lf ", sum[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    double score[5] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        double sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score[j]);
//            sum += score[j];
//            printf("%.01lf ", score[j]);
//            if (j == 4)
//                printf("%.01lf\n", sum);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int arr[5][5] = { 0 };
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//                max = arr[i][j];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] == max)
//                printf("%d %d\n", i + 1, j + 1);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    int flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                flag = 1;
//                i += n;//跳出循环
//            }
//        }
//    }
//    if (flag != 1)
//        printf("Yes\n");
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j)
//            {
//                if (arr[i][j] != 0)
//                    flag = 0;
//            }
//        }
//    }
//    if (flag == 1)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//char Iswin(char board[3][3], int row, int col)
//{
//    //横三行
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 'O')
//            return board[i][0];
//    }
//    //竖三列
//    for (i = 0; i < col; i++)
//    {
//        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 'O')
//            return board[0][i];
//    }
//    //对角线
//    if (((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
//        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) && board[1][1] != 'O')
//        return board[1][1];
//    return 'Q';
//}
//
//
//int main()
//{
//    char board[3][3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 3; j++)
//        {
//            scanf(" %c", &board[i][j]);
//        }
//    }
//    char ret = Iswin(board, 3, 3);
//    if (ret == 'K')
//        printf("KiKi wins!\n");
//    else if (ret == 'B')
//        printf("BoBo wins!\n");
//    else
//        printf("No winner!\n");
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0)
//                arr[i][j] = 1;
//            else if (i == j)
//                arr[i][j] = 1;
//            else if (i >= 2 && j >= 1)
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = -0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++)
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}