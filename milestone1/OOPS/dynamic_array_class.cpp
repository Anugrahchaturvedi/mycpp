 class dynamicarray{
    int * data ;
    int next_index;
    int capacity;

    public:
    dynamicarray(){
        data=new int[5];
        next_index=0;
        capacity=5;
    }

    void add(int element){
        if(next_index==capacity){
            int *newdata= new int[2* capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i]=data[i];
            }
            delete[] data;
            data = newdata;
            capacity*=capacity;
            
        }
    }

 };