#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i, j, n, choice;
    char str[100];
    char fin[100];
    //char op[] = {"+","-","<=",">=","*","/","$","^",<",">","==""};
    char temp[100];
    printf("\n Intermediate Code Generator ->");
    printf("\n 1. Assignment  2. Arithmetic  3. Relation  4. Exit");
    printf("\n Enter Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n Enter Input String length : ");
        scanf("%d",&n);
        for(i=0; i < n; i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0; i<n; i++)
        {

        }

        break;
    case 2:
        if(str[1] == '+'|| str[1] == '-')
        {
            for(i = 0; i < 3; i++)
            {
                temp[i] += str[i];
            }
        }
        break;

    }


}
