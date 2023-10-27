#include <iostream>
using namespace std;



int main(){

   cout<<"Enter size of Array";
int s;
cin>>s;
int arr[s];
cout<<"enter array element one by one";
for(int i = 0; i< s; i++){
   cin>>arr[i];
}

int counter = 1;
   for(int i = 0; i< s-1; i++){
      for(int j = 0; j<= s-1-counter; j++){
         if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
         }

      }  
      counter++;
   }
cout<<" "<<endl;

for(int i = 0; i < s; i++){
   cout<<arr[i]<<" ";
}




   return 0;
}