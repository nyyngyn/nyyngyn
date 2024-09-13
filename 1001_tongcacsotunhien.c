#include <stdio.h>
#include <math.h>
 int main(){
 	 unsigned long n, t;
    while (scanf("%lu", &n) != EOF) {
        t = n * (n + 1) / 2;
        printf("%lu\n", t);
    }
 	return 0;
}

