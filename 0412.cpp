// 412. FizzBuzz
// O(n), 2ms

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> answer;
        answer.reserve(n); // reserving space saves roughly 2 milliseconds here
        for(int x = 1; x <= n; x++) {
            if (x % 15 == 0) { answer.push_back("FizzBuzz"); }
            else if (x % 3 == 0) { answer.push_back("Fizz"); }
            else if (x % 5 == 0) { answer.push_back("Buzz"); }
            else { answer.push_back(std::to_string(x)); }
        }
        return answer;
    }
};
