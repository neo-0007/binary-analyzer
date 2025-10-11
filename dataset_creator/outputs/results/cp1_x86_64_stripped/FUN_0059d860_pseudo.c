
undefined4 FUN_0059d860(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2[1] != 0x16) {
    return 1;
  }
  lVar3 = *(long *)(param_2 + 2);
  if ((lVar3 != 0) && (*param_2 != 0)) {
    lVar4 = (long)*param_2;
    lVar2 = thunk_FUN_007134f0(lVar3,0,lVar4);
    if (lVar2 == 0) {
      if (*param_1 == 0) {
        lVar3 = FUN_00436420(FUN_0059c070);
        *param_1 = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar4 = (long)*param_2;
        lVar3 = *(long *)(param_2 + 2);
      }
      lVar3 = FUN_0041c400(lVar3,lVar4,"../crypto/x509/v3_utl.c",0x21d);
      if (lVar3 == 0) {
        FUN_0059d850(*param_1);
        *param_1 = 0;
        return 0;
      }
      iVar1 = FUN_00435f40(*param_1,lVar3);
      if (iVar1 == -1) {
        iVar1 = FUN_00435f80(*param_1,lVar3);
        if (iVar1 == 0) {
          FUN_0041ad60(lVar3,"../crypto/x509/v3_utl.c",0x22a);
          FUN_0059d850(*param_1);
          *param_1 = 0;
          return 0;
        }
      }
      else {
        FUN_0041ad60(lVar3,"../crypto/x509/v3_utl.c",0x226);
      }
    }
  }
  return 1;
}

