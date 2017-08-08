#include	<iostream>
#include	<string>
#include	<vector>
#include	<algorithm>

const char	X = 'X';
const char	O = 'O';
const char	EMPTY = ' ';
const char	TIE = 'T';
const char	NO_ONE = 'N';

void	instructions();
char	askYesNo(std::string question);
int 	askNumber(std::string question, int high, int low = 0);
char	humanPiece();
char	opponent(char piece);
void	displayBoard(std::vector<char>* const board);
char	winner(std::vector<char>* const board);
bool	isLegal(std::vector<char>* const board, int move);
int		humanMove(std::vector<char>* const board, char human);
int		computerMove(std::vector<char> board, char computer);
void	announceWinner(char winner, char computer, char human);

int		main()
{
	int					move;
	const int			NUM_SQUARES = 9;
	std::vector<char>	board(NUM_SQUARES, EMPTY);

	instructions();
	char	human = humanPiece();
	char	computer = opponent(human);
	char	turn = 'X';

	displayBoard(&board);

	while (winner(&board) == NO_ONE)
	{
		if (turn == human)
		{
			move = humanMove(&board, human);
			board[move] = human;
		}
		else
		{
			move = computerMove(board, computer);
			board[move] = computer;
		}
		displayBoard(&board);
		turn = opponent(turn);
	}
	announceWinner(winner(&board), computer, human);
	return (0);
}

void	instructions()
{
	std::cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe!\n";
	std::cout << "\nMake your move known by entering a number, (0 - 8)\n";
	std::cout << "The number corresponds to the desired board position, as illustrated: \n";
	std::cout << " 0 | 1 | 2\n----------\n 3 | 4 | 5\n----------\n 6 | 7 | 8\n";
	std::cout << "Brace yourself, human. The battle is about to begin.\n\n";
}

char	askYesNo(std::string question)
{
	char	response;

	response = 0;
	do
	{
		std::cout << question << " (y/n): ";
		std::cin >> response;
	} while (response != 'y' && response != 'n');

	return (response);
}

int		askNumber(std::string question, int high, int low)
{
	int	num;

	do
	{
		std::cout << question << " (" << low << " - " << high << "): ";
		std::cin >> num;
	} while (num > high || num < low);

	return (num);
}

char	humanPiece()
{
	char	go_first;

	go_first = askYesNo("Do you require the first move, puny human?");
	if (go_first == 'y')
		return ('X');
	else
		return ('O');
}

char	opponent(char piece)
{
	if (piece == 'X')
		return ('O');
	else
		return  ('X');
}

void	displayBoard(std::vector<char>* const board)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n\t" << (*board)[3 * i] << " | ";
		std::cout << (*board)[3 * i + 1] << " | ";
		std::cout << (*board)[3 * i + 2];
		if (i != 2)
			std::cout << "\n\t" << "---------";
	}
	std::cout << "\n\n";
}

char	winner(std::vector<char>* const board)
{
	const int	TOTAL_ROWS = 8;
	const int	WINNING_ROWS[8][3] = {	{0, 1, 2},
										{3, 4, 5},
										{6, 7, 8},
										{0, 3, 6},
										{1, 4, 7},
										{2, 5, 8},
										{0, 4, 8},
										{2, 4, 6}};
	for (int row = 0; row < TOTAL_ROWS; row++)
	{
		if ((*board)[WINNING_ROWS[row][0]] != EMPTY &&
			(*board)[WINNING_ROWS[row][0]] == (*board)[WINNING_ROWS[row][1]] &&
			(*board)[WINNING_ROWS[row][1]] == (*board)[WINNING_ROWS[row][2]])
				return ((*board)[WINNING_ROWS[row][0]]);
	}
	if (std::count(board->begin(), board->end(), EMPTY) == 0)
		return (TIE);
	else
		return (NO_ONE);
}

inline bool	isLegal(int move, std::vector<char>* const  board)
{
	return ((*board)[move] == EMPTY);
}

int			humanMove(std::vector<char>* const board, char human)
{
	int	move;

	move = askNumber("Where would you like to move?", (board->size() - 1));
	while (!isLegal(move, board))
	{
		std::cout << "\nThat square is already occupied, foolish human.\n";
		move = askNumber("Where would you like to move?", (board->size() - 1));
	}
	std::cout << "Fine...\n";
	return (move);
}

int			computerMove(std::vector<char> board, char computer)
{
	unsigned int move = 0;
	bool found = false;

	while (!found && move < board.size())
	{
		if (isLegal(move, &board)) {
			board[move] = computer;
			found = winner(&board) == computer;
			board[move] = EMPTY;
		}
		if (!found)
			move++;
	}
	if (!found)
	{
		char	human = opponent(computer);

		move = 0;
		while (!found && move < board.size())
		{
			if (isLegal(move, &board))
			{
				board[move] = human;
				found = winner(&board) == human;
				board[move] = EMPTY;
			}
			if (!found)
				move++;
		}
	}
	if (!found)
	{
		move = 0;
		unsigned int i = 0;

		const int	BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
		while (!found && i < board.size())
		{
			move = BEST_MOVES[i];
			if (isLegal(move, &board))
				found = true;
			i++;
		}
	}
	std::cout << "I shall take square number " << move << std::endl;
	return (move);
}

void	announceWinner(char winner, char computer, char human)
{
	if (winner == computer)
		std::cout << "Computer have won! As always...\n";
	else if (winner == human)
		std::cout << "Human have won! Using some cheats of course.\n";
	else
		std::cout << "It's a tie! Somehow.\n";
}