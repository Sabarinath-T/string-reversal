#include<stdio.h>
#include<string.h>
int main()
{   int n=0,i,j;
    char word[20],reversed[n];
    printf("enter the string");
    scanf("%s",word);
    n=strlen(word);
    reversed[n]='\0';
    printf("word:%s\nlength=%d",word,n);
    j=(n-1);
    for(i=0;i<n;i++)
    {


    reversed[i]=word[j];
            j--;

    }
    printf("reversed word:%s",reversed);
    return 0;


}
