class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int minLen = INT_MAX;
        for(const string& s : strs) {
            if(s.empty()) return "";
            minLen = min(minLen, static_cast<int>(s.length()));
        }

        string result = "";
        for(int i = 0; i < minLen; ++i) {
            char commonChar = strs[0][i];
            for(const string & s: strs) {
                if(s[i] != commonChar) {
                    return result;
                }
            }

            result += commonChar;

        }

        return result;

    }

    int main() {
        // Example Usage
        vector<string> strs1 = {"flower", "flow", "flight"};
        cout << "Longest Common Prefix for strs1 : " << longestCommonPrefix(strs1) << endl;

        vector<string> strs2 = {"dog", "racecar", "car"};
        cout << "Longest Common Prefix for strs2 : " << longestCommonPrefix(strs2) << endl;

        return 0;
    }
};