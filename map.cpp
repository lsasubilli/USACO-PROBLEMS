#include <iostream>
#include <map>
using namespace std;
int main(){
#define print cout
//time complexity -> O(log n)
map<string,int> gradeAge;
//example
gradeAge["eight"] = 8;
gradeAge["nine"] = 9;
print<<gradeAge["nine"];
//if  a key's request doesn't have a map, then it returns 0, (default value)
int count = 0;
if(gradeAge.count("eight")){
	count++;
}else{
	count--;
}
print<<count<<endl;
//other methods
vector<int>v(10);
for(int i=0;i<v.size();i++){
	v[i] = rand()%10+1;
}
sort(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
reverse(v.begin(),v.end());
return 0;
}
