////////////////////////  HW5   /////////////////////////
#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
//////////////////////// part 1 /////////////////////////
template <class T>
class Pair1 {

private:
  T A;
  T B; 
  
public:
  Pair1 (T A, T B) : A(A), B(B){}
  T first  () const {return A;}
  T second () const {return B;}
};
//////////////////////// part 2 /////////////////////////
template <typename T1, typename T2> 
class Pair {

private:
  T1 A;
  T2 B;
  
public:
  Pair (T1 A, T2 B) : A(A), B(B){}
  T1 first  () const {return A;}
  T2 second () const {return B;}
};
//////////////////////// part 3 /////////////////////////
template <typename T>
class StringValuePair : public Pair<std::string, T> {
private:
  std::string T1;
  T T2;
public:
 StringValuePair (std::string T1 = "null", T T2 = '0') : Pair<std::string, T> (T1, T2) {}
};
///////////////////////// main //////////////////////////
int main (int argc, const char** argv) {
  std::cout << "\nPart 1\n";
  Pair1<int> p1(6, 9);
  std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
  
  std::cout << "\nPart 2\n";
  Pair<int, double> p2(6, 7.8);
  std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
  const Pair<double, int> p3(3.4, 5);
  std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
  
  std::cout << "\nPart 3\n";
  StringValuePair<int> svp("Amazing", 7);
  std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
return 0;
}
