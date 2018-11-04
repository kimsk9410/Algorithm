#include <stdio.h>

#define MAX(X,Y) (((X) > (Y)) ? (X) : (Y))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int* wine = new int[n + 1];
    int* dp = new int[n + 1];
    
    for(int i = 1; i <= n; ++i)
        scanf("%d", &wine[i]);
    
    dp[0] = 0;
    dp[1] = wine[1];
    if(n > 1)
        dp[2] = wine[1] + wine[2];
    
    for(int i = 3; i <= n; ++i){
        dp[i] = MAX(dp[i - 2], dp[i - 3] + wine[i - 1]) + wine[i];
        dp[i] = MAX(dp[i], dp[i - 1]);
    }
    
    printf("%d\n", dp[n]);
    
    return 0;
}
