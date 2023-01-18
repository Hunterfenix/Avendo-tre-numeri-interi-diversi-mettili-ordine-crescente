//includo la libreria iostream
#include <iostream>



int main() //inizializo la funzione main
{
	int a, b, c, i;//inizializzo le variabili nella funzione main
	//faccio inserire dei valori nelle variabili precedentemente inizializate all'utente 
	std::cout << "inserisci tre numeri interi diversi da disporre in ordine crescente" << std::endl;
	std::cout << "Inserisci il primo numero ";
	std::cin >> a;
	std::cout << "Inserisci il secondo numero ";
	std::cin >> b;
	std::cout << "Inserisci Il terzo numero ";
	std::cin >> c;

	if (a > b) // se a è maggiore di b 
	{
		if (a > c)// controllo che a sia maggiore di c 
		{
			if (b > c)// controllo che b sia maggiore di c
			{
				//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
				std::cout << "Ecco i numeri in ordine Crescente" << std::endl
					<< c << std::endl
					<< b << std::endl
					<< a << std::endl;

			}
			else //in questto caso a è maggiore di c e c è maggiore di b
			{
				//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
				std::cout << "Ecco i numeri in ordine Crescente" << std::endl
					<< b << std::endl
					<< c << std::endl
					<< a << std::endl;

			}
		}
		else //in questo caso c è maggiore di a e a è maggiore di b
		{
			//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
			std::cout << "Ecco i numeri in ordine Crescente" << std::endl
				<< b << std::endl
				<< a << std::endl
				<< c << std::endl;
		}
	}
	else if (a > c)//in questto caso b è maggiore di a e controllo che a sia maggiore di c 
	{
		//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
		std::cout << "Ecco i numeri in ordine Crescente" << std::endl
			<< c << std::endl
			<< a << std::endl
			<< b << std::endl;

	}
	else if (b > c)//in questo caso a è minore di c e controllo che b sia maggiore di c 
	{
		//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
		std::cout << "Ecco i numeri in ordine Crescente" << std::endl
			<< a << std::endl
			<< c << std::endl
			<< b << std::endl;
	}
	else//in questo caso c è maggiore di b e b è maggiore di a 
	{
		//stampo nel terminale i numeri in ordine crescente che rispondo alla caratteristiche dei precedenti condizioni
		std::cout << "Ecco i numeri in ordine Crescente" << std::endl
			<< a << std::endl
			<< b << std::endl
			<< c << std::endl;
	}
	return 0;

}