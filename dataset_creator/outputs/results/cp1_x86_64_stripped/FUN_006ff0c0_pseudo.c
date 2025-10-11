
int FUN_006ff0c0(uint *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  
  puVar7 = *(ulong **)(param_1 + 0x28);
  uVar9 = *param_1;
  uVar4 = *puVar7;
  uVar3 = puVar7[2];
  if (uVar3 < uVar4) {
    uVar8 = uVar4;
    if ((uVar9 & 0x100) != 0) goto LAB_006ff0fd;
    iVar5 = (int)*(char *)(*(long *)(param_1 + 2) + -1);
    if (iVar5 == param_2) {
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + -1;
      return iVar5;
    }
    if (puVar7[8] == 0) {
LAB_006ff228:
      uVar3 = FUN_007101b0(0x200);
      if (uVar3 == 0) {
        return -1;
      }
      uVar8 = uVar3 + 0x200;
      puVar7[10] = uVar8;
      puVar7[8] = uVar3;
      puVar7[9] = uVar8;
    }
    else {
      iVar5 = FUN_006fed40(param_1,uVar4);
      if (iVar5 != 0) {
        return -1;
      }
      puVar7 = *(ulong **)(param_1 + 0x28);
      uVar9 = *param_1;
      uVar4 = *puVar7;
      uVar8 = puVar7[10];
      uVar3 = puVar7[8];
    }
  }
  else {
    if ((uVar9 & 0x100) != 0) {
      uVar4 = puVar7[1];
      lVar6 = (long)(uVar4 - uVar3) >> 2;
      lVar1 = lVar6 * 8;
      uVar2 = FUN_007101b0(lVar1);
      if (uVar2 == 0) {
        return -1;
      }
      uVar8 = (uVar4 - uVar3) + uVar2;
      FUN_00756660(uVar8,uVar3,lVar6);
      FUN_007104f0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
      puVar7 = *(ulong **)(param_1 + 0x28);
      puVar7[2] = uVar2;
      *puVar7 = uVar8;
      puVar7[1] = uVar2 + lVar1;
      puVar7[9] = uVar8;
      goto LAB_006ff0fd;
    }
    uVar3 = puVar7[8];
    if (uVar3 == 0) goto LAB_006ff228;
    uVar8 = puVar7[10];
  }
  uVar2 = puVar7[1];
  *param_1 = uVar9 | 0x100;
  puVar7[10] = uVar2;
  puVar7[2] = uVar3;
  puVar7[8] = uVar4;
  *puVar7 = uVar8;
  puVar7[1] = uVar8;
LAB_006ff0fd:
  *puVar7 = uVar8 - 4;
  *(int *)(uVar8 - 4) = param_2;
  return param_2;
}

