
char * DSO_get_filename(DSO *dso)

{
  if (dso != (DSO *)0x0) {
    return dso->filename;
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_lib.c",0xe0,"DSO_get_filename");
  ERR_set_error(0x25,0xc0102,0);
  return (char *)0x0;
}

