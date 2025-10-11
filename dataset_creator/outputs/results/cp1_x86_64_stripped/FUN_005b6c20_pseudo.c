
int FUN_005b6c20(code *param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  int local_100;
  int local_e4;
  undefined *local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = 0;
  if (-1 < param_4) {
    iVar15 = param_4;
  }
  if (0 < param_4) {
    iVar14 = 0;
    do {
      iVar1 = (*param_1)(param_2,&DAT_0081d1a9,1);
      if (iVar1 == 0) goto LAB_005b6c90;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar15);
  }
  uVar2 = (uint)param_5 & 0xf0000;
  if (uVar2 == 0x30000) {
    local_9c = 3;
    local_a8 = &DAT_0080e744;
    local_a0 = 2;
    local_b0 = &DAT_0080e748;
    local_e4 = 0;
  }
  else if (uVar2 < 0x30001) {
    if (uVar2 == 0x10000) {
      local_9c = 1;
      local_a8 = &DAT_00821749;
      local_a0 = 1;
      local_b0 = &DAT_00806cc3;
      local_e4 = 0;
    }
    else {
      if (uVar2 != 0x20000) goto LAB_005b6c90;
      local_9c = 3;
      local_a8 = &DAT_0080e744;
      local_a0 = 2;
      local_b0 = &DAT_00801fb4;
      local_e4 = 0;
    }
  }
  else {
    if (uVar2 != 0x40000) {
LAB_005b6c90:
      iVar15 = -1;
      goto LAB_005b6c96;
    }
    local_a8 = &DAT_0080e744;
    local_9c = 3;
    local_a0 = 1;
    local_b0 = &DAT_008243ea;
    local_e4 = iVar15;
  }
  iVar14 = (-(uint)((param_5 & 0x800000) == 0) & 0xfffffffe) + 3;
  pcVar9 = "=";
  if ((param_5 & 0x800000) != 0) {
    pcVar9 = " = ";
  }
  uVar2 = (uint)param_5 & 0x600000;
  iVar1 = FUN_005a9980(param_3);
  if (0 < iVar1) {
    iVar4 = -1;
    local_100 = iVar1 + -1;
    do {
      if ((param_5 & 0x100000) == 0) {
        uVar10 = FUN_005a9a70(param_3,(iVar1 + -1) - local_100);
      }
      else {
        uVar10 = FUN_005a9a70(param_3,local_100);
      }
      if (iVar4 != -1) {
        iVar3 = FUN_005aa300(uVar10);
        if (iVar3 == iVar4) {
          iVar4 = (*param_1)(param_2,local_a8,local_9c);
          if (iVar4 == 0) goto LAB_005b6c90;
          iVar15 = iVar15 + local_9c;
        }
        else {
          iVar4 = (*param_1)(param_2,local_b0,local_a0);
          if (iVar4 == 0) goto LAB_005b6c90;
          if (local_e4 != 0) {
            iVar4 = 0;
            do {
              iVar3 = (*param_1)(param_2,&DAT_0081d1a9,1);
              if (iVar3 == 0) goto LAB_005b6c90;
              iVar4 = iVar4 + 1;
            } while (local_e4 != iVar4);
          }
          iVar15 = local_e4 + local_a0 + iVar15;
        }
      }
      iVar4 = FUN_005aa300(uVar10);
      uVar11 = FUN_005aa1f0(uVar10);
      uVar10 = FUN_005aa210(uVar10);
      iVar3 = FUN_00423da0(uVar11);
      if (uVar2 != 0x600000) {
        if ((uVar2 == 0x400000) || (iVar3 == 0)) {
          puVar12 = local_98;
          FUN_00423e90(puVar12,0x50,uVar11,1);
          iVar5 = 0;
LAB_005b6fb7:
          iVar6 = thunk_FUN_007129d0(puVar12);
          iVar7 = (*param_1)(param_2,puVar12,iVar6);
          if (iVar7 == 0) goto LAB_005b6c90;
          if ((iVar6 < iVar5) && ((param_5 & 0x2000000) != 0)) {
            iVar7 = 0;
            do {
              iVar8 = (*param_1)(param_2,&DAT_0081d1a9,1);
              if (iVar8 == 0) goto LAB_005b6c90;
              iVar7 = iVar7 + 1;
            } while (iVar5 - iVar6 != iVar7);
            iVar15 = iVar15 + (iVar5 - iVar6);
          }
        }
        else {
          if ((param_5 & 0x600000) == 0) {
            puVar12 = (undefined1 *)FUN_00423b00(iVar3);
            iVar5 = 10;
            goto LAB_005b6fb7;
          }
          if (uVar2 == 0x200000) {
            puVar12 = (undefined1 *)FUN_00423c40(iVar3);
            iVar5 = 0x19;
            goto LAB_005b6fb7;
          }
          iVar5 = (*param_1)(param_2,&DAT_0083e5c2,0);
          if (iVar5 == 0) goto LAB_005b6c90;
          iVar6 = 0;
        }
        iVar5 = (*param_1)(param_2,pcVar9,iVar14);
        if (iVar5 == 0) goto LAB_005b6c90;
        iVar15 = iVar15 + iVar6 + iVar14;
      }
      uVar13 = param_5;
      if (iVar3 == 0) {
        uVar13 = (uint)(param_5 >> 0x11) & 0x80 | param_5;
      }
      iVar3 = FUN_005b6890(param_1,param_2,uVar13,uVar10);
      if (iVar3 < 0) goto LAB_005b6c90;
      local_100 = local_100 + -1;
      iVar15 = iVar15 + iVar3;
    } while (local_100 != -1);
  }
LAB_005b6c96:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar15;
}

