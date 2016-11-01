class Solution {
public:
    string convert(string s, int numRows) {
        int s_size = static_cast<int>(s.size());
        if (numRows ==1 || numRows >= s_size) 
            return s;
        string new_string;
        new_string.resize(s_size);
        int index = 0;
        int step = 2*numRows-2;
        bool flag = true;
        int new_index = 0;
        for (int i = 0; i < numRows; ++i){
            index = i;
            flag = true;
            int step_i = step - 2 * i;
            while (index < s_size) {
                new_string[new_index++] = s[index];
                if (i == 0 || i == numRows - 1) {
                    index += step;
                } else {
                    //index += flag ? step_i : (step - step_i);
                    if (flag) {
                        index += step_i;
                    } else {
                        index += (step - step_i);
                    }
                }
                flag = !flag;
            }
        }
        return new_string;
    }
};
