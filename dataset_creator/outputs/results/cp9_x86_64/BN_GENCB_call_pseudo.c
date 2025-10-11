
int BN_GENCB_call(BN_GENCB *cb,int a,int b)

{
  int iVar1;
  
  if (cb != (BN_GENCB *)0x0) {
    if (cb->ver != 1) {
      if (cb->ver != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x005b5bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(cb->cb).cb_1)(a,b,cb);
      return iVar1;
    }
    if ((cb->cb).cb_1 != (_func_414 *)0x0) {
      (*(cb->cb).cb_1)(a,b,cb->arg);
      return 1;
    }
  }
  return 1;
}

