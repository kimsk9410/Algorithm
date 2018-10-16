#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    vector<string> hear(n);
    vector<string> see(m);
    
    for(int i = 0; i < n; ++i){
        cin >> hear[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> see[i];
    }
    
    sort(hear.begin(), hear.end());
    sort(see.begin(), see.end());
    
    vector<string> result;
    
    int i = 0, j = 0;
    while(i < hear.size() && j < see.size()){
        if(hear[i] == see[j]){
            result.push_back(hear[i]);
            ++i;
            ++j;
        }else if(hear[i] < see[j]){
            ++i;
        }else{
            ++j;
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << "\n";
    for(int i = 0; i < result.size(); ++i){
        cout << result[i] << "\n";
    }
    
    return 0;
}
