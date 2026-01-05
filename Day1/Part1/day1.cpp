#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
 
    ifstream file("input.txt");
 
    if (!file) {
        cout << "File not opened";
        return 0;
    }
 
    string line;
    int curr=50;
    int cnt=0;
    while (getline(file, line)) {
        char ch = line[0];
        long long num = stoll(line.substr(1));
        num=num%100;
       
 
        if(ch == 'R'){
            curr+=num;
        }
        else{
            curr-=num;
            curr=100+curr;
 
        }
        curr=curr%100;
        //cout<<curr<<endl;
 
        if(curr==0){
            cnt++;
        }
       
    }
    cout<<cnt;
   
 
    file.close();
   
}
 
