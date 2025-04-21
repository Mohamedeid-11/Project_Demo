#ifndef GLOBAL_H
#define GLOBAL_H

#include "dependencies.h"
#include "recipe.h"
#include "user.h"

extern int num_of_users;
extern QSharedPointer<User> users[1000];

extern QSharedPointer<User> loged_in_user;

extern int num_of_recipes;
extern short recipes_id_to_index[10000]; // hashtable to recipes IDs to help in deleteing recipes and saving data (-1 means doesn't exist)
extern QSharedPointer<Recipe> recipes[1000];


#endif // GLOBAL_H
