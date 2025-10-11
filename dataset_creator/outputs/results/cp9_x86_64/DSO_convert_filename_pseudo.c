
char * DSO_convert_filename(DSO *dso,char *filename)

{
  _func_3878 *p_Var1;
  char *pcVar2;
  
  if (dso == (DSO *)0x0) {
    ERR_new();
    pcVar2 = (char *)0x0;
    ERR_set_debug("../crypto/dso/dso_lib.c",0x113,"DSO_convert_filename");
    ERR_set_error(0x25,0xc0102,0);
  }
  else if ((filename == (char *)0x0) && (filename = dso->filename, filename == (char *)0x0)) {
    ERR_new();
    pcVar2 = (char *)0x0;
    ERR_set_debug("../crypto/dso/dso_lib.c",0x119,"DSO_convert_filename");
    ERR_set_error(0x25,0x6f,0);
  }
  else {
    if (((dso->flags & 1) == 0) &&
       (((p_Var1 = (_func_3878 *)dso->name_converter, p_Var1 != (_func_3878 *)0x0 ||
         (p_Var1 = dso->meth->dso_ctrl, p_Var1 != (_func_3878 *)0x0)) &&
        (pcVar2 = (*p_Var1)(dso,filename), pcVar2 != (char *)0x0)))) {
      return pcVar2;
    }
    pcVar2 = CRYPTO_strdup(filename,"../crypto/dso/dso_lib.c",0x123);
    if (pcVar2 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0x125,"DSO_convert_filename");
      ERR_set_error(0x25,0xc0100,0);
    }
  }
  return pcVar2;
}

