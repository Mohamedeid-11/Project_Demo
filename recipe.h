#ifndef RECIPE_H
#define RECIPE_H

#include "dependencies.h"

struct Recipe
{
    Recipe();
    ~Recipe();

    int id;
    int category;
    QString title;
    QString description;
    int cock_time;
    int level;
    int rates_sum = 0, rates_num = 0;

    int ing_num = 0;
    QString ingredients[100];

    void generate_id();

};

#endif // RECIPE_H
