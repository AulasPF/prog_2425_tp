#include <stdio.h>

struct complex {
    double real; 
    double imag; 
};


struct complex add(struct complex z1, struct complex z2);
void printComplex(struct complex z);

int main(){
    struct complex z1={1.0,1.0};
    struct complex z2={-2.0, 5.0};

    printComplex(z1);
    printf(" + ");
    printComplex(z2);
    printf(" = ");
    printComplex(add(z1,z2));
    printf("\n"); 
}


struct complex add(struct complex z1, struct complex z2){
    struct complex res; 

    res.real = z1.real + z2.real; 
    res.imag = z1.imag + z2.imag; 

    return res; 
}

void printComplex(struct complex z){
    printf("%+4.1lf%+4.1lfi",z.real, z.imag);
}
