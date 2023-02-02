class Solution {
public:
    bool samanta(string &me,string &her,string &order){
        int i=0;
        while(i<me.size() && me[i]==her[i]) i++;
        if(me.size()==i) return true;
        else if(her.size()==i) return false;
        return (order.find(me[i])<order.find(her[i]));
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<words.size()-1;i++){
            if(!samanta(words[i],words[i+1],order)) return false;
        }
        return true;
        
    }
};
