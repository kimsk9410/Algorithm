#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int *dp = new int[n];
    
    dp[0] = 1;
    dp[1] = 2;
    
    for(int i = 2; i < n; ++i){
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    
    printf("%d\n", dp[n - 1] % 10007);
    
    return 0;
}
