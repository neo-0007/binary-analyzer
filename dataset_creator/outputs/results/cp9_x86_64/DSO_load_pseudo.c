
DSO * DSO_load(DSO *dso,char *filename,DSO_METHOD *meth,int flags)

{
  _func_3874 *p_Var1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  bVar2 = false;
  if (dso == (DSO *)0x0) {
    dso = (DSO *)DSO_new_method_constprop_0();
    if (dso == (DSO *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0x75,"DSO_load");
      ERR_set_error(0x25,0xc0100,0);
      return (DSO *)0x0;
    }
    lVar4 = DSO_ctrl(dso,2,(long)flags,(void *)0x0);
    bVar2 = true;
    if (lVar4 < 0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0x7b,"DSO_load");
      ERR_set_error(0x25,100,0);
      goto LAB_004ce976;
    }
  }
  if (dso->filename == (char *)0x0) {
    if (filename == (char *)0x0) {
LAB_004ce940:
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0x90,"DSO_load");
      ERR_set_error(0x25,0x6f,0);
    }
    else {
      iVar3 = DSO_set_filename(dso,filename);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/dso/dso_lib.c",0x8b,"DSO_load");
        ERR_set_error(0x25,0x70,0);
      }
      else {
        if (dso->filename == (char *)0x0) goto LAB_004ce940;
        p_Var1 = dso->meth->dso_load;
        if (p_Var1 == (_func_3874 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/dso/dso_lib.c",0x94,"DSO_load");
          ERR_set_error(0x25,0x6c,0);
        }
        else {
          iVar3 = (*p_Var1)(dso);
          if (iVar3 != 0) {
            return dso;
          }
          ERR_new();
          ERR_set_debug("../crypto/dso/dso_lib.c",0x98,"DSO_load");
          ERR_set_error(0x25,0x67,0);
        }
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/dso/dso_lib.c",0x82,"DSO_load");
    ERR_set_error(0x25,0x6e,0);
  }
  if (!bVar2) {
    return (DSO *)0x0;
  }
LAB_004ce976:
  DSO_free(dso);
  return (DSO *)0x0;
}

