#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<vector<int> > comp(100, vector<int>(26, 0));
        vector<string> rst;

        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0; j < A[i].length(); j++)
            {
                comp[i][A[i][j] - 'a']++;
            }
        }

        return rst;
    }
};

