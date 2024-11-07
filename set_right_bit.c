#include <stdio.h>

int unsetLSB(int n) {
    if (n == 0)
        return 0;
  
   
    int pos = 0;
    while (((n >> pos) & 1) == 0) {
        pos++;
    }
  
   
    n = n ^ (1 << pos);
  
    return n;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n", unsetLSB(n));
    return 0;
}

