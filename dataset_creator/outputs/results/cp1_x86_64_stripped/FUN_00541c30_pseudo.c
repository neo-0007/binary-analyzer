
undefined8 FUN_00541c30(long *param_1,long param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (*param_1 == 0)) {
    *param_3 = 0x40;
    return 0;
  }
  uVar5 = 0;
  lVar2 = FUN_004b2a70(0);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_004b2c00(lVar2);
  lVar3 = FUN_004b2df0(lVar2);
  if ((lVar3 != 0) && (iVar1 = FUN_004b8190(lVar3,1), iVar1 != 0)) {
    iVar1 = FUN_004b7840(param_2,lVar3);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
      goto LAB_00541c9f;
    }
    lVar4 = FUN_004b8260(lVar3,*param_1);
    if ((lVar4 != 0) && (iVar1 = FUN_004bcb60(lVar3,1), iVar1 != 0)) {
      uVar5 = 1;
      iVar1 = FUN_004b7840(param_2,lVar3);
      if (-1 < iVar1) {
        *param_3 = *param_3 | 2;
        uVar5 = 0;
      }
      goto LAB_00541c9f;
    }
  }
  uVar5 = 0;
LAB_00541c9f:
  FUN_004b2d50(lVar2);
  FUN_004b2b50(lVar2);
  return uVar5;
}

