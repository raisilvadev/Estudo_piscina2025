#include <unistd.h>

void	ft_putchar(char letra)
{
	write(1, &letra, 1);
}
 
 //SE QUISER TESTAR É NECESSÁRIO ADICIONAR O CÓDIGO ABAIXO COM A FUNÇÃO MAIN
 
int main() {

	ft_putchar('A');
	return 0;
}
