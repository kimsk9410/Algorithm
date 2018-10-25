#include <stdio.h>

#define MAX(X,Y) ((X) < (Y) ? (Y) : (X))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int *dp = new int[n];
    int *stair = new int[n];
    
    for(int i = 0; i < n; ++i){
        scanf("%d", &stair[i]);
    }
    
    dp[0] = stair[0];
    dp[1] = stair[0] + stair[1];
    dp[2] = MAX(stair[0] + stair[2], stair[1] + stair[2]);
    
    for(int i = 3; i < n; ++i){
        dp[i] = MAX(dp[i - 2], dp[i - 3] + stair[i - 1]) + stair[i];
    }
    
    printf("%d\n", dp[n - 1]);
    
    return 0;
}
