#include <iostream>
#include <string>

class Player
{
public:
	Player(const std::string& name = "");
	std::string	GetName() const;
	Player*		GetNext() const;
	void		SetNext(Player* next);

private:
	std::string m_Name;
	Player* m_pNext;
};

Player::Player(const std::string& name) :
	m_Name(name), m_pNext(0)
{}

std::string Player::GetName() const
{
	return m_Name;
}

Player* Player::GetNext() const
{
	return m_pNext;
}

void	Player::SetNext(Player *next)
{
	m_pNext = next;
}

class	Lobby
{
	friend std::ostream& operator<<(std::ostream& os, const Lobby& aLobby);

public:
	Lobby();
	~Lobby();
	void	AddPlayer();
	void	RemovePlayer();
	void	Clear();

private:
	Player* m_pHead;
};

Lobby::Lobby() :
		m_pHead(0)
{}

Lobby::~Lobby()
{
	Clear();
}

void	Lobby::AddPlayer()
{
	std::cout << "Please enter the name of the new player: ";
	std::string name;
	std::cin >> name;
	Player* pNewPlayer = new Player(name);

	if (m_pHead == 0)
		m_pHead = pNewPlayer;
	else
	{
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0)
			pIter = pIter->GetNext();
		pIter->SetNext(pNewPlayer);
	}
}

void	Lobby::RemovePlayer()
{
	if (m_pHead == 0)
		std::cout << "The Game Lobby is empty.\n";
	else
	{
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}
}

void	Lobby::Clear()
{
	while (m_pHead != 0)
		RemovePlayer();
}

std::ostream& operator<<(std::ostream& os, const Lobby& aLobby)
{
	Player* pIter = aLobby.m_pHead;

	if (pIter == 0)
		os << "The lobby is empty.\n";
	else
	{
		os << "\nHere's who is in the game Lobby: \n";
		while (pIter != 0)
		{
			os << pIter->GetName() << std::endl;
			pIter = pIter->GetNext();
		}
	}
	return (os);
}

int		main()
{
	Lobby	myLobby;
	int		choice;

	do
	{
		std::cout << myLobby << "\n Game Lobby \n";
		std::cout << "0 - Exit the program.\n";
		std::cout << "1 - Add a player to the lobby.\n";
		std::cout << "2 - Remove a player from the lobby.\n";
		std::cout << "3 - Clear the lobby.\n";
		std::cout << "\nEnter your choice: ";
		std::cin >> choice;

		switch(choice)
		{
			case 0:
				std::cout << "Goodbye.\n";
				break;
			case 1:
				myLobby.AddPlayer();
				break;
			case 2:
				myLobby.RemovePlayer();
				break;
			case 3:
				myLobby.Clear();
				break;
			default:
				std::cout << "It is not a valid choice\n";
		}
	} while (choice != 0);

	return (0);
}