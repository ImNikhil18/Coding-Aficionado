class Solution {
public:

    void fun(int i, int n, int k, vector<int>& aux, vector<vector<int>>& res){
        if(aux.size()==k){
            res.push_back(aux);
            return;
        }
        for(int j = i; j<=n; j++){
            aux.push_back(j);
            fun(j+1,n,k,aux,res);
            aux.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> aux;
        vector<vector<int>> res;
        fun(1,n,k,aux,res);
        return res;
    }
};
