#include <unistd.h>

int factorial(int nb)
{
    if (nb == 0) {
      return 1;
    }        
    return nb * factorial(nb - 1);
}

int main() {
    int num = 5; //the number
    //write(1, factorial(num), 3);
    return factorial(num);
}
