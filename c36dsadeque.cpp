#include "bits/stdc++.h"
// #include <deque>
using namespace std;
/*
Using Stacks:LIFO and queues:FIFO,
we can make double ended queue, deque,
It can:
1. Push and Pop from the end.
2. Insert and delete from the start.
Header File <deque>
*/
int32_t main(){
    deque<int> d;
    d.push_front(3);
    d.push_back(4);
    d.push_front(2);
    d.push_front(1);
    for(auto i: d){
        cout<<i<<" ";
    }cout<<"\n";
    d.pop_back();
    cout<<d.back()<<endl<<d.size();
    cout<<endl;
/*Sliding Window Maximum:
    arr[]={1,2,3,-5,3,7,8}
    if k=3, {3,3,3,7,8};
    eg: {1,2,3} greatest number=3;
    {2,3,-5} greatest number=3;*/
    //Time Complexity: O(nlogn)
    //Check this code whenever got chance...
    int n=8;//Array size
    int k=3;//Window size
    int p=9;
    vector<int> a(n); //Stores all elements
    for(auto &i: a){
        i=p;
        p--;
    }
    a.pop_back();
    a.push_back(100);

    //Method-1
    // multiset<int,greater<int>> s;
    // //by greater at top always greater element stays
    // vector<int> ans;
    // for(int i=0;i<k;i++){
    //     s.insert(a[i]);
    // }
    // ans.push_back(*s.begin());
    // for(int i=k;i<n;i++){
    //     s.erase(s.lower_bound(a[i-k]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());
    // }
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }cout<<endl;

//Method-2
    //Time Complexity: O(N)
    // deque<int> q;
    // vector<int> ans;
    // for(int i=0;i<k;i++){
    //     while(!q.empty() && a[q.back()]<a[i]){
    //         q.pop_back();
    //     }
    //     q.push_back(i);
    // }
    // ans.push_back(nums[q.front()]);
    // for(int i=k;i<n;i++){
    //     if(q.front()==i-k){
    //         q.pop_front();
    //     }
    //     while(!q.empty() and a[q.back()]<a[i]){
    //         q.pop_back();
    //     }
    //     q.push_back(i);
    //     ans.push_back(a[q.front()]);
    // }
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }

return 0;}