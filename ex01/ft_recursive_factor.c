#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb){
	if(nb == 0){
		return (1);
	} else if (nb > 100 || nb < 0){
		return(0);
	}

	if (nb > 1){
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}

//int main(){
//	int nb;
//	nb = 2;

//	return(0)
//}
