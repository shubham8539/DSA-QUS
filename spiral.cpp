#include<bits/stdc++.h>

using namespace std;




vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int srow=0;
        int scol=0;
        int erow=row-1;
        int ecol=col-1;
        
        while(count<total)
        {
            for(int i=scol;(count<total && i<=ecol);i++)
            {
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;
            for(int i=ecol;(count<total && i>=erow);i--)
            {
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;
            
            for(int i=ecol;(count<total && i>=scol);i--)
            {
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;
            
            for(int i=erow;(count<total && i>=srow);i--)
            {
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
            }
        return ans;
        
}
        
        int main()
        {

  vector<vector<int> v ={ {1,2,3},{4,5,6},{7,8,9}};
  spiralOrder(v);







        }
        
        
        
        
        
        
    