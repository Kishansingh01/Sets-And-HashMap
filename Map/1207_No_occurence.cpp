// we have to find that if a numer is repeating again and if another number is also repeating the same frequency
//  then cout true or if not then cout no.

class Solution{
    public:
    bool uniqueOccurence(vector<int>& arr){
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto x:m){
            int freq=x.second;
            if(s.find(freq)!=s.end()) return false;// if i got this condition says opposite
            else s.insert(freq);
        }
        return true;
    }
};


