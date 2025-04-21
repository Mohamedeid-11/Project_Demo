#include "global.h"

int num_of_users = 0;
QSharedPointer<User> users[1000];


QSharedPointer<User> loged_in_user = nullptr;


int num_of_recipes = 0;
QSharedPointer<Recipe> recipes[1000];

int next_id = 0;
short recipes_id_to_index[10000];       // hashtable to recipes IDs to help in deleteing recipes and saving data (-1 means doesn't exist)
