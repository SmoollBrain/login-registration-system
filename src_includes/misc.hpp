#ifndef MISC_H
#define MISC_H

#include <string>

class Misc
{
	public:
		static int getch();
		static std::string getpasswd(const char* prompt, bool show_asterisk);
		static void sleep(int time);
};

#endif // MISC_H