
DSO_FUNC_TYPE DSO_bind_func(DSO *dso,char *symname)

{
  _func_3876 *p_Var1;
  DSO_FUNC_TYPE pDVar2;
  
  if ((dso == (DSO *)0x0) || (symname == (char *)0x0)) {
    ERR_new();
    pDVar2 = (DSO_FUNC_TYPE)0x0;
    ERR_set_debug("../crypto/dso/dso_lib.c",0xa8,"DSO_bind_func");
    ERR_set_error(0x25,0xc0102,0);
  }
  else {
    p_Var1 = dso->meth->dso_bind_var;
    if (p_Var1 == (_func_3876 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0xac,"DSO_bind_func");
      ERR_set_error(0x25,0x6c,0);
      pDVar2 = (DSO_FUNC_TYPE)0x0;
    }
    else {
      pDVar2 = (DSO_FUNC_TYPE)(*p_Var1)(dso,symname);
      if (pDVar2 == (DSO_FUNC_TYPE)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/dso/dso_lib.c",0xb0,"DSO_bind_func");
        ERR_set_error(0x25,0x6a,0);
      }
    }
  }
  return pDVar2;
}

