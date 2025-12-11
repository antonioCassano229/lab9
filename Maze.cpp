#include "Maze.h"
#include <iostream>
#include <fstream> 


Maze:Maze(String name_file){

    std::fstream fs(name_file, std::fstream::in | std::fstream::out);

    
    
    

}

boolean Maze:iswall(int l, int h){

  if (lab[l][h] == *)
   return true;
  else 
   return false;
}
