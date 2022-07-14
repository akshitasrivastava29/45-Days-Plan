class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
      unordered_map<int, vector<int>> adjList;
        unordered_set<int> visited;
        queue<pair<int,int>> stops;
        
        // Build our adjacency list of stops to buses.
        for (int bus = 0; bus < routes.size(); bus++) {
            vector<int> curRoute = routes[bus];
            for (int stop : curRoute) {
                adjList[stop].push_back(bus);
            }
        }
        
        // Seed our queue.
        stops.push({source, 0});
    
        while (!stops.empty()) {
            int curStop = stops.front().first;
            int bus = stops.front().second;
            stops.pop();
                    
            if (curStop == target)
                return bus;
            
            vector<int> buses = adjList[curStop];
            
            // Checks over all of the buses that this stop can reach.
            for (int i = 0; i < buses.size(); i++) {
                int curBus = buses[i];
                // Loop over all of the routes that we have for this each bus.
                for (int j = 0; j < routes[curBus].size(); j++) {
                    if (visited.find(routes[curBus][j]) == visited.end()) {
                        visited.insert(routes[curBus][j]);
                        stops.push({routes[curBus][j], bus + 1});
                    }
                }
                // This is important - we've already processed all of the routes this bus can take, so remove them to prevent duplicate processing.
                routes[curBus].clear();
            }
        }
        return -1;
    }
};