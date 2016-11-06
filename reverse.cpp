class Solution {
public:
    int reverse(int x) {
        bool positive  = true;
        if (x < 0) {
            positive = false;
            x *= -1;
        }
        int temp = 0;
        while (x > 0) {
            int y = x % 10;
            if (temp > INT_MAX/10 ||  10*temp > INT_MAX - y) return 0;
            x = x / 10;
            temp = temp * 10 + y;
        }
        return positive ? temp : temp * (-1);
        
    }
};
