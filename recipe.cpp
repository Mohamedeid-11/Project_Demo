#include "recipe.h"
#include "global.h"

Recipe::Recipe() {}

Recipe::~Recipe() {}

void Recipe::generate_id()
{
    if(!num_of_recipes)
        this->id = 0;
    else
        this->id = recipes[num_of_recipes-1]->id + 1;
}

