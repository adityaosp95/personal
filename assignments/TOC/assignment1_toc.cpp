#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

void print(char *argv[], int n)
{
    int i = n;
    while( argv[1][i] != '\0' )
    {
        printf("%c", argv[1][i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if ( argc != 2 )
    {
        printf("enter input\n");
        return 0;
    }
        
    int stateA[] = {0, 2, 3, 0, 0, 1, 1};
    int stateB[] = {3, 5, 4, 5, 6, 4, 3};
    
    int final_state = 6;
    int start_state = 0;
    int strlen;
    
    int i = 0;
    int curr_state = start_state;
    int prev_state = start_state;
    
    printf("\nPrevious State\tCurrent State\tRemaining String\n");    
    while(argv[1][i] != '\0')
    {
        printf("%d\t\t%d\t\t", prev_state, curr_state);
        print(argv, i);
        prev_state = curr_state;
        if ( argv[1][i] == 'a' )
            curr_state = stateA[curr_state];
        else if ( argv[1][i] == 'b' )
            curr_state = stateB[curr_state];
        i++;
    }
    printf("%d\t\t%d\t\tNULL", prev_state, curr_state);
    print(argv, i);
    
    printf("\n\nFinal State: %d.\nTherefore - ", curr_state);
    if (curr_state == final_state)
        printf("Accepted\n");
    else
        printf("Rejected\n");
    
    
    return 0;
}
