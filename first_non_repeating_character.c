#include <stdio.h>

int non_repeating_character(char string[],int n)
{
    int k = 0, count[n];
    int i,j;

    for( i = 0 ; i < n ; i++)
        count[i] = 0;
    
    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++)
        {
            if( string[i] == string[j] )
                count[i]++;
        }
    }
    
    for( i = 0 ; i < n ; i++)
        if ( count[i] == 1 )
            return i;
    return -1;
}

int main()
{
    char string[] = "abcdcaf";
    int n = sizeof(string);
    int res = non_repeating_character(string,n-1);
    printf("%d",res);
    return 0;
}