/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int arr[7] = {1,2,3,4,5,6,7}; // let rotate arr[] 
   // if value is greater than 7, take value - 7 otherwise take 2 + value
   
   for (int i = 0; i < 7; i++)
   {
       int value = arr[i] + 2;
       
       if (value > 7)
       {
           arr[i] = value - 7;
       }
       else 
       arr[i] = value;
       
       printf("%d", arr[i]);
   }
   
   
    

    return 0;
}

