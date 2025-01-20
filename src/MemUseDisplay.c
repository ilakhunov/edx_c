/*
You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types you use (remember that different data types use different amounts of memory). To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans. The following examples illustrate what this means:

Examples
If the user input were:

i 36794
then the amount of space needed (if we assume that an integer uses 4 bytes in memory) would be 4*36794 = 147176 bytes. This corresponds to 147 kilobytes and 176 bytes, so the output should be:

147 KB and 176 B
 

Input:
d 654250
Output:
5 MB and 234 KB and 0 B
 

Input:
d 35
Output:
280 B
Note:
The kilobyte has different values in binary and in decimal. Please note that for this exercise, we are referring to the kilobyte of value 1000. Although this value is referred to using the symbol kB (read this article for more information), please use the symbol KB when coding this exercise.

You may attempt and submit your solution as many times as you wish. Only your highest score will be counted.*/
#include <stdio.h>
int  printOf(int);
int main (){
    char cType;
    int quantity;
    scanf("%c %d", &cType, &quantity);
    if (cType == 'i')
    {
        int temp_i[quantity];
        int result =sizeof(temp_i);
        printOf(result);
    }
    else if (cType == 'c')
    {
        char temp_c[quantity];
        int result =sizeof(temp_c);
        printOf(result);
    }
    else if (cType == 'd')
    {
        double temp_d[quantity];
        int result =sizeof(temp_d);
        printOf(result);
    }
    else if (cType == 's')
    {
        short temp_s[quantity];
        int result =sizeof(temp_s);
        printOf(result);
    }

        
    return 0;
}
int printOf(int x)
{
    int mb=x/1000000;
    int kb=x%1000000/1000;
    int b = x%1000;
    if (mb){
        printf("%d MB and %d KB and %d B", mb, kb, b);
    }
    else if(kb && mb==0 ){
        printf("%d KB and %d B", kb, b);
    }
    else if (b && kb ==0 && mb ==0){
        printf("%d B", b);
    }
    return 0;
}