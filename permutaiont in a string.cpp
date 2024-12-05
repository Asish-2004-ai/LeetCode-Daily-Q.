class Solution {
public:

    bool equal(int a[26],int b[26]){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
        int arr1[26] = {0};

        for(int i=0; i<s1.length(); i++){
            int index = s1[i]-'a';
            arr1[index]++;
        }

        int i=0;
        int arr2[26]={0};
        int size = s1.length();

        for(; i < size && i < s2.length(); i++){
            int index = s2[i] - 'a';
            arr2[index]++;
        }

        if(equal(arr1, arr2))
        return 1;

        for(; i<s2.length(); i++){
            int index = s2[i]-'a';
            arr2[index]++;
            int old = s2[i-size];
            index=old-'a';
            arr2[index]--;
            if(equal(arr1, arr2))
            return 1;
        }
        return 0;
    }
};