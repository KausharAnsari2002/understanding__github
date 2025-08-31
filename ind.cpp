#include<iostream>
#include<vector>
using namespace std;

    void display(vector<int> &v){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main () {


    vector<int> v = {1,2,3,4,5,6,7,8,90};
    cout<<"hello world now printing "<<endl;

    display(v);


    cout<<"hey how are you kaiser bro "<<endl;



    int arr[] = {1,3,5,10,20,30,40,50,60,70,75};
     int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0;
    int hi = n-1;
    int target = 40;
    bool flag  = false;
    int ans = 0;

    while(lo<=hi){
        int mid = lo + (hi - lo) /2;

        if(arr[mid] == target ){
          flag  = true;
          ans = arr[mid];
          break;
        }
       else if(arr[mid] < target) lo = mid+1;
        else if(arr[mid] > target) hi = mid-1;
    }

    if(flag ) cout<<"target is found "<<ans<<endl;
    else cout<<"target is not found "<<endl;


 

 return 0;
}