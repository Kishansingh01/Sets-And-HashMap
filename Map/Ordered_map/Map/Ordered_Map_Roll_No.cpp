
 #include<iostream>
   #include<set>
   #include<map>
   using namespace std;
   int main(){
    map<string,int>m; 
    m["Kishan"]=20;
    m["cmrita"]=10;    //  Sorting also work in ordered map in Keywise not valuewise.
    m["lumar"]=30;  
    m["Amrit"]=10; 
    m["bmrit"]=10;  // Order will be in keywise 1,2,3.
    for(auto x:m){
       // cout<<x.first<<" "<<endl;
       cout<<x.second<<""<<endl;
    }
   }

  //  But in stringwise they are not being sorted 



  // Some questions in leetecode.

  1814.  Count Nice pairs in an array 
  2094. Finding three digits even numbers
  Top view of binary tree 
