#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int s=0,e=n-1,mid=0;
   while(mid<=e)
   {
      if(arr[mid]==0)
      {
         swap(arr[mid],arr[s]);
         s++;
         mid++;
      }
      else if(arr[mid]==1)
      {
         mid++;
      }
      else{
         swap(arr[e],arr[mid]);
         e--;
      }
   }
}
