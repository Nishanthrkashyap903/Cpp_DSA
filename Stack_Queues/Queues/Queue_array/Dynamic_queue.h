template <typename T>

class Dynamic_queue{
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public :
	Dynamic_queue(){
		data = new T[5];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = 5;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	// insert element
	void enqueue(T element) {
		if(size==capacity)
		{
		    T* newdata=new T [2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            for(int i=0;i<nextIndex;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            firstIndex=0;
            nextIndex=capacity;
            data=newdata;
            delete [] data;
            capacity=2*capacity;
		}
		data[nextIndex]=element;
		nextIndex=(nextIndex+1)%capacity;
		//for empty queue
		if(firstIndex==-1)
		{
			firstIndex=0;
		}
		size++;
	}
	
	T front() {
		if(isEmpty())
		{
			cout<<"Queue is empty";
			return 0;
		}
		return data[firstIndex];
	}

	T dequeue() {
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		size--;
		T ans=data[firstIndex++];
        return ans;
	}
};
