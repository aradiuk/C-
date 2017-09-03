#ifndef EX02_SQUAD_H
#define EX02_SQUAD_H

#include "ISquad.h"

class Squad : public ISquad
{
public:
	Squad();
	~Squad();
	Squad(const Squad& obj);
	Squad& operator=(const Squad& obj);

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int n) const;
	virtual int				push(ISpaceMarine* obj);

private:
	typedef struct s_list
	{
		int				index;
		ISpaceMarine*	marine;
		s_list*			next;
	}				t_list;

	t_list*			list;
};


#endif //EX02_SQUAD_H
