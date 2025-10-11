
uint FUN_00708100(uint *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar4 = *(ulong *)(param_1 + 2);
  uVar1 = *(ulong *)(param_1 + 6);
  if (uVar1 < uVar4) {
    uVar5 = uVar4;
    if ((uVar6 & 0x100) == 0) {
      if (*(byte *)(uVar4 - 1) == param_2) {
        *(ulong *)(param_1 + 2) = uVar4 - 1;
        goto LAB_00708145;
      }
      if (*(long *)(param_1 + 0x12) == 0) goto LAB_00708250;
      iVar2 = FUN_00705d10(param_1,uVar4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar4 = *(ulong *)(param_1 + 2);
      uVar6 = *param_1;
      uVar5 = *(ulong *)(param_1 + 0x16);
      lVar3 = *(long *)(param_1 + 0x12);
LAB_00708220:
      *(long *)(param_1 + 6) = lVar3;
      *param_1 = uVar6 | 0x100;
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 4);
      *(ulong *)(param_1 + 0x12) = uVar4;
      *(ulong *)(param_1 + 2) = uVar5;
      *(ulong *)(param_1 + 4) = uVar5;
    }
  }
  else {
    if ((uVar6 & 0x100) == 0) {
      lVar3 = *(long *)(param_1 + 0x12);
      if (lVar3 == 0) {
LAB_00708250:
        lVar3 = FUN_007101b0(0x80);
        if (lVar3 == 0) {
          return 0xffffffff;
        }
        uVar5 = lVar3 + 0x80;
        *(long *)(param_1 + 0x12) = lVar3;
        *(ulong *)(param_1 + 0x14) = uVar5;
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x16);
      }
      goto LAB_00708220;
    }
    lVar7 = *(long *)(param_1 + 4) - uVar1;
    lVar3 = FUN_007101b0(lVar7 * 2);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    uVar5 = lVar7 + lVar3;
    thunk_FUN_00713a50(uVar5,uVar1,lVar7);
    FUN_007104f0(uVar1);
    *(long *)(param_1 + 6) = lVar3;
    *(ulong *)(param_1 + 0x14) = uVar5;
    *(long *)(param_1 + 4) = lVar3 + lVar7 * 2;
  }
  *(ulong *)(param_1 + 2) = uVar5 - 1;
  *(char *)(uVar5 - 1) = (char)param_2;
LAB_00708145:
  return param_2 & 0xff;
}

