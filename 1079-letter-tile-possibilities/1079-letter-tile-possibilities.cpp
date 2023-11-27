class Solution {
public:
    int numTilePossibilities(std::string tiles) {
        unordered_set<string> result;
        string current;
        vector<bool> visited(tiles.size(), false);

        generatePossibilities(tiles, current, visited, result);

        return result.size();
    }

private:
    void generatePossibilities(const string& tiles, string& current, vector<bool>& visited, unordered_set<string>& result) {
        if (!current.empty()) {
            result.insert(current);
        }

        for (int i = 0; i < tiles.size(); ++i) {
            if (!visited[i]) {
                visited[i] = true;
                current.push_back(tiles[i]);
                generatePossibilities(tiles, current, visited, result);
                current.pop_back();
                visited[i] = false;
            }
        }
    }
};