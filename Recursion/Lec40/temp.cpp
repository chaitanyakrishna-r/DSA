#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(vector<vector<int>> &mat, vector<vector<int>> &visited, int x, int y, int n) {
    // Ensure x and y are within bounds, cell is not visited, and cell is 1
    if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && mat[x][y] == 1) {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> &mat, vector<string> &ans, int n, int srcx, int srcy, vector<vector<int>> &visited, string path) {
    // Base case: If destination (n-1, n-1) is reached, add path to the answer
    if (srcx == n - 1 && srcy == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark current cell as visited
    visited[srcx][srcy] = 1;

    // Move Down
    int newx = srcx + 1;
    int newy = srcy;
    if (isSafe(mat, visited, newx, newy, n)) {
        path.push_back('D');
        solve(mat, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Left
    newx = srcx;
    newy = srcy - 1;
    if (isSafe(mat, visited, newx, newy, n)) {
        path.push_back('L');
        solve(mat, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Right
    newx = srcx;
    newy = srcy + 1;
    if (isSafe(mat, visited, newx, newy, n)) {
        path.push_back('R');
        solve(mat, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Up
    newx = srcx - 1;
    newy = srcy;
    if (isSafe(mat, visited, newx, newy, n)) {
        path.push_back('U');
        solve(mat, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    // Backtrack: Mark the current cell as unvisited
    visited[srcx][srcy] = 0;
}

vector<string> solution(vector<vector<int>> &mat) {
    vector<string> ans;

    int n = mat.size();
    int srcx = 0;
    int srcy = 0;

    // Edge case: If the starting cell is 0, no path is possible
    if (mat[srcx][srcy] == 0) {
        return ans;
    }

    // Create visited matrix
    vector<vector<int>> visited(n, vector<int>(n, 0));
    string path = "";

    // Start solving from the source (0, 0)
    solve(mat, ans, n, srcx, srcy, visited, path);

    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> sol = solution(mat);

    for (const string &s : sol) {
        cout << s << endl;
    }

    return 0;
}
