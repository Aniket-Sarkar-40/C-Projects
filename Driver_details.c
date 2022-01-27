#include <stdio.h>
#include <stdlib.h>

struct Driver_details
{
    char *Name;
    int licence_no;
    char *rout;
    int kms;
};

void data_collect(struct Driver_details **arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = (struct Driver_details *)malloc(sizeof(struct Driver_details));
        arr[i]->Name = (char *)malloc(50 * sizeof(char));
        arr[i]->rout = (char *)malloc(50 * sizeof(char));

        printf("\nLicence no: ");
        scanf("%d", &arr[i]->licence_no);
        printf("\nSpeeds :");
        scanf("%d", &arr[i]->kms);
        printf("\nName :");
        scanf("%s", arr[i]->Name);
        printf("\nRout :");
        scanf("%s", arr[i]->rout);
    }
}

void display(struct Driver_details *data)
{
    printf("\n\tDisplaying the details of Mr. %s --> \n", data->Name);

    printf("\nName : ");
    puts(data->Name);
    printf("\nLicence no. : %d\n", data->licence_no);
    printf("\nRout : ");
    puts(data->rout);
    printf("\nAvg Speed : %d", data->kms);
    free(data);
    data = NULL;
}

int main()
{
    struct Driver_details *arr[10];
    int n, i;

    printf("Enter the no. of drivers\n");
    scanf("%d", &n);

    data_collect(arr, n);
    printf("\n\tPrinting the details of all drivers\n");
    for (i = 0; i < n; i++)
    {
        display(arr[i]);
    }
    return 0;
}