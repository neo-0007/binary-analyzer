
undefined8 FUN_005452d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00544d50();
  if (iVar1 != 0) {
    iVar1 = FUN_004074f0(param_1[2],param_2[2]);
    if (iVar1 != 0) {
      iVar1 = FUN_004074f0(param_1[3],param_2[3]);
      if (iVar1 != 0) {
        iVar1 = FUN_004074f0(param_1[1],param_2[1]);
        if (iVar1 != 0) {
          uVar3 = *param_2;
          uVar2 = 1;
          goto LAB_00545308;
        }
      }
    }
  }
  FUN_00406b30(param_1[2]);
  FUN_00406b30(param_1[3]);
  FUN_00406b30(param_1[1]);
  uVar3 = 0;
  uVar2 = 0;
LAB_00545308:
  *param_1 = uVar3;
  return uVar2;
}

