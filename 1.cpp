#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> fck;

    fck.push(5);
    fck.push(8);
    fck.push(10);
    cout <<"size "<<fck.size()<<endl;


    if (!fck.empty()){
        cout<<"fck is not empty"<<endl;
    }
    return 0;
}