#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int cute = 0;
    for(int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if(temp)
            ++cute;
    }
    
    if(cute > n / 2)
        printf("Junhee is cute!\n");
    else
        printf("Junhee is not cute!\n");
    
    return 0;
}
