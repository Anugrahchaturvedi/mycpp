#include<vector>
using namespace std;

class priorityQueue{
vector<int> pq;

public:
priorityQueue(){}
bool isempty(){
    return pq.size()==0;
}
//return cuurent size of priority queue
int getSize(){
return pq.size();
}

int getMin(){
    if(isempty()){
        return 0;
    }
    return pq[0];
}
void insert(int element){
    pq.push_back(element);

    int childIndex=pq.size()-1;
    while(childIndex>0){
    int parentIndex= (childIndex-1)/2;


    if(pq[childIndex] < pq[parentIndex]){
        int temp=pq[childIndex];
        pq[childIndex]=pq[parentIndex];
        pq[parentIndex]=temp;
    }
    else{
        break;
    }

    childIndex=parentIndex;
    }
}

int removemin(){
    if(isempty())
    return 0 ;
    int ans=pq[0];
    pq[0]=pq[pq.size()-1];
    pq.pop_back();


    //down-heapify
    int parent=0;
    int leftChild=(2* parent)+1;
    int rightChild=(2* parent)+2;
    while(leftChild<pq.size()){
        int minIndex=parent;
        if(pq[minIndex] > pq[leftChild]){
            minIndex=leftChild;
        }
         if( rightChild<pq.size() &&  pq[minIndex] > pq[rightChild]){
            minIndex=rightChild;
        }
        if(parent==minIndex)
        break;
        int temp=pq[minIndex];
        pq[minIndex]=pq[parent];
        pq[parent]=temp;

        parent=minIndex;
        int leftChild=(2* parent)+1;
        int rightChild=(2* parent)+2;
return ans;

    }


}

};