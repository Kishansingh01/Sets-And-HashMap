// Insertion,Searching,Deletion=>   T.C=> O(1)
// set only stores a unique elements.

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(100);
    s.insert(2);
    s.insert(12);
    s.insert(76);
    s.insert(78);
    s.insert(78);

    s.erase(78);//It will delete 100

    int target=76;
    // s.find()->it search in the set, and if 
    // it is not found then it returns the last element
    if(s.find(target)!=s.end()){
        cout<<"Element is present in the set"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }

    cout<<s.size()<<endl;//size of set
    for(int ele:s){
        cout<<ele<<" ";// in sets it will print random.
    }
    
}
// All operations are O(1) Time complexity.