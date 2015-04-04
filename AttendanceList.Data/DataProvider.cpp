#include "DataProvider.h"

#include "FileDataProvider.h"

DataProvider* DataProvider::instance = NULL;

DataProvider* DataProvider::Instance()
{
	if (instance == NULL)
		instance = new FileDataProvider;

	return instance;
}