#ifndef MAP_H
#define MAP_H
#endif

#include "Tile.h"
#include <vector>

class Minegen {
    public:
        int boardWidth, boardHeight;
        int mines;
        std::vector<std::vector<Tile>> mineMap;
        Minegen(int w, int h, int mine);
        std::vector<std::vector<Tile>> init();        
};
