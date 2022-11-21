#include <set>
#include <iostream>
using namespace std;
int main(){
#define print cout
//basic set functions and shit
set<int> s;
s.insert(5);
s.insert(10);
int i = 4;
while(i<10){
s.insert(i);
i++;
}

print<<s.count(4);
s.erase(10);
for(auto x: s){
print<<x<<endl;
}
}
