
undefined8 FUN_00529000(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_004098f0();
  uVar3 = 1;
  if (param_3 != 0 || param_2 != 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_004098b0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_0040a180(param_1);
        FUN_0048a8b0(param_2,iVar1 * 8,lVar2);
      }
      else {
        iVar1 = FUN_0040a180(param_1);
        FUN_0048a5f0(param_2,iVar1 * 8,lVar2);
      }
      if (param_3 == 0) {
        *(undefined8 *)(lVar2 + 0xf8) = 0;
        return 1;
      }
    }
    iVar1 = FUN_00409920(param_1);
    uVar3 = 0;
    if (-1 < iVar1) {
      thunk_FUN_00713a50(param_1 + 0x28,param_3);
      *(long *)(lVar2 + 0xf8) = param_1 + 0x28;
      return 1;
    }
  }
  return uVar3;
}

