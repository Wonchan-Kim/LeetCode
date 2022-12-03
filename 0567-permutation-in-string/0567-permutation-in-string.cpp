
class Solution {
private:
    bool is_equal(int a[],int b[]){
        for(int i=0;i<26;i++)
            if(a[i]!=b[i]) return 0;
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int cnt1[26]={0};    // for string s1
        for(int i=0;i<s1.size();i++)
            cnt1[s1[i]-'a']++;      // mapping s1 elements with count1 array
        
        // now traverse s2 in window size of s1.size() and compare
        int cnt2[26]={0};    // for string s2-> window
        int windowsize=s1.size();
        // checking for 1st window
        int i=0;
        int j = 0;
        while(j < s2.size()){
            cnt2[s2[j] - 'a']++;
            
            if(j - i + 1 == s1.size() && is_equal(cnt1, cnt2)) return true;
            
            if(j - i + 1 < s1.size()) j++;
            else{
                cnt2[s2[i] - 'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};