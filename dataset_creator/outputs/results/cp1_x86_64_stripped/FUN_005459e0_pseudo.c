
undefined8 FUN_005459e0(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x15) = 0;
  plVar6 = (long *)FUN_005454d0(param_1,param_2,auStack_38);
  puVar2 = (undefined8 *)*plVar6;
  if (puVar2 == (undefined8 *)0x0) {
    param_1[0x11] = param_1[0x11] + 1;
    uVar10 = 0;
  }
  else {
    *plVar6 = puVar2[1];
    uVar10 = *puVar2;
    FUN_0041ad60(puVar2,"../crypto/lhash/lhash.c",0xb2);
    lVar8 = param_1[7];
    uVar9 = *(uint *)(param_1 + 3);
    param_1[0x10] = param_1[0x10] + 1;
    param_1[7] = lVar8 + -1;
    if ((0x10 < uVar9) && ((ulong)((lVar8 + -1) * 0x100) / (ulong)uVar9 <= (ulong)param_1[6])) {
      iVar4 = (int)param_1[4];
      iVar1 = *(int *)((long)param_1 + 0x24);
      lVar8 = *param_1;
      plVar6 = (long *)(lVar8 + (ulong)(uint)(iVar4 + -1 + iVar1) * 8);
      lVar3 = *plVar6;
      *plVar6 = 0;
      if (iVar4 == 0) {
        lVar8 = FUN_0041ade0(lVar8,iVar1 * 8,"../crypto/lhash/lhash.c",300);
        if (lVar8 == 0) {
          *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
          goto LAB_00545a59;
        }
        param_1[0xb] = param_1[0xb] + 1;
        *param_1 = lVar8;
        uVar9 = *(uint *)(param_1 + 3);
        uVar5 = *(uint *)((long)param_1 + 0x24) >> 1;
        *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
        *(uint *)((long)param_1 + 0x24) = uVar5;
        iVar4 = uVar5 - 1;
        *(int *)(param_1 + 4) = iVar4;
      }
      else {
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 4) = iVar4;
      }
      param_1[10] = param_1[10] + 1;
      plVar6 = (long *)(lVar8 + (long)iVar4 * 8);
      *(uint *)(param_1 + 3) = uVar9 - 1;
      lVar8 = *plVar6;
      if (lVar8 == 0) {
        *plVar6 = lVar3;
      }
      else {
        do {
          lVar7 = lVar8;
          lVar8 = *(long *)(lVar7 + 8);
        } while (lVar8 != 0);
        *(long *)(lVar7 + 8) = lVar3;
      }
    }
  }
LAB_00545a59:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

