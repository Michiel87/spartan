#include <stdio.h>

#include <database.h>
#include <sqlite3.h>

int connect ()
{
        sqlite3 *db;
        
        char *zErrMsg = 0;
        int status;

        status = sqlite3_open("test.db", &db);
        
        if (status != 0) {
                fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
                printf("Status: %d\n", status);
                exit(0);
        } else {
                fprintf(stderr, "Opened database successfully\n");
                printf("Status: %d\n", status);
        }

        sqlite3_close(db);
        return 0;
}

int insert () 
{

}

int remove () 
{

}

int sort () 
{

}

int search () 
{

}

struct database * get_sql_adapter () {
        struct database *sqlAdapter, adapter;
        sqlAdapter = &adapter;

        sqlAdapter->connect = connect;
        sqlAdapter->insert = insert;
        sqlAdapter->remove = remove;
        sqlAdapter->sort = sort;
        sqlAdapter->search = search;

        return sqlAdapter;
}

