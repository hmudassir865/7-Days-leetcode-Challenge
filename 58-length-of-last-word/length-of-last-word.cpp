class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundLastWord = false;

        // Traverst the String from the end of beginning
        for(int i = s.length() -1; i >= 0; --i) {
            // Ignore trailing spaces until we found the last word
            if(!foundLastWord && s[i] == ' ') {
                continue;
            } else {
                foundLastWord = true;
            }

            // Count Character of the Last Word
            if(foundLastWord && s[i] != ' ') {
                length++;
            } else {
                break;
            }
        }

        return length;

    }

    int main() {
        // Test Example
        string s1 = "Hello World";
        cout << "Length of the last word in \"" << s1 << "\" : " << lengthOfLastWord(s1) << endl;

        string s2 = "fly me to the moon";
        cout << "Length of the Last word in \"" << s2 << "\" : " << lengthOfLastWord(s2) << endl;

        string s3 = "luffy is still joy boy";
        cout << "Length of the Last Word in \"" << s3 << "\" : " << lengthOfLastWord(s3) << endl;

        return 0;
    }
};