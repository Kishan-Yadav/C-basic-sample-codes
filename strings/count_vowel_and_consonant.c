/*WAP to count vowel and consonant*/
#include <stdio.h>
#include<string.h>
int main()  
{  
    //Counter variable to store the count of vowels and consonant  
   int i, vCount = 0, cCount = 0;  
   char str[20];
   printf("Enter the string: ");
   gets(str);  
   for(i = 0; i < strlen(str); i++){  
       str[i] = tolower(str[i]);  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {  
           //Increments the vowel counter  
            vCount++;  
        }  
        else if(str[i] >= 'a' && str[i] <= 'z'){  
            //Increments the consonant counter  
            cCount++;  
        }  
   }  
   printf("Number of vowels : %d\n", vCount);  
   printf("Number of consonant : %d\n", cCount);  
   return 0;  
}
