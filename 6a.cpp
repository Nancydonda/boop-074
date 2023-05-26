#include<iostream>
using namespace std;
class student
{
  private:
  int enrollment,m1,m2,m3;
  char name[20];
  public:
  void putdata()
  {
    cout<<"Enter Enrollment no:"<<endl;
    cin>>enrollment;
    cout<<"Enter Name:"<<endl;
    cin>>name;
    cout<<"Enter marks of Maths:"<<endl;
    cin>>m1;
    cout<<"Enter marks Science:"<<endl;
    cin>>m2;
    cout<<"Enter marks English:"<<endl;
    cin>>m3;
  }
  void getdata()
  {
     int total,result;
     total=m1+m2+m3;
     result=(total*100)/300;
     
     cout<<"Result of a student is-"<<result<<endl;
  }
};
int main()
{
   student obj;
   obj.putdata();
   obj.getdata();
  
  return 0;
}
