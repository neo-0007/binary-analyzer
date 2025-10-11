
ulong FUN_00599650(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    iVar1 = FUN_004ae9e0(param_1,"    (no certificate)\n");
    return (ulong)(0 < iVar1);
  }
  iVar1 = FUN_004ae9e0(param_1,"    certificate\n");
  if ((0 < iVar1) && (iVar1 = FUN_00598ec0(param_1,param_2,0x2031f,0xffffffffffffffbf), iVar1 != 0))
  {
    iVar1 = FUN_0059bb20(param_2,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_004ae9e0(param_1,"        self-issued\n");
      if (iVar1 < 1) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_004ae9e0(param_1,&DAT_0081d1a9);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_00598ec0(param_1,param_2,0x2031f,0xffffffffffffffef);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_00598ec0(param_1,param_2,0x2031f,0xffffffffffffffdb);
    if (iVar1 != 0) {
      uVar2 = FUN_005a1b50(param_2);
      iVar1 = FUN_005a4dd0(uVar2);
      if ((iVar1 < 1) || (iVar1 = FUN_004ae9e0(param_1,"        not yet valid\n"), 0 < iVar1)) {
        uVar2 = FUN_005a1b60(param_2);
        iVar1 = FUN_005a4dd0(uVar2);
        if ((-1 < iVar1) || (iVar1 = FUN_004ae9e0(param_1,"        no more valid\n"), 0 < iVar1)) {
          uVar3 = FUN_00598ec0(param_1,param_2,0x2031f,~param_3 & 0xffffffffffffdfff);
          return uVar3;
        }
      }
    }
  }
  return 0;
}

