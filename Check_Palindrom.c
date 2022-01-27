#include <stdio.h>

int is_pallindrome(int num)
{
    if (num / 10 == 0)
    {
        return 1;
    }
    else
    {
        int temp = num, rem, rev_num = 0;
        while (temp)
        {
            rem = temp % 10;
            temp = temp / 10;
            rev_num = rev_num * 10 + rem;
        }

        if (num == rev_num)
        {
            return 1;
        }
        else
        {
            return 0;

        }
        
    }
}

int main()
{
    int num;
    printf("Enter a number to check if it is pallindrome or not\n");
    scanf("%d", &num);

    if (is_pallindrome(num))
    {
        printf("This number is a pallindrome number\n");
    }
    else
    {
        printf("This number is not a pallindrome number\n");
    }

    return 0;
}