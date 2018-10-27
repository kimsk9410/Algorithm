#include <stdio.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    
    int fibonaci[41];
    fibonaci[0] = 0;
    fibonaci[1] = 1;
    for(int i = 2; i < 41; ++i){
        fibonaci[i] = fibonaci[i - 2] + fibonaci[i - 1];
    }
    
    for(int i = 0; i < t; ++i){
        int n;
        scanf("%d", &n);
        if(n == 0){
            printf("1 0\n");
        }else{
            printf("%d %d\n", fibonaci[n - 1], fibonaci[n]);
        }
    }
    
    return 0;
}
