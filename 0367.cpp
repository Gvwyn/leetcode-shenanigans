// 367. Valid Perfect Square
// ~O(1), 0ms

class Solution {
public:
    bool isPerfectSquare(int num) {
        int root = static_cast<int>(sqrt(num));
        return root*root == num;
    }
};
