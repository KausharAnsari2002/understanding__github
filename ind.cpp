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
    






 return 0;
}