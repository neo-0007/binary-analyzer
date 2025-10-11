
ulong FUN_00704ac0(uint *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  uint local_b0;
  long local_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar6 = *(byte **)(param_1 + 2);
  if (pbVar6 < *(byte **)(param_1 + 4)) {
LAB_00704aec:
    uVar3 = (ulong)*pbVar6;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar5 - 0x93f160U) {
      FUN_00703130();
    }
    iVar1 = (**(code **)(lVar5 + 0x90))(param_1,auStack_c8);
    lVar5 = local_98;
    if (((iVar1 != 0) || ((local_b0 & 0xf000) != 0x8000)) || (local_98 == 0)) {
LAB_00704be0:
      FUN_0076f080(*(long *)(param_1 + 0xe),*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe));
      puVar4 = &DAT_0093f5e0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
      if (0 < (int)param_1[0x30]) {
        puVar4 = &DAT_0093f2e0;
      }
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      *(undefined **)(param_1 + 0x36) = puVar4;
      *(undefined **)(*(long *)(param_1 + 0x28) + 0xe0) = &DAT_0093f2e0;
      lVar5 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar5 - 0x93f160U) {
        FUN_00703130();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00704c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar5 + 0x20))(param_1);
        return uVar3;
      }
      goto LAB_00704d72;
    }
    iVar1 = FUN_0076ece0();
    uVar3 = *(ulong *)(param_1 + 0xe);
    lVar2 = (long)iVar1;
    uVar7 = lVar5 + -1 + lVar2 & -lVar2;
    uVar9 = ~uVar3 + *(long *)(param_1 + 0x10) + lVar2 & -lVar2;
    if (uVar7 < uVar9) {
      FUN_0076f080(uVar3 + uVar7,uVar9 - uVar7);
      uVar3 = *(ulong *)(param_1 + 0xe);
      lVar2 = uVar3 + local_98;
    }
    else if (uVar9 < uVar7) {
      uVar3 = FUN_00770970(uVar3,uVar9,uVar7,1);
      if (uVar3 == 0xffffffffffffffff) goto LAB_00704be0;
      *(ulong *)(param_1 + 0xe) = uVar3;
      lVar2 = uVar3 + local_98;
    }
    else {
      lVar2 = uVar3 + lVar5;
      local_98 = lVar5;
    }
    *(ulong *)(param_1 + 6) = uVar3;
    *(long *)(param_1 + 0x10) = lVar2;
    lVar5 = *(long *)(param_1 + 0x24) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
    *(long *)(param_1 + 0x24) = lVar5;
    if (lVar5 < local_98) {
      *(ulong *)(param_1 + 2) = lVar5 + uVar3;
      *(long *)(param_1 + 4) = lVar2;
      lVar5 = FUN_0076db00(param_1[0x1c],local_98,0);
      if (lVar5 == *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) {
        *(long *)(param_1 + 0x24) = lVar5;
        pbVar8 = *(byte **)(param_1 + 4);
        pbVar6 = *(byte **)(param_1 + 2);
      }
      else {
        *param_1 = *param_1 | 0x20;
        pbVar6 = *(byte **)(param_1 + 2);
        pbVar8 = *(byte **)(param_1 + 4);
      }
      if (pbVar6 < pbVar8) goto LAB_00704aec;
    }
    else {
      *(long *)(param_1 + 2) = lVar2;
      *(long *)(param_1 + 4) = lVar2;
    }
    *param_1 = *param_1 | 0x10;
    uVar3 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00704d72:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

