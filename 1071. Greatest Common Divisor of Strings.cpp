class Solution {// we will get the same string after the addition of string if the add are same thenn we are good to go,
// we have to find the common string with which str1 and str2 are made up of
public:
    string gcdOfStrings(string str1, string str2) {
        int a = str1.size();
        int b = str2.size();
        if(str1+str2 != str2+str1){
            return "";
        }
        return str1.substr(0,gcd(a,b));
        
    }
};
