#include <iostream>
using namespace std;



int main(){
cout<<"Enter size of Array";
int s;
cin>>s;
int arr[5];
cout<<"enter array element one by one";
for(int i = 0; i< s; i++){
   cin>>arr[i];
}

for(int i = 0; i<s-1; i++){
   for(int j = i+1; j < s; j++){
      if(arr[j]<arr[i]){
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
}

for(int i = 0; i < s; i++){
   cout<<arr[i]<<" ";
}






return 0;
}