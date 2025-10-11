
undefined4 FUN_007011e0(uint *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 4) == 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    puVar6 = (undefined4 *)*plVar4;
    if ((undefined4 *)plVar4[1] <= puVar6) {
      uVar1 = *(undefined8 *)(param_1 + 0x26);
      uVar5 = *(ulong *)(param_1 + 2);
      if (uVar5 < *(ulong *)(param_1 + 4)) {
        lVar7 = plVar4[6];
      }
      else {
        iVar3 = FUN_00704ac0();
        if (iVar3 == -1) {
          uVar2 = 0xffffffff;
          goto LAB_007012a2;
        }
        plVar4 = *(long **)(param_1 + 0x28);
        uVar5 = *(ulong *)(param_1 + 2);
        lVar7 = plVar4[6];
      }
      local_28 = uVar5;
      if (lVar7 == 0) {
        if (plVar4[8] != 0) {
          FUN_007104f0();
          *param_1 = *param_1 & 0xfffffeff;
        }
        FUN_006ff640(param_1);
        plVar4 = *(long **)(param_1 + 0x28);
        uVar5 = *(ulong *)(param_1 + 2);
        lVar7 = plVar4[6];
      }
      *plVar4 = lVar7;
      plVar4[2] = lVar7;
      plVar4[0xc] = plVar4[0xb];
      FUN_00701eb0(uVar1,plVar4 + 0xb,uVar5,*(undefined8 *)(param_1 + 4),&local_28,lVar7,plVar4[7],
                   plVar4 + 1);
      *(ulong *)(param_1 + 2) = local_28;
      puVar6 = (undefined4 *)**(undefined8 **)(param_1 + 0x28);
      if ((undefined4 *)(*(undefined8 **)(param_1 + 0x28))[1] <= puVar6) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        uVar2 = 0xffffffff;
        *param_1 = *param_1 | 0x20;
        goto LAB_007012a2;
      }
    }
    uVar2 = *puVar6;
  }
  else {
    *param_1 = *param_1 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    uVar2 = 0xffffffff;
  }
LAB_007012a2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

