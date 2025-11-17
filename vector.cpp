#include<iostream>
#include<vector>

using namespace std;
int main() {

vector<int> vec(3,10);

for(int i:vec){
    cout<<i;
}



return 0;
}