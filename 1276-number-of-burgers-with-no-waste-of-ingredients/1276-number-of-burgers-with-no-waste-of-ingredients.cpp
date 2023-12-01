
class Solution {
public:
    std::vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int jCount = 0, // x
            sCount = 0; // y

        // 4x + 2y = tomatoSlices
        // x + y = cheeseSlices

        if ((4 * cheeseSlices - tomatoSlices) < 0 || (4 * cheeseSlices - tomatoSlices) % 2 != 0) {
            return {};
        }

        sCount = (4 * cheeseSlices - tomatoSlices) / 2;
        jCount = cheeseSlices - sCount;

        return jCount >= 0 ? std::vector<int>{jCount, sCount} : std::vector<int>{};
    }
};