class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print(){
        cout<<this->numerator<<"/"<<denominator<<endl;
    }
    void simplify()
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0 && this->denominator%i==0)
            {
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    void additon(fraction const &f2)    //changes cannot be possible through f2
    {
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=this->numerator*x+f2.numerator*y;
        //storing the sum in f1 object 
        numerator=num;
        denominator=lcm;
        simplify();
    }
    //return object
    fraction add(fraction const &f2)  const  
    {
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=this->numerator*x+f2.numerator*y;

        fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }
    //operator overloading
    fraction operator+(fraction const &f2) const
    {
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=this->numerator*x+f2.numerator*y;

        fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }
    void multiply(fraction const &f2)
    {
        numerator=this->numerator*f2.numerator;
        denominator=this->denominator*f2.denominator;
        simplify();
    }
    //returning
    fraction mul(fraction const &f2) const
    {
        int num=this->numerator*f2.numerator;
        int den=this->denominator*f2.denominator;
        fraction fNew(num,den);
        fNew.simplify();
        return fNew;
    }
    //operator overloading
    fraction operator* (fraction const &f2) const
    {
        int num=this->numerator*f2.numerator;
        int den=this->denominator*f2.denominator;
        fraction fNew(num,den);
        fNew.simplify();
        return fNew;
    }
    bool operator ==(fraction const &f2) const{
        return (this->numerator==f2.numerator && this->denominator==f2.denominator);
    }
    //pre-operator ++
    fraction& operator++(){
           this->numerator=this->numerator+denominator;
           this->simplify();
           return *this;  //this stores the address of object therefore it returns object itself
    }
    //post-incrementor ++
    fraction operator++(int){
        fraction fNew(numerator,denominator);
        fNew.simplify();
        this->numerator=numerator+denominator;
        this->simplify();
        return fNew;
    }
    //+=
    fraction& operator+=(fraction const &f2){
        int lcm=this->denominator*f2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=this->numerator*x+f2.numerator*y;
        this->numerator=num;
        this->denominator=lcm;
        return *this;
    }
};