class Solution {
public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        int n = grid.size();
        int m = grid[0].size();

        if (grid[source.first][source.second] == 0 || 
            grid[destination.first][destination.second] == 0)
            return -1;

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        queue<pair<int, pair<int, int>>> q;

        dist[source.first][source.second] = 0;
        q.push({0, {source.first, source.second}});

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int r = it.second.first;
            int c = it.second.second;

            if (r == destination.first && c == destination.second)
                return dis;

            for (int i = 0; i < 4; i++) {
                int newr = r + dr[i];
                int newc = c + dc[i];

                if (newr >= 0 && newr < n && newc >= 0 && newc < m &&
                    grid[newr][newc] == 1 && dis + 1 < dist[newr][newc]) {
                    
                    dist[newr][newc] = dis + 1;
                    q.push({dis + 1, {newr, newc}});
                }
            }
        }

        return -1; 
    }
};
