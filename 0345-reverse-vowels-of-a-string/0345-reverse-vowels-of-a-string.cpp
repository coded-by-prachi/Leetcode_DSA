class Solution {
public:
    bool isVowel(char ch){
        ch= tolower(ch);
        return ch == 'a' ||ch== 'e'|| ch== 'i'|| ch == 'o'
        || ch == 'u';
    } 
    string reverseVowels(string s) {
        int st = 0;
        int e = s.length() - 1;
        while(st < e){
            while(st < e && !isVowel(s[st])){
                st++;
            }
            while(st < e && !isVowel(s[e]) ){
                 e--;
            }
            swap(s[st], s[e]);
            st++;
            e--;
        }    
        return s;
        
    }
};