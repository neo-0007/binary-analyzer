
undefined8 FUN_00541e10(long param_1,long param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  if ((param_2 == 0) || (param_1 == 0)) {
    *param_3 = 0x40;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b75a0();
    iVar1 = FUN_004b7840(param_2,uVar2);
    if (iVar1 < 0) {
      *param_3 = *param_3 | 0x10;
      return 0;
    }
    iVar1 = FUN_004b7840(param_2,param_1);
    uVar2 = 1;
    if (-1 < iVar1) {
      *param_3 = *param_3 | 0x20;
      return 0;
    }
  }
  return uVar2;
}

