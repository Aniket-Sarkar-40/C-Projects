#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceword(const char *str, const char *old_word, const char *new_word)
{
    char *resultStr;
    int i, count = 0;
    int oldWordLength = strlen(old_word);
    int newWordLength = strlen(new_word);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], old_word) == &str[i])
        {
            count++;
            i = i + oldWordLength - 1;
        }
    }
    // Making a new string to fit the repace the old word
    resultStr = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, old_word) == str)
        {
            strcpy(&resultStr[i], new_word);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultStr[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultStr[i] = '\0';

    return resultStr;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("letter.txt", "r");
    ptr2 = fopen("BILL.txt", "w");

    char str[200];
    fgets(str, 200, ptr);
    printf("The given template was %s\n", str);

    char *newString , name[20];
    // call the replace word function
    printf("Enter your name : \n");
    scanf("%s",name);

    newString = replaceword(str, "{{item}}", "Shoes");
    newString = replaceword(newString, "{{name}}", name);
    newString = replaceword(newString, "{{outlet}}", "Shoe Corner");

    printf("The Bill generated is %s\n", newString);
    fprintf(ptr2, "%s", newString);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}