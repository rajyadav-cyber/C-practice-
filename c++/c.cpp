   #include<algorithm>
   #include <iostream>
   #include <vector>
using namespace std;
void bucketshot(float arr[],int n)
{
    vector<float>b[n];
    for (int i = 0; i<n; i++){
    int bi =n*arr[i];
    b[bi].push_back(arr[i]);
}

    for (int i=0; i<n; i++)
     sort(b[i].begin(),b[i].end());
int index =0;
for (int i=0; i<n; i++)
for (int j =0; j<b[i].size(); j++)
arr[index++]=b[i][j];
}
 
 int main()
 {
    float arr[]
         = { 0.858,0.453,0.644,0.876,0.863,0.984}
         int n = sizeof(arr[0]);
         bucketsort(arr,n);

         count<<"sorted array is \n";
         for (int i=0; i<n; i++)
         count<< arr{i}<<"";
         return 0;
 }
 