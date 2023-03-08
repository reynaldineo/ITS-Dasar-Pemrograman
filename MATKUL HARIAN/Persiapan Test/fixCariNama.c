#include <stdio.h>
#include <string.h>

// cara tau ada di database apa engga
int main () {
   char haystack[100] = "deep learning for teen";
   char needle[10] = "learn";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   if(ret) {
      //printf("First matching character: %c\n", *ret);
      printf("terdapat di data: %s\n", haystack);
   } else {
      printf("Character not found");
   }

   return(0);
}
