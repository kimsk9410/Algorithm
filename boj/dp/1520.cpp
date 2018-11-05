#include <stdio.h>

using namespace std;

int m, n;
int** map;
int** dp;

int search(int x, int y){
    if(dp[x][y] == -1){
        dp[x][y] = 0;
        if(x > 0 && map[x][y] > map[x - 1][y])
            dp[x][y] += search(x - 1, y);
        if(x < m - 1 && map[x][y] > map[x + 1][y])
            dp[x][y] += search(x + 1, y);
        if(y > 0 && map[x][y] > map[x][y - 1])
           dp[x][y] += search(x, y - 1);
        if(y < n - 1 && map[x][y] > map[x][y + 1])
            dp[x][y] += search(x, y + 1);
    }

    return dp[x][y];
}

int main(){
    scanf("%d %d", &m, &n);
    
    map = new int*[m];
    dp = new int*[m];
    
    for(int i = 0; i < m; ++i){
        map[i] = new int[n];
        dp[i] = new int[n];
        for(int j = 0; j < n; ++j){
            dp[i][j] = -1;
            scanf("%d", &map[i][j]);
        }
    }
    
    dp[m - 1][n - 1] = 1;
    
    printf("%d\n", search(0, 0));
    
    return 0;
}
