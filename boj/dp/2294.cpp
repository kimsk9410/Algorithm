#include <stdio.h>
#include <vector>
#include <algorithm>

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    
    vector<int> dp(k + 1, 10001);
    
    vector<int> coin;
    for(int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if(temp <= k)
            coin.push_back(temp);
    }
    
    sort(coin.begin(), coin.end());
    
    dp[0] = 0;
    
    for(int i = 1; i <= k; ++i){
        for(int j = 0; j < coin.size(); ++j){
            if(i < coin[j]){
                break;
            }else{
                dp[i] = MIN(dp[i - coin[j]] + 1, dp[i]);
            }
        }
    }
    
    if(dp[k] > 10000)
        printf("-1\n");
    else
        printf("%d\n", dp[k]);
    
    return 0;
}
