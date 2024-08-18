// Find maximum Number of String Pairs

// class Solution{
// public:
//         int maximumNumberofStringsPairs(vector<string>&arr){
//             int n=arr.size();
//             int count=0;
//             for(int i=0;i<n-1;i++){
//                 string rev=arr[i];
//                 reverse(rev.begin(),rev.end());
//                 for(int j=i+1;j<n;j++){
//                     if(rev==arr[j])  count++;
//                 }
//             }
//             return count;}
//         };

// T.C=O(n2)

By set method 

class Solution{
    public:
    int max(vector<string>&arr){
        int n=arr.size();
        int count=0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev) continue;
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(arr[i]);
            }
        }
        return count;
    }
}

Third method 

class Solution{
    public:
    int max(vector<string>&arrr){
        int n=arr.size();
        int count=0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()) count++;
            else s.insert(arr[i]);
        }
        return count;
    }
  
};