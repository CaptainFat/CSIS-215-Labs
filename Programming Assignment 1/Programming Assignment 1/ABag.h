#pragma once

#include "bagADT.h"


class ABag : public Bag<int>
{
public:

	virtual bool addItem(const int& item)
	{
		return 0;
	}

	virtual bool remove(int& item)
	{
		return 0;

	}

	virtual bool removeTop(int& returnValue)
	{
		return 0;
	}
	
	virtual bool find(int& returnValue) const
	{
		return 0;

	}
	

	virtual bool inspectTop(int& item) const
	{
		return 0;

	}

	virtual void emptyBag()
	{

	}

	virtual bool operator+=(const int& addend)
	{
		return 0;
	}

	virtual int size() const
	{
		return 0;
	}

	virtual int bagCapacity() const
	{

		return 0;

	}

};