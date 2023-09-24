#include "LengthOfLongestSubstring.hpp"

#include <iostream>
#include <map>

using namespace std;


int LengthOfLongestSubstring::lengthOfLongestSubstring(string s){
    
    if (s.length() == 0){
        return 0;
    }
    
    int maxLength = 0;
    int currentCount = 0;
    map<char, int> m;
    int pos = 0;
    int beginPos = 0;
    
    for (char c: s){
        if (m.find(c) == m.end()){
            currentCount += 1;
        }
        else{
            if (m[c] >= beginPos){
                maxLength = maxLength > currentCount ? maxLength : currentCount;
                currentCount = pos - m[c];
                beginPos = m[c];
            }
            else{
                currentCount += 1;
            }
        }
        
        m[c] = pos; 
        pos += 1;
    }
    
    maxLength = maxLength > currentCount ? maxLength : currentCount;
    
    cout << maxLength << endl;
    
    return maxLength;
}



