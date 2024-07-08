#include<iostream>
using namespace std;

int main(){
   int n = 4;
   int arr[5] = {n};
   for(int i = 0;i<5;i++){
          if(i == 4)
              break;
          if(i==2)
              continue;
        cout<<arr[i]<<" ";
   }
}
