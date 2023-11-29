#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 bool isPalindromeString(const char *str) {
   int length = strlen(str);
   for (int i = 0; i < length / 2; i++) {
       if (str[i] != str[length - i - 1]) {
           return false;
       }
   }
   return true;
}
 
bool isPalindromeNumber(int num) {
   int originalNum = num;
   int reversedNum = 0;
   
   while (num > 0) {
       int remainder = num % 10;
       reversedNum = reversedNum * 10 + remainder;
       num /= 10;
   }
   
   return originalNum == reversedNum;
}
 
int main() {
   char str[100];
   printf("Enter a string: ");
   scanf("%s", str);
   
   if (isPalindromeString(str)) {
       printf("String is a palindrome.\n");
   } else {
       printf("String is not a palindrome.\n");
   }
 
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   
   if (isPalindromeNumber(num)) {
       printf("Number is a palindrome.\n");
   } else {
       printf("Number is not a palindrome.\n");
   }
 
   return 0;
}
