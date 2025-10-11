
undefined8 FUN_00481af0(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1[0x2c];
  if (lVar3 == 0) {
    lVar3 = FUN_004069d0(*param_1,(long)param_1 + 0x19,param_1[1]);
    param_1[0x2c] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar2 = thunk_FUN_007129d0(param_2);
    if (uVar2 < 0x32) {
      iVar1 = FUN_0040ab70(lVar3,param_2);
      if (iVar1 != 0) {
        FUN_0041c470((long)param_1 + 0x19,param_2,0x32);
        return 1;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/sm2_sig.c",0x6a,"sm2sig_set_mdname");
    FUN_0051f8f0(0x39,0x7a,"digest=%s",param_2);
    return 0;
  }
  return 1;
}

