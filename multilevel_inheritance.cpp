#include <iostream>
using namespace std;

class Vehicle{
   public:
      void vehicle(){
         cout<<"I am a vehicle\n";
      }
};

class FourWheeler : public Vehicle{
   public:
      void fourWheeler(){
         cout<<"I have four wheels\n";
      }
};

class Car : public FourWheeler{
   public:
      void car(){
         cout<<"I am a car\n";
      }
};
int main(){
   Car obj;
   obj.car();
   obj.fourWheeler();
   obj.vehicle();
   return 0;
}