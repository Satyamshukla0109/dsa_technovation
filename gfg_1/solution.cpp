class Solution {
  public:
    string encode(vector<string>& arr) {
        string encoded = "";
        for (int i = 0; i < arr.size(); i++) {
            encoded += to_string(arr[i].length()) + "#" + arr[i];
        }
        return encoded;
    }

    vector<string> decode(string& s) {
        vector<string> decoded;
        int i = 0;
        int n = s.length();

        while (i < n) {
            int len = 0;
            while (i < n && s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++; 

            decoded.push_back(s.substr(i, len));
            i += len;
        }

        return decoded;
    }
};