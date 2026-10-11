#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> blyat;

    blyat.push(2);
    blyat.push(4);
    blyat.push(6);
    blyat.push(8);
    cout<<"front "<<blyat.front()<<endl;
    cout<<"back "<<blyat.back()<<endl;

    return 0;
}