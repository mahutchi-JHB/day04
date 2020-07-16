#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int, int);

int ft_recursive_power(int nb, int power) {
  if (power == 0) {
    return 1;
  }else if (power >= 1) {
    return nb * ft_recursive_power(nb, power - 1);
  }
  return 0;
}


//int main(){
//	int nb;
//	nb = 5;
//  int power;
//  power = 2

//	return(0)
//}
