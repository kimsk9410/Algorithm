#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//int binarySearch(vector<string> v, int l, int r, string x)
//{
//    if (r >= l)
//    {
//        int mid = l + (r - l)/2;
//
//        if (v[mid].compare(x) == 0)
//            return mid;
//
//        if (v[mid].compare(x) > 0)
//            return binarySearch(v, l, mid-1, x);
//
//        return binarySearch(v, mid+1, r, x);
//    }
//
//    return -1;
//}

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    vector<string> hear(n);
    vector<string> result;
    
    for(int i = 0; i < n; ++i){
        cin >> hear[i];
    }
    
    sort(hear.begin(), hear.end());
    
    for(int i = 0; i < m; ++i){
        string temp;
        cin >> temp;
        if(binary_search(hear.begin(), hear.end(), temp)){
            result.push_back(temp);
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << "\n";
    for(int i = 0; i < result.size(); ++i){
        cout << result[i] << "\n";
    }
    
    return 0;
}
