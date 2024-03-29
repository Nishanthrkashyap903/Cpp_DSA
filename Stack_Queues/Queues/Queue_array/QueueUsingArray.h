template <typename T>

class QueueUsingArray {
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public :
	QueueUsingArray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
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
			cout<<"Queue is full"<<endl;
			return;
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
