#include <unistd.h> 

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		ft_putchar(b);
		b-=-1;
	}

}
int main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
