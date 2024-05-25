#include <bits/stdc++.h>
using namespace std;

struct Item(int weight, int profit){
//constructor
int weight;
int profit;

    Item(weight,profit){
        this->profit=profit;
        this->weight=weight;
    }

};

static bool comp(Item a, Item b){
    double r1=(double)a.profit/(double)a.weight;
    double r2=(double)a.profit/(double)a.weight;

    return r1>r2;
}

double mochila(int W, struct Item arr[], int N){
    double finalvalue=0.0;

    for(int i=0;i<N;i++){
        if(arr[i].weight<=W){
            W-=arr[i].weight;
            finalvalue+=arr[i].profit;
        } else{
            finalvalue+=(arr[i].profit)*((double)W*(double)arr[i].weight);
            break;
        }
    }
    return finalvalue;
}




int main(){
    int W=50;
    int N=3;

    Item arr[]={{100,20},{40,60},{80,10}}
    cout << mochila(W,arr,N);


    return 0;
}
