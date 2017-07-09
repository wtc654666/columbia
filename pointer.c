void PtrExample()
{
int num;
int *numPtr;
num = 42;
numPtr = &num;
}

void PtrTest()
{
int a = 1;
int b = 2;
int c = 3;

int *p;
int *q;
//the moment you set an * to the variable, u've turned it into a pointer

p = &a;
q = &b;
*anytime you set the "pointer variable" to something when you don't use the *, you're messing with the address that it's pointing to (& is basically "addressof"). if you did put *, you'd be changing what it's referencing/pointing to



c = *p;
//c becomes what *p is referring to, aka a and aka 1 so c = 1
p = q;
// p becomes q which is the address of b
*p = 13;
//directly changes what's being pointed to. Now *p is pointing at 13. You're not messing with WHICH value p is pointing to, you're actually CHANGING the value (as if it's gained a new identity) that's being pointed by p. so basically since q is pointing to the same thing as well but that "thing" is changed, q changes as well O_O
}


void BadPointer()
{int *p;
*p = 42;}
