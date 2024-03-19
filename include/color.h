#ifdef NO_COLOR

#define get_normal_color(a)
#define set_normal_color(a)
#define set_white_text(a)
#define set_red_text(a)
#define set_gray_text(a)

#else

#ifdef WIN32
#include <windows.h>

static CONSOLE_SCREEN_BUFFER_INFO console_info;
#endif

static void get_normal_color(void)
{
#ifdef WIN32
	GetConsoleScreenBufferInfo( GetStdHandle( STD_OUTPUT_HANDLE ), &console_info );
#endif
}

static void set_normal_color(void)
{
#ifdef WIN32
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), console_info.wAttributes );
#else
	printf("\033[0;37m");
#endif
}

static void set_white_text(void)
{
#ifdef WIN32
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0F );
#else
	printf("\033[1;37m");
#endif
}

static void set_red_text(void)
{
#ifdef WIN32
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0C );
#else
	printf("\033[1;31m");
#endif
}

#ifndef MAKEISO
static void set_gray_text(void)
{
#ifdef WIN32
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x08 );
#else
	printf("\033[1;30m");
#endif
}
#endif

#endif