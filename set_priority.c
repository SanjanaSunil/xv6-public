#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

  if(argc <= 1 || argc >= 4){
    printf(1, "Usage: set_priority <pid> <priority>\n");
    exit();
  }
 
  if(atoi(argv[2]) < 0 || atoi(argv[2]) > 100){
    printf(1, "Priority should be between 0 and 100\n");
      exit();
  }

  set_priority(atoi(argv[1]), atoi(argv[2]));

  exit();
}
