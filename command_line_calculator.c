#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    printf("Menu : \nadd -> addition\nsub->subtraction\nmultiply->multiplication\ndiv->division\n");
    if (argc>=3)
    {
    
        int a =atoi(argv[2]);
        int b =atoi(argv[3]);
        char *op = argv[1];


        if (strcmp(op,"add") == 0)
        {
            printf(">>%d\n",a+b);
        }
        else if (strcmp(op,"sub") == 0)
        {
            printf(">>%d\n",a-b);
        }
        else if (strcmp(op,"multiply") == 0)
        {
            printf(">>%d\n",a*b);
        }
        else if (strcmp(op,"div") == 0)
        {
            printf(">>%d\n",a/b);
        }
        
    }
    
    return 0;
}
