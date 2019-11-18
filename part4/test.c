int write() {}
int write(int i) {}



/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int square(int x) {
    // i dont know what i did but it works, please dont change
    srand(time(NULL));
    int num1, num2;
    do {
        num1 = 1 + rand() % x;
        num2 = 1 + rand() % x;
    } while(num1 != x || num2 != x);
    int num3 = num2;
    while (--num3 > 0) {
        num1 += num2;
    }
    return num1;
}

int main() {
	printf("%d %d\n", 10, square(10));
}
*/

/*



\begin{lstlisting}
0x7fffd03994b0 (1)
min  <s_type=FUNCTION,r_type=int,args=void>
   int,int  <s_type=FUNCTION,r_type=int,args=int,int>
      x  <s_type=VARIABLE,r_type=int,args=void>
      y  <s_type=VARIABLE,r_type=int,args=void>
   int,int,int  <s_type=FUNCTION,r_type=int,args=int,int,int>
      x  <s_type=VARIABLE,r_type=int,args=void>
      y  <s_type=VARIABLE,r_type=int,args=void>
      z  <s_type=VARIABLE,r_type=int,args=void>
\end{lstlisting}

*/