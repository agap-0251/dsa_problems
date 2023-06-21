//Leetcode - Given two 2d vectors [a,b] a -> value,b - weight
//v1 = [[1,1],[4,5],[3,8]] , v2 = [[3,1],[1,5]] then merge two 2d vectors and return it like
// v = [[1,6],[3,9],[4,5]]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m;
        for(int i = 0; i < items1.size();i++) {
                m[items1[i][0]] += items1[i][1];    
        }
        
        for(int i = 0; i < items2.size();i++) {
                m[items2[i][0]] += items2[i][1];    
        }
        vector<vector<int>> v;
        for(auto &ar : m ) {
            v.push_back({ar.first,ar.second});
        }
        return v;
    }
};
