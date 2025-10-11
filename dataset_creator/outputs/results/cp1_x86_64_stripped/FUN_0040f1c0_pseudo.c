
bool FUN_0040f1c0(int *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = FUN_0040e520(param_2);
  if (param_3 != 0) {
    if (((iVar1 == 0x198) || (iVar1 == 0x494)) && (lVar3 = FUN_004ee2d0(param_3), lVar3 != 0)) {
      iVar2 = FUN_004ef870(lVar3);
      if (iVar2 == 0x494) {
        if (iVar1 == 0x198) {
          param_2 = 0x494;
        }
      }
      else if (iVar1 == 0x494) {
        param_2 = 0x198;
      }
    }
  }
  if ((param_1 != (int *)0x0) && (iVar1 = FUN_0040f1a0(param_1,param_2), iVar1 != 0)) {
    iVar1 = *param_1;
    *(long *)(param_1 + 8) = param_3;
    bVar4 = false;
    bVar5 = false;
    if (iVar1 == 0x74) {
      if (param_3 != 0) {
        iVar1 = FUN_004d7d50(param_3);
        bVar5 = iVar1 != 0;
      }
    }
    else if (iVar1 < 0x75) {
      bVar5 = bVar4;
      if (iVar1 == 6) {
        if (param_3 != 0) {
          iVar1 = FUN_0042add0(param_3);
          bVar5 = iVar1 != 0;
        }
      }
      else if ((iVar1 == 0x1c) && (param_3 != 0)) {
        iVar1 = FUN_004d36e0(param_3);
        bVar5 = iVar1 != 0;
      }
    }
    else if (((iVar1 == 0x198) || (iVar1 == 0x494)) && (param_3 != 0)) {
      iVar1 = FUN_004ebcc0(param_3);
      bVar5 = iVar1 != 0;
    }
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe | bVar5;
    return param_3 != 0;
  }
  return false;
}

