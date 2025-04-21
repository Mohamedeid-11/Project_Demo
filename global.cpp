#include "global.h"

int num_of_users = 0;
// short user_id_to_index[10000] = {};
QSharedPointer<User> users[1000]; // we need it global as we can log in multible times

QSharedPointer<User> loged_in_user = nullptr;

int num_of_recipes = 0;
short recipes_id_to_index[10000]; // hashtable to recipes IDs to help in deleteing recipes and saving data (-1 means doesn't exist)
QSharedPointer<Recipe> recipes[1000];
