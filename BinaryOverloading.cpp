#include<iostream>
using namespace std;
class binary{
	private:
		int real, img;
	public:
		binary(){
			real=0;
			img=0;
		}
		void input(){
			cout<<"\t\t\tInput"<<endl;
			cout<<"\t\t\tReal= "<<endl;
			cin>>real;
			cout<<"\t\t\tImaginary= "<<endl;
			cin>>img;
		}
		void output()
       {
           if(img < 0)
               cout << "Output Complex number: "<< real << img << "i";
           else
               cout << "Output Complex number: " << real << "+" << img << "i";
       }
		binary operator -(binary& kaz){
			binary temp;
			temp.real=real-kaz.real;
			temp.img=img-kaz.img;
		}
};
int main(){
	binary kaz1,kaz2,kaz4;
	kaz1.input();
	kaz2.input();
	kaz4=kaz1-kaz2;
	kaz4.output();
}
