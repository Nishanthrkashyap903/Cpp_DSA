template <typename T>

class Dynamic_Stack{
	T *data;
	int nextIndex;
	int capacity;	

	public :

	Dynamic_Stack() {
		data = new T[4];
		nextIndex = 0;
		capacity = 4;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/

		return nextIndex == 0;
	}

	// insert element
	void push(T element) {
		if(nextIndex == capacity) {
			T* newdata=new T[2*capacity];
            for(int i=0;i<2*capacity;i++)
            {
                newdata[i]=data[i];
            }
            delete [] data;
            data=newdata;

            this->capacity=2*capacity;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	// delete element
	T pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		nextIndex--;
		return data[nextIndex];
	}

	T top() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		return data[nextIndex - 1];
	}
};    