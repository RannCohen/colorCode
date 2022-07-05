#include <stdio.h>

/* FONT */
#define NORMAL  		   "\x1b[m"

#define BLACK   		   "\x1b[30m"
#define RED     		   "\x1b[31m"
#define GREEN   		   "\x1b[32m"
#define YELLOW  		   "\x1b[33m"
#define BLUE			   "\x1b[34m"
#define MAGENTA 		   "\x1b[35m"
#define CYAN    		   "\x1b[36m"
#define WHITE   		   "\x1b[37m"

/* BACKGROUND */
#define BLACK_BACKGROUND   "\x1b[40m"
#define RED_BACKGROUND     "\x1b[41m"
#define GREEN_BACKGROUND   "\x1b[42m"
#define YELLOW_BACKGROUND  "\x1b[43m"
#define BLUE_BACKGROUND	   "\x1b[44m"
#define MAGENTA_BACKGROUND "\x1b[45m"
#define CYAN_BACKGROUND    "\x1b[46m"
#define WHITE_BACKGROUND   "\x1b[47m"

/* FONT & BACKGROUND */
#define RED_TXT_GREEN_BG   "\x1b[31;42m"
#define RED_TXT_YELLOW_BG  "\x1b[31;43m"
#define RED_TXT_BLUE_BG    "\x1b[31;44m"
#define RED_TXT_MAGENTA_BG "\x1b[31;45m"
#define RED_TXT_CYAN_BG    "\x1b[31;46m"
#define RED_TXT_WHITE_BG   "\x1b[31;47m"

#define GREEN_TXT_RED_BG     "\x1b[32;41m"
#define GREEN_TXT_YELLOW_BG  "\x1b[32;43m"
#define GREEN_TXT_BLUE_BG    "\x1b[32;44m"
#define GREEN_TXT_MAGENTA_BG "\x1b[32;45m"
#define GREEN_TXT_CYAN_BG    "\x1b[32;46m"
#define GREEN_TXT_WHITE_BG   "\x1b[32;47m"

#define YELLOW_TXT_GREEN_BG   "\x1b[33;42m"
#define YELLOW_TXT_RED_BG     "\x1b[33;41m"
#define YELLOW_TXT_BLUE_BG    "\x1b[33;44m"
#define YELLOW_TXT_MAGENTA_BG "\x1b[33;45m"
#define YELLOW_TXT_CYAN_BG    "\x1b[33;46m"
#define YELLOW_TXT_WHITE_BG   "\x1b[33;47m"

#define BLUE_TXT_GREEN_BG     "\x1b[34;42m"
#define BLUE_TXT_YELLOW_BG    "\x1b[34;43m"
#define BLUE_TXT_RED_BG       "\x1b[34;41m"
#define BLUE_TXT_MAGENTA_BG   "\x1b[34;45m"
#define BLUE_TXT_CYAN_BG      "\x1b[34;46m"
#define BLUE_TXT_WHITE_BG     "\x1b[34;47m"

#define MAGENTA_TXT_GREEN_BG   "\x1b[35;42m"
#define MAGENTA_TXT_YELLOW_BG  "\x1b[35;43m"
#define MAGENTA_TXT_BLUE_BG    "\x1b[35;44m"
#define MAGENTA_TXT_RED_BG     "\x1b[35;41m"
#define MAGENTA_TXT_CYAN_BG    "\x1b[35;46m"
#define MAGENTA_TXT_WHITE_BG   "\x1b[35;47m"

#define CYAN_TXT_GREEN_BG   "\x1b[36;42m"
#define CYAN_TXT_YELLOW_BG  "\x1b[36;43m"
#define CYAN_TXT_BLUE_BG    "\x1b[36;44m"
#define CYAN_TXT_MAGENTA_BG "\x1b[36;45m"
#define CYAN_TXT_RED_BG     "\x1b[36;41m"
#define CYAN_TXT_WHITE_BG   "\x1b[36;47m"

#define WHITE_TXT_GREEN_BG   "\x1b[37;42m"
#define WHITE_TXT_YELLOW_BG  "\x1b[37;43m"
#define WHITE_TXT_BLUE_BG    "\x1b[37;44m"
#define WHITE_TXT_MAGENTA_BG "\x1b[37;45m"
#define WHITE_TXT_CYAN_BG    "\x1b[37;46m"
#define WHITE_TXT_RED_BG     "\x1b[37;41m"



int main(void)
{
	printf("\n");
	/* Just text coloring */
	printf("%sThis is a Red line%s\n", RED, NORMAL);
	printf("%sThis is a GREEN line%s\n", GREEN, NORMAL);
	printf("%sThis is a YELLOW line%s\n", YELLOW, NORMAL);
	printf("%sThis is a BLUE line%s\n", BLUE, NORMAL);
	printf("%sThis is a MAGENTA line%s\n", MAGENTA, NORMAL);
	printf("%sThis is a CYAN line%s\n", CYAN, NORMAL);
	printf("%sThis is a WHITE line%s\n", WHITE, NORMAL);
	printf("\n");
	
	/* Just background */
	printf("%sThis is a Red background%s\n", RED_BACKGROUND, NORMAL);
	printf("%sThis is a GREEN background%s\n", GREEN_BACKGROUND, NORMAL);
	printf("%sThis is a YELLOW background%s\n", YELLOW_BACKGROUND, NORMAL);
	printf("%sThis is a BLUE background%s\n", BLUE_BACKGROUND, NORMAL);
	printf("%sThis is a MAGENTA background%s\n", MAGENTA_BACKGROUND, NORMAL);
	printf("%sThis is a CYAN background%s\n", CYAN_BACKGROUND, NORMAL);
	printf("%sThis is a WHITE background%s\n", WHITE_BACKGROUND, NORMAL);
	printf("\n");

	/* Text with background */
	printf("%sThis is RED text on GREEN background%s\n", RED_TXT_GREEN_BG, NORMAL);
	printf("%sThis is RED text on YELLOW background%s\n", RED_TXT_YELLOW_BG, NORMAL);
	printf("%sThis is RED text on BLUE background%s\n", RED_TXT_BLUE_BG, NORMAL);
	printf("%sThis is RED text on MAGENTA background%s\n", RED_TXT_MAGENTA_BG, NORMAL);
	printf("%sThis is RED text on CYAN background%s\n", RED_TXT_CYAN_BG, NORMAL);
	printf("%sThis is RED text on WHITE background%s\n", RED_TXT_WHITE_BG, NORMAL);
	printf("\n");
	printf("%sThis is GREEN text on RED background%s\n", GREEN_TXT_RED_BG, NORMAL);
	printf("%sThis is GREEN text on YELLOW background%s\n", GREEN_TXT_YELLOW_BG, NORMAL);
	printf("%sThis is GREEN text on BLUE background%s\n", GREEN_TXT_BLUE_BG, NORMAL);
	printf("%sThis is GREEN text on MAGENTA background%s\n", GREEN_TXT_MAGENTA_BG, NORMAL);
	printf("%sThis is GREEN text on CYAN background%s\n", GREEN_TXT_CYAN_BG, NORMAL);
	printf("%sThis is GREEN text on WHITE background%s\n", GREEN_TXT_WHITE_BG, NORMAL);
	printf("\n");
	return 0;
}
