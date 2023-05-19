#include <stdio.h>      

void Output_Table(int x)
{
    printf("\n");
    for (int i = 1; i < x+1; i++)
    {
        for (int j = 1; j < x+1; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}

int main(void)
{
    int scale;
    printf("Enter the scale of your table: ");
    scanf("%d", &scale);
    Output_Table(scale);    
    return 0;
}