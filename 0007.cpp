// 7. Reverse Integer
// O( log10(|x|) ), 0 ms

class Solution {
public:
    int reverse(int x) {
        int solution = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            if (solution > INT_MAX/10 || solution < INT_MIN/10) return 0;
            solution = solution * 10 + digit;
        }
        return solution;
    }
};