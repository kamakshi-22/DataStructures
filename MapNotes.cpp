#include <bits-stdc++.h>
using namespace std;

int main()
{

/* Map: stores (key,value) 
    •key is unique •value can be overwritten
    •Ordered Map:>>Balanced BST >>Keys in sorted order >> T.C - O(logn)
    •Unordered Map:>>Implementated using Hashing >>any order of keys >>T.C - O(1)

    Multi-Map: •can have duplicate keys •type: ordered & unordered
*/

map<int,int> m;
unordered_map<int,int> m1;
 
//insertion
m.insert({10,6});
m[10] = 6; //can also insert like this
 
//printing
for(auto it = m.begin(); it!= m.end(); it++)
cout<<it->first<<" "<<(*it).second<<endl;

//find
if(m.find(10)!=m.end())
cout<<m[10]<<m.find(10)->second<<endl; //both return 6

//deletion


    return 0;
}