#include <stdio.h>

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int* dp = new int[n + 1];
    int* price = new int[n + 1];
    for(int i = 1; i <= n; ++i)
        scanf("%d", &price[i]);
    
    for(int i = 1; i <= n; ++i){
        dp[i] = price[i];
        for(int j = 1; j < i / 2 + 1; ++j){
            dp[i] = MAX(dp[i - j] + price[j], dp[i]);
        }
    }
    
    printf("%d\n", dp[n]);
    
    return 0;
}
