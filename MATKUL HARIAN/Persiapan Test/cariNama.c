#include <stdio.h>
#include <string.h>

int main () {
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "ghr";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
      printf("terdapat di data: %s\n", str1);
   } else {
      printf("Character not found");
   }

   return(0);
}
