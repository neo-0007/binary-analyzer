
undefined8
FUN_00542b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  int iVar1;
  undefined8 uVar2;
  int local_3c;
  
  iVar1 = FUN_004b8190(param_4,2);
  local_3c = 2;
  if (iVar1 != 0) {
    while (iVar1 = FUN_004b4eb0(param_3,param_4,param_6,param_5,param_1,param_2), iVar1 != 0) {
      uVar2 = FUN_004b75a0();
      iVar1 = FUN_004b7840(param_3,uVar2);
      if (0 < iVar1) {
        *param_8 = local_3c;
        return 1;
      }
      iVar1 = FUN_004bcc70(param_4,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_004b7840(param_4,param_7);
      if (-1 < iVar1) {
        return 0;
      }
      local_3c = local_3c + 1;
    }
  }
  return 0;
}

