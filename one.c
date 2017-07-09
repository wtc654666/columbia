#include <stdio.h>

int main(int argc, char *argv[])
{
int m = 10;

int *z;
//*z = m;
z = &m;
//strange enough, it doesn't work if you use *z = m. it's important that you get the address, choosing the value it's referencing is pointless without an address for its location to store.

printf("z stores the address of m = %p\n", z);
printf("z stores the value of m = %d\n", *z);
//printf("So um... an address can have it's own address if it gets pointed as a value. so &z would be z = %p", &z);


}
