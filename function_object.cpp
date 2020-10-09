
//Muhammad Umair-ul-hassan (190538)
#include<iostream>
using namespace std;

class Complex { 
     private:   //local variables declared
	double real;
	double imaginary;
public:// member functions declared as public to access globally
	Complex()
     {                             //constructor
		cout << "Object is created" << endl;    
	}

	~Complex() {                              //destructor
		cout << "Object has been destroyed" << endl;
	}
	
	void setData(); //setter used to access private members
	void getData();//getter to access
	Complex subtract(Complex r2); //subtract function prototype, data type is the Class 
};// here definition of our class finished

void Complex::setData() {//definition of setter we will take input from user using input stream cin
	cout<<"please enter real part"<<endl;
    cin >> real;
    cout<<"please enter imaginary part"<<endl;
	cin >> imaginary;
}

void Complex::getData() {//getter
	cout << "Real part is:\t" << real << endl;//in variables output the real and imaginary values \t
    //is used to get tab position
	cout << "Imaginary  part is:\t" << imaginary;cout<<"i"<< endl;
}

Complex Complex::subtract(Complex y) {// store_temporary is used to return result
	Complex store_temporary;
	store_temporary.real =  real - y.real;
	store_temporary.imaginary = imaginary - y.imaginary;
	return store_temporary;
}

int main() {
	Complex r1, r2, r3;//three objects are created 

	r1.setData();//through objects data is set
	r2.setData();
	r1.getData();
	r2.getData();
	/*store_temporary = r1.subtract(r2); we get an error that store_temporary is undefined so we
     use object*/
    r3=r1.subtract(r2);// r2 is passed to r1 using function then assigns to r3
	r3.getData();
}
