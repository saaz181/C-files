#include <stdio.h>

int main()
{
    int len, start;
    scanf("%d %d", &len, &start);
    int arr[len];
    for (int i=0; i < len; i++) arr[i] = i + 1;
    int j=0, i=start-1, k=0;
    while (j < len)
    {
        arr[i] = 0;
        j++;
        int c=0;
        for (k = i+1; k <= i+3; k++)
            if (k > len-1){
                 k -= len;
                 if (arr[k] == 0) c++;
                }
            else if (arr[k] == 0) c++;
            
        i += (k+c);    
            
    }
    printf("%d\n", arr[0]);
            
        
            
}    
