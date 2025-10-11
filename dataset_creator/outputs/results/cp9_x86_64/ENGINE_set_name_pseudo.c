
int ENGINE_set_name(ENGINE *e,char *name)

{
  if (name != (char *)0x0) {
    *(char **)(e + 8) = name;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_lib.c",0xcf,"ENGINE_set_name");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}

