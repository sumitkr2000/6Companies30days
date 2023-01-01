class Solution {
public:
    string getHint(string secret, string guess) {
        
        vector<int> v1(10, 0), v2(10, 0);
        int b = 0, c = 0;
        
        for(int i = 0; i < guess.size(); i++) {
            if(secret[i] == guess[i]) {
                b++;
            }
            else {
                v1[secret[i]-'0']++;
                v2[guess[i]-'0']++;
            }
        }
        
        for(int i = 0; i < 10; i++) {
            if(v1[i] != 0 && v2[i] != 0) {
                c += min(v1[i], v2[i]);
            }
        }   
        return to_string(b) + "A" + to_string(c) + "B";
    }
};
