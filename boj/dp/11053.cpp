#include <stdio.h>

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int* progression = new int[n];
    int dp[1001];
    int result = 0;
    
    for(int i = 0; i < n; ++i)
        scanf("%d", &progression[i]);
    
    for(int i = 1; i < 1001; ++i)
        dp[i] = 0;
    
    for(int i = 0; i < n; ++i){
        dp[progression[i]] = 0;
        for(int j = 1; j < progression[i]; ++j){
            dp[progression[i]] = MAX(dp[progression[i]], dp[j]);
        }
        ++dp[progression[i]];
        result = MAX(result, dp[progression[i]]);
    }
    
    printf("%d\n", result);
    
    return 0;
}
