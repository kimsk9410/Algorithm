#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int* dp = new int[n];
    dp[0] = 1;
    dp[1] = 3;
    
    for(int i = 2; i < n; ++i){
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
    }
    
    printf("%d\n", dp[n - 1]);
    
    return 0;
}
