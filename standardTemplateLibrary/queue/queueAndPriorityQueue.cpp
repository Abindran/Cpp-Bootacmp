#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    queue<int> myq;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(15);

    cout<<myq.front()<<endl;
    cout<<myq.back()<<endl;
    myq.pop();
    cout<<myq.front()<<endl;

    //iterating in the queue
    while(!(myq.empty())){
        cout<<myq.front()<<" ";
        myq.pop(); // traversal will result in emptying the queue
    }
    cout<<endl;
    cout<<"Outside"<<endl;
    cout<<myq.front()<<endl;

    //priority queue
    priority_queue<int> mypq;
    mypq.push(10);
    mypq.push(20);
    mypq.push(50);
    mypq.push(5);

    while(!(mypq.empty())){
        cout<<mypq.top()<<" "; //front() will not work so we need to use top()
        mypq.pop(); // traversal will result in emptying the queue
    }
    cout<<endl;


}