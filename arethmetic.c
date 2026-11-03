#include<stdio.h>

int main(){


    //  arethmetic operatos are 
    //         +  addition
    //         -  substruction
    //         *  multiplication
    //         /  division
    //         %  modulas
    //   

    int a = 10;
    int b= 2;

    int sum = a + b;
    printf("summation  =  %d\n" , sum);

    int sub = a-b;
    printf("substraction = %d\n" , sub);

    int mul = a*b;
    printf("multiplication  = %d\n" , mul);

    int div = a/b;
    printf("division = %d\n", div);

   // bijor number division 

     float x = 15;
    int y = 2;
    
    float divided = x/y;
    printf("divided is %.2f\n",divided);


    // modulas

    int g = 13;
    int s = 2;
    int rem = g % s;
    printf("reminder = %d\n",rem);

  


    return 0;
}