#include "recipe.h"
#include "global.h"

Recipe::Recipe() {}

Recipe::~Recipe() {}

void Recipe::generate_id()
{
    this->id = next_id;
    next_id++;
}
