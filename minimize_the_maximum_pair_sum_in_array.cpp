




public static int findAnnouncementNodes(int n, int m, int canBeHeardFrom[], int loudness, int[][] edges) {
        // Create adjacency list to represent the tree
        List<Integer>[] adjList = new List[n+1];
        for (int i = 1; i <= n; i++) {
            adjList[i] = new ArrayList<>();
        }
        for (int[] edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].add(v);
            adjList[v].add(u);
        }
        
        // Perform BFS from each of the m nodes that can be heard from
        boolean[] visited = new boolean[n+1];
        for (int startNode : canBeHeardFrom) {
            Queue<Integer> queue = new LinkedList<>();
            queue.add(startNode);
            visited[startNode] = true;
            int depth = 0;
            while (!queue.isEmpty() && depth < loudness) {
                int size = queue.size();
                for (int i = 0; i < size; i++) {
                    int curr = queue.poll();
                    for (int neighbor : adjList[curr]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            queue.add(neighbor);
                        }
                    }
                }
                depth++;
            }
        }
        
        // Count the number of nodes that have been marked at least once
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (visited[i]) {
                count++;
            }
        }
        
        return count;
    }



    def count_min_sum(n, k):
    if (k * (k + 1) // 2) < n:
        return -1
    dp = [[0 for j in range(n+1)] for i in range(k+1)]
    
    for i in range(1, k+1):
        for j in range(1, n+1):
            if i == 1:
                if j <= k:
                    dp[i][j] = 1
            else:
                dp[i][j] = dp[i-1][j] + dp[i][j-i]
    
    return dp[k][n]
    if dp[k][n] == 0:
        return -1
    return dp[k][n]