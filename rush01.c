
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}



//La fonction ft_print_line prepare les ligne qui composerons le rectangle elle prend en entree le caracter
//de gauche, de droite, du milieu (pour pouvoir les changer quand on va faire le 01,02,03,04 et pour economiser
//des lignes surtout) et l'int x qui lui dira quel sera la longueur de la ligne.

//Pour resumer elle ecrit en premier le caractere de gauche (dans notre cas "o") decremente 1 fois x puis affiche
//le caractere du milieu (dans notre cas "-" ) en decrementant 1 fois x jusqua que x soit egale a 1 puis ecrit
//le dernier caractere de droite (dans notre cas "o") suivi dun retour a la ligne pour afficher la prochaine ligne.
//NE PAS PRENDRE EN COMPTE LE COMMENTAIRE IL N'ES VALABLE QUE POUR LE RUSH00


void	ft_print_line(char left, char center, char right, int x)
{
	ft_putchar(left);
	x--;
	while(x > 1)
	{
		ft_putchar(center);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}



//La fonction rush prend en parametre x (la largeur de rectangle) et y(la hauteur du rectangle) elle affiche
//les ligne 1 a 1 a laide la fonction ft_print_line.

//Pour resumer elle verifie que x et y ne sont pas NULL si c'est le cas elle renvoie un message d'erreur.
//Sinon elle appelle ft_print_line pour afficher la premiere ligne et decremente y de 1 puis appelle a
//nouveau ft_put_line en decrementant 1 fois y jusqua que y soit egale a 1 puis affiche la derniere ligne
//en rappellant ft_put_line.
//NE PAS PRENDRE EN COMPTE LE COMMENTAIRE IL N'ES VALABLE QUE POUR LE RUSH00


void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{

		ft_print_line('/', '*', '\\', x);
		y--;
		while (y > 1)
		{
			ft_print_line('*', ' ', '*', x);
			y--;
		}
		if (y == 1)
		{
			ft_print_line('\\', '*', '/', x);
		}

	}
}


int	main(void)
{
	rush(10, 10);
	return (0);
}

