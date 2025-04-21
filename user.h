#ifndef USER_H
#define USER_H

#include "dependencies.h"

struct User
{
    User();
    ~User();

    bool isAdmin;
    QString username;
    QString password;

    int favorite_recipes_num = 0;
    int favorite_recipes[100];  // IDs of favorite recipes

    // void generate_id();
};

#endif // USER_H
