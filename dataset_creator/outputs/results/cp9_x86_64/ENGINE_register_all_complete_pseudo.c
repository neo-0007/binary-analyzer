
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ENGINE_register_all_complete(void)

{
  ENGINE *e;
  
  e = ENGINE_get_first();
  do {
    if (e == (ENGINE *)0x0) {
      return 1;
    }
    while (((byte)e[0x98] & 8) != 0) {
      e = ENGINE_get_next(e);
      if (e == (ENGINE *)0x0) {
        return 1;
      }
    }
    ENGINE_register_complete(e);
    e = ENGINE_get_next(e);
  } while( true );
}

