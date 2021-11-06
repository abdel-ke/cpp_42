#include <iostream>
#include <string>
#include <cstdint>

typedef struct Data_t {
	std::string Str;
	int Nbr;
	char c;
} Data;

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw)); 
}

int main()
{
	Data    dt;
    dt.Nbr = 42;
    dt.Str = "1337";
    dt.c    = 'a';

    std::cout << &dt << " " << dt.Nbr << " " << dt.Str << " " << dt.c << std::endl;

    uintptr_t tmp = serialize(&dt);
    std::cout << &dt << " " << dt.Nbr << " " << dt.Str << " " << dt.c << std::endl;

    Data *dt_R = deserialize(tmp);
    std::cout << &dt_R << " " << dt_R->Nbr << " " << dt_R->Str << " " << dt_R->c << std::endl;
    return 0;
}
