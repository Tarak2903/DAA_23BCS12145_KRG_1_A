
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,p=0,maxi=0;
        
        while(i<arr.size()&&j<dep.size()){
            
            if(arr[i]<=dep[j]){
                p++;
                i++;
            }
            else{
                p--;
                j++;
            }
            maxi=max(maxi,p);
        }
        return maxi;
        
    }
    
};


