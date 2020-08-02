class Solution {
public:
    bool detectCapitalUse(string word) {
      int n = word.length();
        if(n == 1){                                 
            return true;
        }
        int caps = 0;
        for(int i=0;i<n;i++){
            if(word[i] <= 90){                   
                caps++;
            }
        }
        if(caps == n || caps == 0){
            return true;
        }
        else if(caps == 1 && word[0] <= 90){
            return true;
        }
        return false;  
    }
};
