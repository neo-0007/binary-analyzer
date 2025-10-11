
int DSO_set_filename(DSO *dso,char *filename)

{
  char *pcVar1;
  
  if ((dso != (DSO *)0x0) && (filename != (char *)0x0)) {
    if (dso->loaded_filename == (char *)0x0) {
      pcVar1 = CRYPTO_strdup(filename,"../crypto/dso/dso_lib.c",0xf3);
      if (pcVar1 != (char *)0x0) {
        CRYPTO_free(dso->filename);
        dso->filename = pcVar1;
        return 1;
      }
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0xf5,"DSO_set_filename");
      ERR_set_error(0x25,0xc0100,0);
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0xef,"DSO_set_filename");
      ERR_set_error(0x25,0x6e,0);
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_lib.c",0xeb,"DSO_set_filename");
  ERR_set_error(0x25,0xc0102,0);
  return 0;
}

