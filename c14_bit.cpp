#include <iostream>
using namespace std;

//in bits indexing starts from right
//<< is left shift operator 0001<<2 to 0100.

int getbit(int n,int pos){
    //get bit: to get a bit at any position i
    if(n&(1<<pos)==0){return 0;}
    else if(n&(1<<pos)!=0){return 1;}
}

int setbit(int n,int pos){
    //sets that position's bit to 1
    return (n|(1<<pos));
}

int clearbit(int n,int pos){
    //sets that positoion's bit to 0.
    return (n&(~(1<<pos)));
}

int updatebit(int n,int pos, int value){
    int mask = ~(1<<pos);
    n = n&mask;
    return(n|(value<<pos));
}

bool checkpower2(int n){
    //return true ? (n && (n&n-1)==0) : false;
    //this n&& for 0,as for it n-1 wouldn't be possible.
    //eg: n=1000 n-1: 0111, this would be pattern in every case, of power 2.
    return (n && !(n&(n-1)));
}

//get more info whenever got a chance...
int numberofones(int n){
    int count =0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    return count;
}

void subsets(int arr[],int n){
    for(int i=0; i<(1<<n);i++){ //(1<<n) refers to 2^n
    //to print all 2^n subsets.
        for(int j=0;j<n;j++){
            //to check for 1 in n-sized number on all places.(n-sized as till 2^n numbers, n-sized binary pattern would form.)
            if(i&(1<<j)){
                //to check whether 1 is on the place, if yes then true(1) and print that number, else (0)false.
                cout<<arr[j]<<" ";
            }
        } cout<<endl;
    }
}

//get more info whenever got a chance...
int uniquenuminarr(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    //0^num=num

    return xorsum;
}

int main(){
cout<<getbit(5,2)<<endl;
cout<<setbit(6,3)<<endl;
cout<<clearbit(5,2)<<endl;
cout<<updatebit(6,3,1)<<endl;
cout<<checkpower2(512)<<endl;
cout<<numberofones(6)<<endl;
int arr[3] = {1,2,3};
subsets(arr,3);
cout<<endl;
//find a unique number in an array where all numbers except one, are present twice.
int ar[7]={1,2,3,4,3,2,1};
cout<<uniquenuminarr(ar,7);
//find two unique numbers in an array, where all numbers except two are present twice.

//find the unique numeber in an array, where all numbers except one is present thrice.





return 0;}