#include <stdio.h>
#include <string.h>

int main(void)
{

    buff_overflow_test();
    return 0;
}


int buff_overflow_test()
{


    char buff_var4[8];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff_var4);


    if(strcmp(buff_var4, "password"))
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
