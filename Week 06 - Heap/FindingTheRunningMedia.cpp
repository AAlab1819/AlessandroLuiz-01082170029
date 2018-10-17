#include<bits/stdc++.h>
using namespace std;

//HEAPIFY FUNCTION
void heapify(int arr[], int n, int i)
{
    int largest = i; //INITIALIZE LARGEST AS ROOT
    int l = 2*i + 1; //LEFT=2*I+1
    int r = 2*i + 2; //RIGHT=2*I+1
    //LEFT CHILD LARGER THAN ROOT
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    //RIGHT CHILD LARGER THAN CURRENT LARGEST
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }
    //LARGEST IS NOT ROOT
    if (largest != i) {
        swap(arr[i], arr[largest]);
        //RECURSIVELY HEAPIFY THE AFFECTED SUB-TREE
        heapify(arr, n, largest);
    }
}

//HEAP SORT
void heapSort(int arr[], int n) {
    //BUILD HEAP (REARRANGE ARRAY)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    //EXTRACT ELEMENT ONE BY ONE
    for (int i=n-1; i>=0; i--) {
        //MOVE CURRENT ROOT TO END
        swap(arr[0], arr[i]);
        //CALL MAX HEAPIFY ON THE REDUCED HEAP
        heapify(arr, i, 0);
    }
}
int main()
{
    int num;
    float median,temp;
    cin>>num;
    int heaptree[num];
    for(int i=0;i<num;i++)
    {
        cin>>heaptree[i];
        heapSort(heaptree,i+1);
        if((i+1)%2==0)
        {
            median=heaptree[i/2]+heaptree[(i/2)+1];
            temp= median/2;
        }
        else
        {
            median=heaptree[(i+1)/2];
            temp=median;
        }
        cout<<fixed<<setprecision(1)<<temp<<endl;
    }
    return 0;
}
