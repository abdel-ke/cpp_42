#include <iostream>

class rectangle
{
private:
	float	_Hauteur;
	float	_Largeur;
public:
	rectangle(float , float);
	float	const getHauteur();
	void	const setHauteur(float);
	float	const getLargeur();
	void	const setLargeur(float);
	float	const calculPérimètre();
	float	const calculSurface();
	void	const affichage();
};
