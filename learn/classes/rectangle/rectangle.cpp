#include "rectangle.hpp"

void	const rectangle::setHauteur(float	H)
{
	this->_Hauteur = H;
}

void	const rectangle::setLargeur(float	L)
{
	this->_Largeur = L;
}

float	const rectangle::getHauteur()
{
	return (this->_Hauteur);
}

float	const rectangle::getLargeur()
{
	return (this->_Largeur);
}

rectangle::rectangle(float H, float L)
{
	setHauteur(H);
	setLargeur(L);
}

float	const rectangle::calculPérimètre()
{
	float h = getHauteur(), l = getLargeur();
	return (h + h + l + l);
}

float	const rectangle::calculSurface()
{
	float h = getHauteur(), l = getLargeur();
	return (h * l);
}

void	const rectangle::affichage()
{
	for (int i = 0; i < _Hauteur; i++)
	{
		for (int j = 0; j < _Largeur; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "calcul Périmètre est :" << calculPérimètre() << std::endl
		<< "calcul Surface est :" << calculSurface() << "cm2\n";
}

int main()
{
	rectangle r(5, 10);

	r.affichage();
}
