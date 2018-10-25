#include <stdio.h>

#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int **dp = new int*[n];
    int **pay = new int*[n];
    
    for(int i = 0; i < n; ++i){
        dp[i] = new int[3];
        pay[i] = new int[3];
        for(int j = 0; j < 3; ++j){
            scanf("%d", &pay[i][j]);
        }
    }
    
    for(int i = 0; i < 3; ++i){
        dp[0][i] = pay[0][i];
    }
    
    for(int i = 1; i < n; ++i){
        dp[i][0] = MIN(dp[i - 1][1], dp[i - 1][2]) + pay[i][0];
        dp[i][1] = MIN(dp[i - 1][0], dp[i - 1][2]) + pay[i][1];
        dp[i][2] = MIN(dp[i - 1][0], dp[i - 1][1]) + pay[i][2];
    }
    
    int result = MIN(dp[n - 1][0], dp[n - 1][1]) > dp[n - 1][2] ? dp[n - 1][2] : MIN(dp[n - 1][0], dp[n - 1][1]);
    printf("%d\n", result);
    
    return 0;
}
