/*

You are given an m x n integer array grid where grid[i][j] could be:

* 1 representing the starting square. There is exactly one starting square.
* 2 representing the ending square. There is exactly one ending square.
* 0 representing empty squares we can walk over.
* -1 representing obstacles that we cannot walk over.

Return the number of 4-directional walks from the starting square to the ending square, that walk over every non-obstacle square exactly once.

*/

class Solution
{
public:
    int solve(vector<vector<int> > &grid, int r, int c, int m, int n, int ct)
    {

        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == -1)
            return 0;

        if (grid[r][c] == 2)
        {
            if (ct == 0)
                return 1;
            else
                return 0;
        }

        grid[r][c] = -1;
        ct--;

        int ans = solve(grid, r + 1, c, m, n, ct) + solve(grid, r - 1, c, m, n, ct) + solve(grid, r, c + 1, m, n, ct) + solve(grid, r, c - 1, m, n, ct);

        grid[r][c] = 0;
        ct++;

        return ans;
    }

    int uniquePathsIII(vector<vector<int> > &grid)
    {
        int r, c, m = grid[0].size(), n = grid.size(), ct = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    r = i;
                    c = j;
                }
                if (grid[i][j] == 0)
                    ct++;
            }
        }
        return solve(grid, r, c, m, n, ct);
    }
};