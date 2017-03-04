#pragma once

#include <global_include.h>

#include <homebrew.h>
#include <font.h>

#define ITEM_HEIGHT 90
#define ITEM_POSX 62

class ListItem {
public:
	 ListItem(Homebrew hb);
	
	int Display(int posY, int highlight);
private:
	vita2d_texture *img_itm_panel;
	vita2d_texture *img_itm_panel_highlight;

	Font font_25;
	Font font_35;

	Homebrew homebrew;
	
	int display(int posY);
	int displayHighlight(int posY);

};

