#pragma once

#include "bagADT.h"

template<typename E>
class ABag : public Bag<E>{
private:
	
	int Storage = 0;
	std::array<E, 1> Bag;
public:

	ABag() {
		
	}            // base constructor

	
	// Insert a new item into the bag -- return false if fails and true if
	// successful
	virtual bool addItem(const E& item) 
	{
		if (Storage < 10)
		{
			Bag[Storage] = item;
			Storage++;
			return 1;
		}
		else  { return 0; }
			
	}


	// Looks for 'item' in the bag and if found updates 'item' with the 
	// bag value and returns true.  Otherwise 'item' is left unchanged
	// and the method returns false.
	virtual bool remove(E& item) 
	{
		for (int i{ 0 }; i < 10; i++)
		{
			if (Bag[i] == item)
			{
				item = i;
					return 1;
			}
			else { return 0; }
		}
	}


	// Removes the top record from the bag, puts it in returnValue, and
	// returns true if the bag is not empty.  If the bag is empty the 
	// function returns false and returnValue remains unchanged.


	// TODO FIX THIS, SETING RETURNVALUE TO WRONG VALUE
	virtual bool removeTop(E& returnValue)
	{
		if (Bag.empty()) { return 0; }
		returnValue = Bag.back();
		return 1;
	
	}


	// Finds the record using returnValue and if the record is found updates
	// returnValue based on the contents of the bag and returns true.  If the
	// record is not found the function returns false.  Works just like remove()
	// except that the found record is not removed from the bag.
	virtual bool find(E& returnValue) const
	{
		for (int i = 0; i < Bag.size(); i++)
		{
			if (Bag[i] == returnValue)
			{
				returnValue = Bag[i];
				return 1;
			}
		}
		return 0;
	}

	// Inspect the top of the bag.  If the bag is empty return
	// false and leave 'item' unchanged; otherwise, return true and update 
	// 'item' with the contents of the bag.

	// TODO UPDATE ITEM WITH THE CONTENTS OF THE BAG
	virtual bool inspectTop(E& item) const
	{
		if (Bag.empty())
			return 0;
		else
		{
			item;
			return 1;
		}
	}


	// empties the bag
	// TODO EMPTY THE BAG FOR REAL
	virtual void emptyBag() 
	{
		Bag.empty();

	}


	// use the += operator to add an item to the bag
	virtual bool operator+=(const E& addend) 
	{

		return 0;
	}


	// get the size of the bag
	virtual int size() const 
	{

		return 0;
	}


	// get the capacity of the bag
	virtual int bagCapacity() const
	{

		return 0;
	}

	~ABag() {}   // base destructor

};
