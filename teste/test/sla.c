#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "novapalvr";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 4);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}