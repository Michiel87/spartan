#include <database.h>

struct database * initDatabase(struct database *adapter)
{

        int closeDb ()
        {

          adapter->close();
          // Clean up pointer
          return 0;
        };

        struct database *pdb, db;
        pdb = &db;

        db.connect = adapter->connect;
        db.insert = adapter->insert;
        db.remove = adapter->remove;
        db.sort = adapter->sort;
        db.search = adapter->search;
        db.close = closeDb;

        return pdb;
}
