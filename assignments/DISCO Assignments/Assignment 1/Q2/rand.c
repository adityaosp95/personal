#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0;
    time_t t;
    int arr[100], arrb[100];
    srand((unsigned) time(&t));
    
    for ( i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
        arrb[i] = i + 1;
    }
    
    for ( i = 0; i < 100; i++)
    {
        int temp = 0;
        int id = 0;
        id = rand() % (i + 1);
        temp = arr[i];
        arr[i] = arr[id];
        arr[id] = temp;
        
        id = rand() % (i + 1);
        temp = arrb[i];
        arrb[i] = arrb[id];
        arrb[id] = temp;
    }
    for ( i = 0; i < 528; i++)
    {
        printf("%d\n", rand() % 1000);
    }
    
}
