#include <stdio.h>      

int While_Len(char stroka[]);
void Form_Output(char stroka[]);
void While_Star(char stroka[]);
void For_Star(char stroka[]);

int main(void)                      
{                 
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);         
    Form_Output(name);
    return 0;                       
} 

int While_Len(char stroka[])
{
    int len = 0;
    if (stroka != '\0')
    {
        while (stroka[len] != '\0')
        {
            len++;
        }
    }
    return len;
}

void Form_Output(char stroka[])
{
    While_Star(stroka);
    printf("* %s *\n", stroka);
    While_Star(stroka);
}
void While_Star(char stroka[])
{
    int len = While_Len(stroka);
    int i = 0;
    while (i<(len+4))
    {
        printf("*");
        i++;
    }
    printf("\n");
}

void For_Star(char stroka[])
{
    int len = While_Len(stroka);
    for (size_t i = 0; i < len+4; i++)
    {
        printf("*");
    }
    printf("\n");
}

