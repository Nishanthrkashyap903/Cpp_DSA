class student{
     public:
     int rollno;

     private:
     int age;

     public:
     //Destructor
     
     ~student(){
      cout<<"Destructor called!!!"<<endl;
     }

     //Default Constructor
     student(){
      cout<<"Constructor1 called!!!"<<endl;
     }
     //Parametrized Constructor

     student(int rollno)
     {
      cout<<"Constructor2 called!!!"<<endl;
      this->rollno=rollno;    //this is a pointer
     }
     student(int a,int r)
     {
      cout<<"Constructor3 called!!!"<<endl;
      cout<<"Address of this:"<<this<<endl;
      age=a;
      rollno=r;
     }
     void display(){
        cout<<age<<" "<<rollno<<endl;
     }
     int getAge(){
        return age;
     }
     void setAge(int a){
          if(a<0){  //constraints to the private variable
            return;
          }
          age=a;
     }
};