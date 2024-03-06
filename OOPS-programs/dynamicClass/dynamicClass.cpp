class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;			// total size

	public:
	DynamicArray(){
		data=new int[5];
		nextIndex=0;
		capacity=5;
	}
	//Copy constructor
	DynamicArray(DynamicArray const &d1)
	{
		//deep copy
		this->data=new int[d1.capacity];
        for(int i=0;i<d1.nextIndex;i++)
		{
			this->data[i]=d1.data[i];
		}
		this->nextIndex=d1.nextIndex;
		this->capacity=d1.capacity;
	}
    void add(int element){
        if(nextIndex==capacity){
            int *newarr=new int[2*capacity];  //10 size
			for(int i=0;i<capacity;i++)
			{
				newarr[i]=data[i];
			}
			delete [] data;
			data=newarr;
			
		}
		data[nextIndex]=element;
		nextIndex++;
		capacity*=2;
	}
    void print() const{
         for(int i=0;i<nextIndex;i++)
		 {
			cout<<data[i]<<" ";
		 }
		 cout<<endl;
	}
	int get(int i) const{
		if(i<nextIndex)
		{
			return data[i];
		}
		else{
			return -1;
		}
	}
	void add(int i,int element){
		if(i<nextIndex)   //overwrites the data
		{
			data[i]=element;
		}
        else if(i==nextIndex)
		{
			add(element);
		}
		else{
			return;
		}
	}  
	void operator=(DynamicArray const&d1)
	{
		this->data=new int[d1.capacity];
        for(int i=0;i<d1.nextIndex;i++)
		{
			this->data[i]=d1.data[i];
		}
		this->nextIndex=d1.nextIndex;
		this->capacity=d1.capacity;
	}
};
