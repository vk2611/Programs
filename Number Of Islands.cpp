class Solution {
public:
    void count(vector<vector<char>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i==m || j<0 || j==n || grid[i][j]=='0'){
            return ;
        }
        grid[i][j]='0';
        count(grid,i+1,j);
        count(grid,i-1,j);
        count(grid,i,j+1);
        count(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    count(grid,i,j);
                }
            }
        }
        return cnt;
    }
};
