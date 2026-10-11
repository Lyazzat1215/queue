#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> fck;
    cout <<"size "<<fck.size()<<endl;

    fck.push(5);
    fck.push(8);
    fck.push(10);
    cout <<"size "<<fck.size()<<endl;


    if (fck.empty()){
        cout<<"fck is emty"<<endl;
    }
    return 0;
}