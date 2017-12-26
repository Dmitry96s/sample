#include <stdio.h>
#include <string.h>

int main(void)
{

    buff_overflow_test();
    return 0;
}
Ошибка будет тут

int buff_overflow_test()
{

    char buff_var4[4];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff_var4);

    if(strcmp(buff_var4, "pasw"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }
}
