class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = 0; 
        int wordStart = 0;  
        
        for (int i = 0; i <= sentence.size(); i++) {
           
            if (i == sentence.size() || sentence[i] == ' ') {
                index++; 
                
                if (sentence.compare(wordStart, searchWord.size(), searchWord) == 0) {
                    return index;
                }
                wordStart = i + 1;  
            }
        }
        return -1;  
    }
};
