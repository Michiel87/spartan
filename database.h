struct database {
  int (*connect)();
  int (*insert)();
  int (*remove)();
  int (*sort)();
  int (*search)();
  int (*close)();
};