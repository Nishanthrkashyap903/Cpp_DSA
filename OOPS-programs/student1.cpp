class student1{
    int age;
    public:

    char *name;

    public:
    student1(int age,char *name)
    {
        this->age=age;
        //Shallow copy
        // this->name=name;  
        //Deep Copy
        this->name=new char[strlen(name)+1];  //includes '\0'
        strcpy(this->name,name);
    }
    //copy constructor
    student1(student1 const &s)
    {
        this->age=s.age;
        //deep copy
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};