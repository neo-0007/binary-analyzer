
undefined4 FUN_005cfe60(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (iVar1 = FUN_004f0cc0(), iVar1 == 0)) {
    uVar5 = 0;
    lVar6 = 0;
    if ((param_3 != 0) || (param_3 = FUN_004b2b10(), lVar6 = param_3, param_3 != 0)) {
      FUN_004b2c00(param_3);
      uVar2 = FUN_004b2df0(param_3);
      lVar3 = FUN_004b2df0(param_3);
      if ((((lVar3 != 0) && (iVar1 = FUN_004f0d70(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0))
          && (lVar4 = FUN_004b8260(*(undefined8 *)(param_2 + 0x10),uVar2), lVar4 != 0)) &&
         ((lVar3 = FUN_004b8260(*(undefined8 *)(param_2 + 0x18),lVar3), lVar3 != 0 &&
          (iVar1 = FUN_004b8190(*(undefined8 *)(param_2 + 0x20),1), iVar1 != 0)))) {
        *(undefined4 *)(param_2 + 0x28) = 1;
        uVar5 = 1;
      }
      FUN_004b2d50(param_3);
      FUN_004b2b50(lVar6);
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

