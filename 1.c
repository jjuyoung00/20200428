#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main(void)
{
        for (int i = 0; i < 9; i++)
        {
               for (int j = 0; j < 9; j++)
               {
                       printf("%d*%d=%d\t", i + 1, j + 1, (i + 1)*(j + 1));
               }
               printf("\n");
               printf("아무키나 누르시오");
               getch();
               system("cls");
        }
        return 0;

}
