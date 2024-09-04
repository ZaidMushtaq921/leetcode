class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // Direction is initially horizontal and positive
        pair<char, char> dir = {'v', '+'};
        // Robot's current position
        pair<int, int> dirValue = {0, 0};
        // Obstacle map to quickly check if a position is blocked
        unordered_map<int, unordered_map<int, bool>> obstacle_map;
        // Maximum distance squared from the origin
        int maxi = 0;

        // Fill the obstacle map
        for (auto& obs : obstacles) {
            obstacle_map[obs[0]][obs[1]] = true;
        }

        // Iterate over the commands
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == -1) {
                // Turn right
                if (dir.first == 'h') {
                    dir.first = 'v';
                    dir.second = (dir.second == '+') ? '-' : '+';
                } else {
                    dir.first = 'h';
                    dir.second = (dir.second == '+') ? '+' : '-';
                }
            } else if (commands[i] == -2) {
                // Turn left
                if (dir.first == 'h') {
                    dir.first = 'v';
                    dir.second = (dir.second == '+') ? '+' : '-';
                } else {
                    dir.first = 'h';
                    dir.second = (dir.second == '+') ? '-' : '+';
                }
            } else {
                // Move forward in the current direction
                int d = commands[i];
                while (d > 0) {
                    // Store previous position
                    pair<int, int> prevdirValue = dirValue;

                    if (dir.first == 'h') {
                        dirValue.first += (dir.second == '+') ? 1 : -1;
                    } else {
                        dirValue.second += (dir.second == '+') ? 1 : -1;
                    }

                    // Check for obstacle
                    if (obstacle_map[dirValue.first][dirValue.second]) {
                        dirValue = prevdirValue;  // Revert to previous position
                        break;  // Stop moving in this direction
                    }

                    // Update maximum distance squared
                    maxi = max(maxi, dirValue.first * dirValue.first + dirValue.second * dirValue.second);

                    d--;
                }
            }
        }
        return maxi;
    }
};
