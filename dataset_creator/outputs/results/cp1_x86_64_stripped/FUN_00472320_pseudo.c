
undefined8 FUN_00472320(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043b840();
  if ((param_2 == 8) && (iVar2 != 0)) {
    uVar1 = *param_1;
    lVar3 = FUN_004ee2d0(uVar1);
    if (lVar3 != 0) {
      iVar2 = FUN_004ef870(lVar3);
      if (iVar2 != 0x494) {
        *param_1 = 0;
        return uVar1;
      }
    }
  }
  return 0;
}

