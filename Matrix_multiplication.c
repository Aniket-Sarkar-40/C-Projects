#include <stdio.h>

void getVal(int arr[][10], int m , int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void Multiply(int m1, int s, int n2,int arr1[][10], int arr2[][10])
{
    int res[10][10],sum=0;

    for (int i = 1; i <= m1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            for (int k = 1; k <= s; k++)
            {
                sum+=arr1[i][k] * arr2[k][j];

            }
            res[i][j]=sum;
            printf("%d  ",res[i][j]);
            sum=0;
        }
        printf("\n");
    }

}

int main()
{
    int m1, n1, m2, n2;

    printf("Enter the row and column respectively of your first matrix\n");
    scanf("%d %d", &m1, &n1);

    printf("Enter the row and column respectively of your second matrix\n");
    scanf("%d %d", &m2, &n2);

    if (n1 == m2)
    {
        int arr1[10][10], arr2[10][10];
        printf("Enter the values of your first matrix\n");

        getVal(arr1,m1,n1);

        printf("Enter the values of your second matrix\n");

        for (int i = 1; i <= m2; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("After multiplication :: \n");
        Multiply(m1,n1,n2,arr1,arr2);
        
    }
    else
    {
        printf("Sorry!Matrix multiplication is not possible here!!\n");
    }

    return 0;
}