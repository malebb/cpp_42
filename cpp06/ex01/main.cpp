#include <inttypes.h>
#include "Data.hpp"

uintptr_t		serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data			*data = new Data("Here is some informations");
	Data			*data_deserialized;
	uintptr_t		data_serialized;

	std::cout << "Not serialized data = " << data->get_info() << std::endl;

	data_serialized = serialize(data);
	std::cout << "Serialized value = " << data_serialized << std::endl;

	data_deserialized = deserialize(data_serialized);
	std::cout << "Deserialized data = " << data_deserialized->get_info() << std::endl;

	delete data_deserialized;

	return (0);
}
