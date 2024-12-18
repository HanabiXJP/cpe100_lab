//find String Length & find Substring of string1 in string2
 #include <stdio.h>

int findStringLength(char str[])
{
    int i;
    for (i=0; str[i]!='\0';i++){}
    return i;
}

int findSubString(char str1[], char str2[])
{
    int count = 0, locate;
    for (int i=0; str1[i]!='\0';i++)
    {
        if(str2[count]!='\0')
        {
            if (str2[count]==str1[i])
            {
                if (count == 0)
                {
                    locate = i;
                }
                count++;
            }
            else{
                count = 0;
            }
        }
        if(count == findStringLength(str2))
        {
            return locate;
        }
    }
    return locate = -1;

}

int main()
{
    int locate;
    char *string1, *string2;
    string1 = "I Love CPE";
    string2 = "Love";
    locate = findSubString(string1,string2);
    if (locate == -1)
    {
        printf("string2 is not a substring of string1");
    }
    else{
        printf("index of the first occurance = %d", locate);
    }
    return 0;
}