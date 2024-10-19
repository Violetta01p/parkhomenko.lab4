#include <iostream> 
using namespace std;
int main(){
int arr [15]={1,5,0,8,7,12,9,18,0,32,0,41,1,3,3};
for(int i=0; i<15; i++){
if(arr[i]==0){
continue;
}
cout<<arr[i]<< “ “; 
}
return 0;
}
