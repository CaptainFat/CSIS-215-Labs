#pragma once

#include "dictionaryADT.h"
#include "ABag.h"
#include "string.h"


class BDictionary : public Dictionary<int, int>{



public:
	BDictionary() {}          // Default constructor
	

	// Reinitialize dictionary
	virtual void clear()
	{

	}

	// Insert a record
	// k: The key for the record being inserted.
	// e: The record being inserted.
	// Return true if insert is successful and false otherwise
	virtual bool insert(const int& k, const int& e)
	{
		
		return 0;
	}

	// Looks for a record using the key and if found does the following:
	// - updates the E& rtnVal
	// - removes the record from the dictionary
	// - returns true
	// If the record is not found the function returns false.
	virtual bool remove(const int& k, int& rtnVal)
	{
		return 0;

	}

	// Takes an arbitrary record from the dictionary and does the following:
	// - updates the E& returnValue
	// - removes the record from the dictionary
	// - returns true
	// If the dictionary is empty the function returns false.
	virtual bool removeAny(int& returnValue)
	{
		return 0;

	}

	// Looks for a record using the key and if found does the following:
	// - updates the E& returnValue
	// - returns true
	// If the record is not found the function returns false.
	virtual bool find(const int& k, int& returnValue) const
	{
		return 0;

	}

	// Return the number of records in the dictionary.
	virtual int size()
	{
		return 0;

	}


	virtual ~BDictionary() {} // Base destructor


};
