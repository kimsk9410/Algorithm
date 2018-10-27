#include <stdio.h>

#define MAX(X,Y) (((X) > (Y)) ? (X) : (Y))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int **dp = new int*[n];
    for(int i = 0; i < n; ++i){
        dp[i] = new int[n];
    }
    
    scanf("%d", &dp[0][0]);
    
    for(int i = 1; i < n; ++i){
        for(int j = 0; j <= i; ++j){
            scanf("%d", &dp[i][j]);
            if(j == 0){
                dp[i][j] = dp[i-1][j] + dp[i][j];
            }else if(j == i){
                dp[i][j] = dp[i-1][j-1] + dp[i][j];
            }else{
                dp[i][j] = MAX(dp[i-1][j-1], dp[i-1][j]) + dp[i][j];
            }
        }
    }
    
    int result = 0;
    for(int i = 0; i < n; ++i){
        result = MAX(dp[n - 1][i], result);
    }
    
    printf("%d\n", result);
    
    return 0;
}
