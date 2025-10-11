
int ENGINE_set_id(ENGINE *e,char *id)

{
  if (id != (char *)0x0) {
    *(char **)e = id;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_lib.c",0xc5,"ENGINE_set_id");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}

