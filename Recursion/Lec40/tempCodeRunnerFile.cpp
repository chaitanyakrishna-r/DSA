#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>> &mat, vector<vector<int>> &visited, int x, int y, int n){
    if(x >= 0 && x < n && x >= 0 && x < n && visited[x][y] == 0 && mat[x][y] == 1){
        return true;
    }
    
    return false;
    
}



void solve(vector<vector<int>> &mat, vector<string> &ans,int n, int srcx, int srcy, vector<vector<int>> visited, string path){
  
    // base case
    if(srcx == n-1 && srcy == n-1){
        ans.push_back(path);
        return;
    }

    visited[srcx][srcy] = 1;

    //down
    int newx = srcx + 1;
    int newy = srcy ;
    if(isSafe(mat, visited, newx, newy,  n )){
        path.push_back('D');
        solve(mat,ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    //left
    newx = srcx;
    newy = srcy - 1 ;
    if(isSafe(mat, visited, newx, newy,  n )){
        path.push_back('L');
        solve(mat,ans, n, newx, newy, visited, path);
        path.pop_back();
    }
    //Right
    newx = srcx;
    newy = srcy + 1 ;
    if(isSafe(mat, visited, newx, newy,  n )){
        path.push_back('R');
        solve(mat,ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    //Up
    newx = srcx - 1;
    newy = srcy  ;
    if(isSafe(mat, visited, newx, newy,  n )){
        path.push_back('U');
        solve(mat,ans, n, newx, newy, visited, path);
        path.pop_back();
    }
 


    visited[srcx][srcy] = 0;
}


vector<string> solution(vector<vector<int>> &mat){
    vector<string> ans;
    

    int n = mat.size();
    int srcx = 0;
    int srcy = 0;

    //edge case if if element is zero
    if(mat[srcx][srcy] == 0){
        return ans;
    }

    //create visited 
    // vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<vector<int>> visited  = mat;
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            visited[i][j] = 0;
        }
    }
    string path="";
   
    solve(mat, ans, n,srcx, srcy, visited, path);
    
    return ans;
}

int main(){
    vector<vector<int>> mat = {{1, 0, 0, 0}, {0, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> sol = solution(mat);
   
    for(const string& s:sol){
        cout<<s<<endl;
    }
    
    return 0;
}