// determine if string halves are alike
 #include<bits/stdc++.h>
 using namespace std;
 bool halvesAreAlike(string s) {

        unordered_set<char> mpp
            {'a','e','i','o','u','A','E','I','O','U'};
        int left =0;
        int right = s.length()-1;
        int vowel =0;

        while(left<right){
            if(mpp.count(s[left])){
                vowel++;
            }
            if(mpp.count(s[right])){
                vowel--;
            }
            left++;
            right--;
        }
        return vowel == 0;
 }