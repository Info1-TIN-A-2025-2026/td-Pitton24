#include <stdio.h>

int main(int argc, const char *argv[])
{
	//calcule de la force gravitationnelle entre deux objets
	// constante gravitationnelle
	const double G = 6.67430e-11;
	// déclaration des variables
	double m1 = 0; // masse du premier objet (kg)
	double m2 = 0; // masse du deuxième objet (kg)
	double r = 0;  // distance entre les deux objets (m)
	double F = 0;  // force gravitationnelle (N)

	// saisie des valeurs du premier objet
	printf("Entrez la masse du premier objet [kg] : ");
	scanf("%lf", &m1);
	// saisie des valeurs du deuxième objet
	printf("Entrez la masse du deuxième objet [kg] : ");
	scanf("%lf", &m2);
	// saisie de la distance entre les deux objets
	printf("Entrez la distance entre les deux objets [km] : ");
	scanf("%lf", &r);
	// conversion de la distance en mètres
	r *= 1000;
	// calcul de la force gravitationnelle
	F = (G * m1 * m2) / (r * r);
	printf("F = %0.2e N\n", F);

	return 0;
}