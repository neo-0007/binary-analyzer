
long DSO_ctrl(DSO *dso,int cmd,long larg,void *parg)

{
  _func_3877 *UNRECOVERED_JUMPTABLE;
  DSO_FUNC_TYPE pDVar1;
  long lVar2;
  undefined4 in_register_00000034;
  
  if (dso == (DSO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dso/dso_lib.c",0xc3,"DSO_ctrl");
    ERR_set_error(0x25,0xc0102,0);
    lVar2 = -1;
  }
  else {
    if (cmd == 2) {
      dso->flags = (uint)larg;
      return 0;
    }
    if (cmd == 3) {
      dso->flags = dso->flags | (uint)larg;
      return 0;
    }
    if (cmd == 1) {
      lVar2 = (long)dso->flags;
    }
    else {
      if ((dso->meth != (DSO_METHOD *)0x0) &&
         (UNRECOVERED_JUMPTABLE = dso->meth->dso_bind_func,
         UNRECOVERED_JUMPTABLE != (_func_3877 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004ce6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pDVar1 = (*UNRECOVERED_JUMPTABLE)(dso,(char *)CONCAT44(in_register_00000034,cmd));
        return (long)pDVar1;
      }
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0xd7,"DSO_ctrl");
      ERR_set_error(0x25,0x6c,0);
      lVar2 = -1;
    }
  }
  return lVar2;
}

