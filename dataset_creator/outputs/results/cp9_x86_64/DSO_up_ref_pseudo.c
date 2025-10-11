
int DSO_up_ref(DSO *dso)

{
  int *piVar1;
  int iVar2;
  
  if (dso != (DSO *)0x0) {
    LOCK();
    piVar1 = &dso->references;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return (int)(0 < iVar2);
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_lib.c",0x61,"DSO_up_ref");
  ERR_set_error(0x25,0xc0102,0);
  return 0;
}

