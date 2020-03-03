//Main for "dinamic_crescent_order" C++ application
//Created by r4m0nl1m4 03/03/2020

#include <iostream>
#include <cstdlib>
#include <new>          // std::nothrow std::nullptr

int main(int argc, char* argv[])
{
    // Receber o N pelo argv (atoi)
    unsigned int n = atoi (argv[1]); // size_t n = 2500000;

    // Usar a free store (new)
    int *numeros = new(std::nothrow) int[n]; // int numeros[n];

	if (numeros == nullptr)
	{
    	std::cout << "Error: memory could not be allocated";
	}
  	else
  	{
	    for (size_t i = 0; i < n; ++i)
	    {
	        numeros[i] = rand() % 100;
	    }

	    //ornedar

	    for (size_t i = 0; i < n - 1; ++i)
	    {
	        for (size_t j = i + 1; j < n; ++j)
	        {
	            if (numeros[j] < numeros[i])
	            {
	                int tmp    = numeros[j];
	                numeros[j] = numeros[i];
	                numeros[i] = tmp;
	            }

	        }
	    }

	    for (size_t i = 0; i < n; ++i)
	    {
	        std::cout << numeros[i] << "\n";
	    }

	    // Usar a free store (delete)
	    delete[] numeros;
	}
}
