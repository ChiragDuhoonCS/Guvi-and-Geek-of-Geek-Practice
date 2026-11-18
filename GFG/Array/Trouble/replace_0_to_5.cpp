class Solution {
  public:
    int convertFive(int n) {
        // code here
        string s = to_string(n); //! to_string is a built-in function in C++ that converts a number (like an int, float, or double) into a string (text).
        int length = s.length();
        for(int i = 0; i < length; i++){
            if(s[i] == '0'){
                s[i] = '5';
            }
        }
        return stoi(s); //!It's actually stoi (without the 'c'), and it stands for String to Integer. opposite of to string
    }
};