class student{
  public:
  int rollnumber;
  int age;

  static int totalstudents;  
  
  student(){
    totalstudents++;
  }
  static int getTotalstudent(){   //static  function
    return totalstudents;
  }
};
int student::totalstudents=0;