class Student {
    int rollNumber;
    public :
    int age;
    Student(){
    }
    Student(int r) {
        rollNumber = r;
    }
    void setnumber(int r){  //here this is changing the this variable of the object so no 
                            //const keyword after function
        rollNumber=r;
    }
    int getRollNumber() const{
        return rollNumber;   //it is not changing the this variable of object
    }
    void print() const{
        cout<<rollNumber<<" "<<age<<endl;  //it is not changing the this variable of object
    }
};