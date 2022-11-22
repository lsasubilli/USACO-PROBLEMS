#include <iostream>
	//time complexity of O(n^2)

#include <vector>
using namespace std;
class MyClass{
public:
int  BinarySearch(int arr[],int  target){
	int size = sizeof(arr)/sizeof(arr[0]);
	int low = 0, high = size-1;
	int mid = (low+high)/2;
	while(low<=high){
	if(target==arr[mid]){
	return target;
	}
else if(target>arr[mid]){
	low = mid + 1;
	}
else{
	high = mid - 1;
	}
	}
return -1;
	}
};


int main() {
int array[] = {1,2,3,5,6,23};


MyClass obj;
	
	//time complexity of O(n^2)

cout<<obj.BinarySearch(array, 6)<<endl;


return 0;
}
