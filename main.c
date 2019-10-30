#include <stdio.h>
#include <stdlib.h>

#include <database.c>
#include <sqlAdapter.c>

extern struct database * initDatabase(struct database);

int main(void) 
{
        struct database *db;
        db = initDatabase(get_sql_adapter());

        db->connect();
        return 0;
}