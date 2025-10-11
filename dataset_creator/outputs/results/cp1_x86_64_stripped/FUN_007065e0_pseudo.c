
ulong FUN_007065e0(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_1[0x30] == 0) {
    param_1[0x30] = 0xffffffff;
  }
  else if (param_1[0x30] != 0xffffffff) {
    return 0xffffffff;
  }
  uVar2 = *param_1;
  if ((uVar2 & 0x800) == 0) {
    pbVar5 = *(byte **)(param_1 + 2);
    pbVar6 = *(byte **)(param_1 + 4);
  }
  else {
    pbVar5 = *(byte **)(param_1 + 10);
    if (*(byte **)(param_1 + 8) < pbVar5) {
      lVar1 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar1 - 0x93f160U) {
        FUN_00703130();
      }
      iVar3 = (**(code **)(lVar1 + 0x18))(param_1,0xffffffff);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar2 = *param_1;
      pbVar5 = *(byte **)(param_1 + 10);
    }
    pbVar6 = *(byte **)(param_1 + 4);
    if ((uVar2 & 0x100) == 0) {
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
      if (pbVar6 < pbVar5) {
        *(byte **)(param_1 + 4) = pbVar5;
        pbVar6 = pbVar5;
      }
    }
    else {
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x14);
    }
    uVar2 = uVar2 & 0xfffff7ff;
    *(byte **)(param_1 + 2) = pbVar5;
    *(byte **)(param_1 + 0xc) = pbVar5;
    *(byte **)(param_1 + 8) = pbVar5;
    *param_1 = uVar2;
  }
  if (pbVar5 < pbVar6) {
    return (ulong)*pbVar5;
  }
  pbVar5 = pbVar6;
  if ((uVar2 & 0x100) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x16);
    *(byte **)(param_1 + 0x16) = pbVar6;
    *param_1 = uVar2 & 0xfffffeff;
    pbVar6 = *(byte **)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 6);
    *(byte **)(param_1 + 6) = pbVar6;
    *(byte **)(param_1 + 2) = pbVar6;
    *(byte **)(param_1 + 4) = pbVar5;
    if (pbVar6 < pbVar5) {
      return (ulong)*pbVar6;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_007104f0(*(long *)(param_1 + 0x12),pbVar5);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
    }
  }
  else {
    iVar3 = FUN_00705d10(param_1);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  lVar1 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar1 - 0x93f160U) {
    FUN_00703130();
  }
                    /* WARNING: Could not recover jumptable at 0x007066ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar1 + 0x20))(param_1);
  return uVar4;
}

