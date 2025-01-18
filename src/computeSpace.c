/*A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all varTypeacters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the varType of code ('i' for integer, 'd' for decimal, or 'c' for varTypeacter). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect varType for any tracking number, the program should print 'Invalid tracking code varType' and exit.
input: 3 | 10 i | 7 c |  12 d  => output:  143 bytes; input: 2 | 3 c | 20 d => output: 163 bytes, input: 4 | 5 i | 2 d | 10 a | 3 c => output: Invalid tracking code varType 
*/
#include <stdio.h>
int main () 
{
    int num,i;
    int varSize, memory=0;
    char varType;
    scanf("%d", &num);
    i=0;
    int uncorrect = 0;
    while(i<num)
    {
        scanf("%d %c", &varSize, &varType);
        if (varType == 'c' && !uncorrect)
        {
            char typeC[varSize]; 
            memory += sizeof(typeC);
        }
        else if(varType == 'i' && !uncorrect)
        {
            int typeI[varSize];
            memory+= sizeof(typeI);
        }
        else if(varType == 'd' && !uncorrect)
        {
            double typeD[varSize];
            memory+= sizeof(typeD);    
        }
        else
        {
            uncorrect =1;
        }
        
        i++;
    }
    if(uncorrect)
    {
        printf("Invalid tracking code type\n");
    }
    else
    {
        printf("%d bytes", memory);
    }
    
}