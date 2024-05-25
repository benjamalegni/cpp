#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[],int l, int m ,int h){
    int n1=m-l+1;
    int n2=h-m;

    int a[n1];
    int b[n2];
    //temporarary arrays
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[m+1+j];
    }

    //indexes
    int i=0;
    int j=0;
    int k=l;


    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        } else{
            arr[k]=b[j];
            k++;j++;
        }

    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
}

void mergeSort(int arr[],int l,int h){
    if(l<h){
        int m =(l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}

int main(){
    int arr[10]={8,2,7,3,6,3,5,4,68,100};
    int l=0;
    int h=10;
    mergeSort(arr,l,h);

    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
