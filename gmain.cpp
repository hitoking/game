#include"libOne.h"

void gmain()
{
	window(1920, 1080);
	int title = 0, play = 1, over = 2, state = title;
	repeat()
	{
		if (state == title)
		{
			//background(255, 200, 255);
			print("Title");
			//if (isTrgger(mouse_LBUTTON))
			{
				state = play;
			}
		}
	}