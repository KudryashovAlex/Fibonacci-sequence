#include "poslfib.h"
#include <iostream>
PoslFib::PoslFib(unsigned int n)
{
    this->set(n);
}

PoslFib::PoslFib()
{
N=0;
poz=0;
}

PoslFib::~PoslFib()
{
posl.clear();
}

void PoslFib::set(unsigned int n)
{
    N=n;
    poz=0;
    posl.reserve(n);
    int bg=0;
    for(unsigned int i=0;i<n;i++){
        if(i<2){
            posl[i]=bg;
            bg++;
        }
        else
        {
            posl[i]=posl[i-1]+posl[i-2];
        }
    }
}


int PoslFib::get(unsigned int n)
{
    if(n<N+1){
        return posl[n];
        poz=n+2;
    }
    else
        return -1;
}

void PoslFib::show(unsigned int n, unsigned int m)
{
    if ((n<m)&&(m<=N)){
        for(unsigned int i=0;i<m+1;i++){
            std::cout<<posl[i]<<std::endl;
        }
    }
    else
        std::cout<<"error";
}

void PoslFib::show()
{
    if(N!=0){
        for(unsigned int i=0; i<N;i++)
            std::cout<<posl[i]<<std::endl;
    }
}

int PoslFib::getnext()
{
    poz++;
    if (poz>N){
    switch (poz) {
    case 1:{posl.insert(posl.end(),0);break;N++;}
    case 2:{posl.insert(posl.end(),1);break;N++;}
    default:{posl.insert(posl.end(),posl[poz-2]+posl[poz-3]);break;N++;}
    }}
        return posl[poz-1];
 }

