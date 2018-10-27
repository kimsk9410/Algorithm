#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    long *fibonaci = new long[n];
    fibonaci[0] = 1;
    fibonaci[1] = 1;
    for(int i = 2; i < n; ++i){
        fibonaci[i] = fibonaci[i - 2] + fibonaci[i - 1];
    }
    
    printf("%ld\n", fibonaci[n - 1]);
    
    return 0;
}
