
ulong FUN_004b5f70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,long param_10,undefined8 param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_RDX;
  
  iVar1 = FUN_004beb80();
  if (((((iVar1 == 0) || (*(int *)(param_2 + 1) != 0x10)) || (*(int *)(param_3 + 1) != 0x10)) ||
      ((iVar1 = FUN_004b7bb0(param_4), iVar1 != 0x400 || (*(int *)(param_7 + 1) != 0x10)))) ||
     ((*(int *)(param_8 + 1) != 0x10 || (iVar1 = FUN_004b7bb0(param_9), iVar1 != 0x400)))) {
    uVar2 = FUN_004b4e80(param_1,param_2,param_3,param_4,param_11,param_5);
    uVar3 = FUN_004b4e80(param_6,param_7,param_8,param_9,param_11,param_10);
    lVar6 = 0;
    lVar4 = 0;
    uVar5 = (ulong)(uVar3 & uVar2);
LAB_004b5fef:
    uVar2 = (uint)uVar5;
    if (param_10 == 0) goto LAB_004b6170;
  }
  else {
    lVar4 = FUN_004b8240(param_1,0x10,extraout_RDX,param_4);
    if ((lVar4 == 0) || (uVar5 = FUN_004b8240(param_6,0x10), uVar5 == 0)) {
      lVar6 = 0;
      lVar4 = 0;
      uVar5 = 0;
      goto LAB_004b5fef;
    }
    lVar4 = param_5;
    if ((param_5 == 0) &&
       ((lVar4 = FUN_004b9790(), lVar4 == 0 ||
        (uVar5 = FUN_004b9860(lVar4,param_4,param_11), (int)uVar5 == 0)))) {
      if (param_10 != 0) {
        uVar2 = 0;
        goto LAB_004b6193;
      }
      lVar6 = 0;
LAB_004b6168:
      uVar5 = 0;
    }
    else {
      lVar6 = param_10;
      if (param_10 != 0) {
LAB_004b60c5:
        uVar2 = FUN_004c08c0(*param_1,*param_2,*param_3,*param_4,*(undefined8 *)(lVar4 + 8),
                             *(undefined8 *)(lVar4 + 0x50),*param_6,*param_7,*param_8,*param_9,
                             *(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x50),0x400,uVar5);
        *(undefined4 *)(param_1 + 1) = 0x10;
        *(undefined4 *)(param_1 + 2) = 0;
        FUN_004b8490(param_1);
        *(undefined4 *)(param_6 + 1) = 0x10;
        *(undefined4 *)(param_6 + 2) = 0;
        FUN_004b8490(param_6);
        uVar5 = (ulong)uVar2;
        goto LAB_004b5fef;
      }
      lVar6 = FUN_004b9790();
      if (lVar6 == 0) goto LAB_004b6168;
      uVar5 = FUN_004b9860(lVar6,param_9,param_11);
      if ((int)uVar5 != 0) goto LAB_004b60c5;
    }
LAB_004b6170:
    uVar2 = (uint)uVar5;
    FUN_004b9810(lVar6);
    uVar5 = uVar5 & 0xffffffff;
  }
  if (param_5 != 0) {
    return uVar5;
  }
LAB_004b6193:
  FUN_004b9810(lVar4);
  return (ulong)uVar2;
}

