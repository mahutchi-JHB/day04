#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int);

//int main(){
//  int index;
//  index = 4;
//  int result;
//  result = ft_fibonacci(index);
//}

int ft_fibonacci(int index)
{
    if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }
    else
    {
        return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    }
}
