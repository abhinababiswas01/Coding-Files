/*ARRAYS*/

#include <stdio.h>

int main()
{

    //1-D ARRAY
    /*int marks[4];*/

    /*
      marks[0]= 32;
      marks[1]=45;
      marks[2]=49;
      marks[3]=69;

      printf("The marks of the student 1 is %d", marks[0]);
    */

    /*
     for (int i = 0; i < 4; i++)
     {
      printf("Enter the marks of %d student: ", i);
      scanf("%d", &marks[i]);
     }

     for (int i = 0; i < 4; i++)
     {
      printf("The marks of the student %d is %d\n", i, marks[i]);
     }

    */

    /*
     int marks[4] = {258, 454, 65, 755};

     for (int i = 0; i < 4; i++)
     {
         printf("The marks of the student %d is %d\n", i, marks[i]);
     }

     return 0;
    */


   //2-D ARRAY

   int marks[2][4] = {{258, 454, 65, 755},{25,14,45,78}};

     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
         
     }

     return 0;
}