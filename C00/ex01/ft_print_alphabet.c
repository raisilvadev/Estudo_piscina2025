#include <unistd.h>

void ft_print_alphabet(void)
{
	write(1,"abcdefghijklmnopqrstuvwxyz\n",27);
}
void main()
{
	ft_print_alphabet();
}
	
	
	
	
	
	
	
	
	
/*	
{
	char c = 'a';

	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
	write (1, "\n", 1); // PULA UMA LINHA APOS FINALIZAR A IMPRESSAO DO ALPHABET

}
void main()
{
	ft_print_alphabet();	
}	
	
 // OUTRA FORMA DE FAZER 
{
    char letra = 'a';

    while (letra <= 'z')
    {
        write(1, &letra, 1);
        letra++;
    }
}
*/
