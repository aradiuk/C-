//
// Created by andrew on 24.08.17.
//

#include "Squad.h"

Squad::Squad() : ISquad()
{}

Squad::~Squad()
{
	t_list*	start = list;

	if (list != 0)
	{
		while (list != 0)
		{
			t_list*	nextEl;

			nextEl = list->next;
			delete list->marine;
			delete list;
			list = nextEl;
		}
	}
	list = start;
	std::cout << "Squad has been destroyed.\n";
}

Squad::Squad(const Squad &obj)
{
	t_list*	start = list;

	while (obj.list->next != 0)
	{
		this->push(obj.list->marine);
		list = list->next;
	}
	list = start;
}

Squad& Squad::operator=(const Squad &obj)
{
	t_list*	start = list;

	if (obj.getCount() != 0)
		while (list->next != 0)
		{
			t_list*	nextEl;

			nextEl = list->next;
			delete	list;
			list = nextEl;
		}
	list = start;
	while (obj.list->next != 0)
	{
		this->push(obj.list->marine);
		list = list->next;
	}
	list = start;
}

int Squad::getCount() const
{
	int		numOfUnits = 0;
	t_list	*temp = list;

	while (temp)
	{
		temp = temp->next;
		numOfUnits++;
	}
	return (numOfUnits);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	t_list* temp = this->list;

	if (n > this->getCount() - 1 || n < 0)
		return (0);
	while (temp->next != 0)
	{
		if (temp->index == n)
			return (temp->marine);
		temp = temp->next;
	}
	return (temp->marine);
}

int Squad::push(ISpaceMarine *obj)
{
	int		numOfUnits = this->getCount();
	t_list*	temp = this->list;

	if (this->list == 0)
	{
		this->list = new t_list;
		this->list->index = numOfUnits;
		this->list->marine = obj;
		this->list->next = 0;
	}
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new t_list;
		temp = temp->next;
		temp->index = numOfUnits;
		temp->next = 0;
		temp->marine = obj;
	}
}