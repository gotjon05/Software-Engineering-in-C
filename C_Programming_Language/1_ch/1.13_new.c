/*
write a program to print a histogram of lengths of words in its input. Draw histogram with bars horizontal and vertical.        
                                                                                                                                
                                                                                                                                
                                                                                                                                
get input -- avoid spaces and newlines                                                                                          
                                                                                                                                
                                                                                                                                
If the input is: I love C programming                                                                                           
                                                                                                                                
The output should be:                                                                                                           
*                                                                                                                               
****                                                                                                                            
*                                                                                                                               
***********                                                                                                                     
*/                                                                                                                              
                                                                                                                                
// https://www.tutorialspoint.com/cprogramming/c_operators_precedence <----------                                               
                                                                                                                                
#include <stdio.h>                                                                                                              
int main()                                                                                                                      
{                                                                                                                               
    char c;                                                                                                                     
                                                                                                                                
    //Logical AND && -- evaluated Left to right                                                                                 
    //equality evaluated before assignment                                                                                      
    while(((c = getchar()) != EOF && c != '\n')){                                                                               
    // c = getchar() != EOF                                                                                                     
    // getchar() != EOF                                                                                                         
    // c = 1 or 0 depending on equality                                                                                         
        //printf("c is %d", c);                                                                                                 
        if(c == ' '){                                                                                                           
            putchar('\n');                                                                                                      
        } else { putchar('*');}                                                                                                 
    }                                                                                                                           


