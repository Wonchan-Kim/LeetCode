
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
        while( i<windowsize && i<s2.size() ) // i<s2.size() -> taki i,s2 ki length se aage na nikal jae ; window s2 ki length se aage na nikal jae ; s1.size()>s2.size()
        {
            cnt2[s2[i]-'a']++;
            i++;
        }
        if( is_equal(cnt1,cnt2) ) 
            return 1;   // permutation present
        
        // for next windows
        while( i<s2.length() ){
            int add = s2[i]-'a';
            cnt2[add]++;
            int remove = s2[i-windowsize]-'a';
            cnt2[remove]--;
            if( is_equal(cnt1,cnt2) )  return 1;
            i++;
        }
        return 0;  // s2 ki size tak traversed but can't find
//we r comparing 1st window seperately as at time of first window we can't delete (i-windowsize)th element
    }
};