
undefined8 FUN_00533770(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 == 2) {
    puVar3 = (undefined4 *)FUN_004098f0();
    *param_4 = *puVar3;
    return 1;
  }
  if (param_2 == 3) {
    uVar2 = 0;
    if (0 < param_3) {
      piVar4 = (int *)FUN_004098f0();
      *piVar4 = param_3;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (param_2 == 0) {
      iVar1 = FUN_0040a180();
      piVar4 = (int *)FUN_004098f0(param_1);
      *piVar4 = iVar1 << 3;
      return 1;
    }
  }
  return uVar2;
}

