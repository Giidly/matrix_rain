#include "header.h"

void mx_chrrain(void) {
	curs_set(0);
	nodelay(stdscr, 1);
	time_t  d;
	srand((unsigned) time(&d));
	start_color();
	bool ict = false;
   	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	int max_x;
    int max_y;
	const char* alphabet[] = { "\u0410",
							   "\u0411",
							   "\u0412",
							   "\u0413",
							   "\u0414",
							   "\u0415",
							   "\u0416",
							   "\u0417",
							   "\u0418",
							   "\u0419",
							   "\u041A",
							   "\u041B",
							   "\u041C",
							   "\u041D",
							   "\u041E",
							   "\u041F",
							   "\u0420",
							   "\u0421",
							   "\u0422",
							   "\u0423",
							   "\u0424",
							   "\u0425",
							   "\u0426",
							   "\u0427",
							   "\u0428",
							   "\u0429",
							   "\u042A",
							   "\u042B",
							   "\u042C",
							   "\u042D",
							   "\u042E",
							   "\u042F",
							   "\u0430",
							   "\u0431",
							   "\u0432",
							   "\u0433",
							   "\u0434",
							   "\u0435",
							   "\u0436",
							   "\u0437",
							   "\u0438",
							   "\u0439",
							   "\u043A",
							   "\u043B",
							   "\u043C",
							   "\u043D",
							   "\u043E",
							   "\u043F",
							   "\u0440",
							   "\u0441",
							   "\u0442",
							   "\u0443",
							   "\u0444",
							   "\u0445",
							   "\u0446",
							   "\u0447",
							   "\u0448",
							   "\u0449",
							   "\u044A",
							   "\u044B",
							   "\u044C",
							   "\u044D",
							   "\u044E",
							   "\u044F",
							   "\u0401",
							   "\u0451"};
	int ind;
	char ch;	
	int delay = 50;
    getmaxyx(stdscr, max_y, max_x);
	int start[max_x];	
	for (int i = 0; i < max_x; i++)
		start[i] = -max_y + rand() % max_y;
	int delat[max_x];     
    for (int i = 0; i < max_x; i++)
        delat[i] = 0+rand() % max_y;
	int end[max_x];
	int tail[max_x];
	int pisY[max_x];
	int flag[max_x];
	for (int i = 0; i < max_x; i++)
         pisY[i] = 0;
	int y;
	y = 0;
	move(10, 0);
	const char* text[] = {"Э",
						  "т",
						  "о",
						  " ",
						  "н",
						  "а",
						  "ш",
						  " ",
						  "r",
						  "a",
						  "c",
						  "e",
						  "0",
						  "3",
						  " ",
						  "и",
						  " ",
						  "о",
						  "н",
						  " ",
						  "р",
						  "а",
						  "б",
						  "о",
						  "т",
						  "а",
						  "е",
						  "т",
						  ".",
						  "\n",
						  "Е",
						  "щ",
						  "ё",
						  " ",
						  "т",
						  "у",
						  "т",
						  " ",
						  "е",
						  "с",
						  "т",
						  "ь",
						  " ",
						  "у",
						  "c",
						  "к",
						  "о",
						  "р",
						  "е",
						  "н",
						  "и",
						  "е",
						  " ",
						  "и",
						  " ",
						  "з",
						  "а",
						  "м",
						  "е",
						  "д",
						  "л",
						  "е",
						  "н",
						  "и",
						  "е",
						  " ",
						  "э",
						  "ф",
						  "ф",
						  "е",
						  "к",
						  "т",
						  "а",
						  " ",
						  "н",
						  "а",
						  " ",
						  "к",
						  "л",
						  "а",
						  "в",
						  "и",
						  "ш",
						  "и",
						  " ",
						  "\"",
						  "-",
						  "\"",
						  " ",
						  "и",
						  " ",
						  "\"",
						  "+",
						  "\"",
						  " ",
						  "с",
						  "о",
						  "о",
						  "т",
						  "в",
						  "е",
						  "т",
						  "с",
						  "т",
						  "в",
						  "е",
						  "н",
						  "н",
						  "о",
						  ".",
						  "\n",
						  "Т",
						  "а",
						  "к",
						  " ",
						  "ж",
						  "е",
						  " ",
						  "м",
						  "о",
						  "ж",
						  "н",
						  "о",
						  " ",
						  "п",
						  "е",
						  "р",
						  "е",
						  "к",
						  "л",
						  "ю",
						  "ч",
						  "и",
						  "т",
						  "ь",
						  " ",
						  "ц",
						  "в",
						  "е",
						  "т",
						  " ",
						  "т",
						  "е",
						  "к",
						  "с",
						  "т",
						  "а",
						  " ",
						  "н",
						  "а",
						  " ",
						  "\"",
						  "c",
						  "\"",
						  ".",
						  NULL};
	int r = 0;
	ch = getch();
	if (ch == 'q'){
			return;
	}
	while (*(text + r) != NULL) {
		move(10, 0);
		attron(COLOR_PAIR(2));
		for (int i = 0; i < r; i++) {
			addstr(*(text + i));
		}
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		addstr(*(text + r));
		attroff(COLOR_PAIR(1));
		r++;
		refresh();
		usleep(1000000);
		ch = getch();
		if (ch == 'q'){
			return;
		}
	}
	move(10, 0);
	attron(COLOR_PAIR(2));
	addstr("Это наш race03 и он работает.\nЕщё тут есть укорение и замедление эффекта на клавиши \"-\" и \"+\" соответственно.\nТак же можно переключить цвет текста на \"c\".");
	attroff(COLOR_PAIR(2));
	refresh();
	usleep(6000000);
	move(10, 0);
	attron(COLOR_PAIR(2));
    addstr("                               \n                                                                                                                 \n                                                ");
	attroff(COLOR_PAIR(2));
	ch = getch();
	if (ch == 'q'){
		return;
	}
    while (1) {		
	int i;
	i = 0; 
	while (i < max_x) {
		if ( i % 3 == 0) {
	 		end[i] = start[i] - delat[i];
			if (flag[i] == 1) {
                 if (tail[i] == max_y+1)
                     flag[i] = 0;
                 move(tail[i], i);
                 printw(" ");
                 tail[i]++;
              }
			if (start[i] == max_y) {
                 pisY[i] = 0;
                 start[i] = 0;
                 flag[i] = 1;
                 tail[i] = max_y - delat[i];
				 delat[i] = 0+rand() % max_y;
			}
			if(end[i] >= 0) {
				printw(" ");
                move(end[i], i);
                printw(" ");
            }  
			if (start[i] >= 0) {
				ind = rand() % 66;
				attron(COLOR_PAIR(1));
				mvaddstr(pisY[i], i, alphabet[ind]);
				attroff(COLOR_PAIR(1));
				if (!ict) {
					attron(COLOR_PAIR(2));
					mvaddstr(pisY[i] - 1, i, alphabet[ind]);
					attroff(COLOR_PAIR(2));
					if (start[i] == max_y - 1) {
						ind = rand() % 66;
						attron(COLOR_PAIR(2));
						mvaddstr(pisY[i], i, alphabet[ind]);
						attroff(COLOR_PAIR(2));
					}
				}
				else {
					attron(COLOR_PAIR(3));
					mvaddstr(pisY[i] - 1, i, alphabet[ind]);
					attroff(COLOR_PAIR(3));
					if (start[i] == max_y - 1) {
						ind = rand() % 66;
						attron(COLOR_PAIR(3));
						mvaddstr(pisY[i], i, alphabet[ind]);
						attroff(COLOR_PAIR(2));
					}
				}
            }		
		}	
		i++;
	}
		for(int i = 0; i<max_x; i++) {
			if (start[i] >= 0)
				pisY[i]++;
		}
        usleep(1000 * delay);
        refresh();
		for(int i = 0; i<max_x; i++)          
			start[i]++;	
		noecho();
    	ch = getch();
		switch (ch) {
		case 'q':
			return;
		case '+':
			if (delay > 10) {
				delay -= 10;
			}
			break;
		case '-':
			if (delay < 100) {
				delay += 10;
			}
			break;
		case 'c':
			if (ict) {
				ict = false;
			}
			else {
				ict = true;
			}
			break;
		}
	}
}

int main() {
	setlocale(LC_ALL, "");
    initscr();
	mx_chrrain();	
  	endwin();  
   return 0;
}
