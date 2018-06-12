#ifndef POSLFIB_H
#define POSLFIB_H
#include <vector>
class PoslFib
{
public:
    PoslFib(unsigned int n);
    PoslFib();
    ~PoslFib();
    void set(unsigned int n);
    int get(unsigned int n);
    void show(unsigned int n,unsigned int m);
    void show();
    int getnext();
private:
   std::vector<int> posl;
   unsigned int N;
   unsigned int poz;
};

#endif // POSLFIB_H
