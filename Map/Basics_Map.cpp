// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>m;

//     pair<string,int>p1;//Pair is for i have taken two datatype which is string and int.
//     p1.first="raghav";//String
//     p1.second=76;//Integer

//     pair<string,int>p2;
//     p2.first="Kishan";
//     p2.second=20;

//     pair<string,int>p3;
//     p3.first="Kl Rahul";
//     p3.second=45;

//     m.insert(p1);
//     m.insert(p2);
//     m.insert(p3);

//     // for(pair<string,int>z:m){//m is for inordered map
//     for(auto z:m){
//         cout<<z.first<<" "<<z.second<<endl;
//         // Instead of int and string we can write auto it
//          //recognise that which elements are actually talking.
//     }
// }










// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     pair<string,char>p;//This is pairing for string and character.
//     p.first="Kishan";
//     p.second='M';
//     cout<<p.first<<" "<<p.second;

// }


//   Another Method

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;

    pair<string,int>p1;

    // p1.first="Raghav";
    // p1.second=89;
    // m.insert(p1);

     m["kishan"]=15;  // This is always  better
     m["Ram"]=90;
    for(auto z:m){
    cout<<z.first<<" "<<z.second<<endl; 
         
    }
     cout<<m.size()<<endl<<endl;
     m.erase("kishan");// I am erasing kishan
     for(auto z:m){//After deleting kishan i am printing 
        cout<<z.first<<" "<<z.second<<endl;
        cout<<m.size()<<endl;
        cout<<m["Ram"];
     }
}


// Syntax for finding character in map

// if(map2.find(ch)!=map2.end())