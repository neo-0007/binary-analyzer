
void FUN_006a58d0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_R13;
  long unaff_R14;
  long in_FS_OFFSET;
  undefined **local_90;
  long *local_88;
  undefined **local_78;
  undefined **local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)FUN_006a5880(param_2);
  lVar10 = *plVar5;
  if (*(code **)(lVar10 + 0x10) == FUN_006a1120) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x24);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x10))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (*(code **)(lVar10 + 0x18) == FUN_006a1130) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x28);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x18))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (*(code **)(lVar10 + 0x40) == FUN_006a1140) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x60);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x40))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  if (*(code **)(lVar10 + 0x20) == (code *)&LAB_006a1a70) {
    lVar10 = -1;
    lVar7 = *(long *)(plVar5[2] + 0x10);
    if (lVar7 != 0) {
      lVar10 = thunk_FUN_007129d0(lVar7,0xffffffffffffffff);
      lVar10 = lVar7 + lVar10;
    }
                    /* try { // try from 006a5995 to 006a5999 has its CatchHandler @ 006a5f9a */
    local_60 = FUN_006a1740(lVar7,lVar10,&local_48);
  }
  else {
                    /* try { // try from 006a5d00 to 006a5d01 has its CatchHandler @ 006a5f9a */
    (**(code **)(lVar10 + 0x20))(&local_60,plVar5);
  }
  local_88 = &local_60;
  uVar8 = *(undefined8 *)(local_60 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
                    /* try { // try from 006a59b4 to 006a59b8 has its CatchHandler @ 006a6017 */
  pcVar6 = (char *)thunk_FUN_006c31f0(uVar8);
                    /* try { // try from 006a59ca to 006a59ce has its CatchHandler @ 006a6025 */
  FUN_00637110(local_88,pcVar6,uVar8,0);
  bVar3 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    local_90._0_1_ = *pcVar6;
    bVar3 = (byte)((char)local_90 - 1U) < 0x7e;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar5 + 0x28) == (code *)&LAB_006a1ec0) {
    unaff_R14 = *(long *)(plVar5[2] + 0x30);
    if (unaff_R14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5eb7 to 006a5ebb has its CatchHandler @ 006a5ff5 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar10 = thunk_FUN_007564d0(unaff_R14);
    lVar10 = unaff_R14 + lVar10 * 4;
    if (unaff_R14 == lVar10) {
      local_58 = &DAT_009452d8;
    }
    else {
                    /* try { // try from 006a5a31 to 006a5a35 has its CatchHandler @ 006a5ed4 */
      local_58 = (undefined *)FUN_006a1b60(unaff_R14,lVar10,&local_63);
    }
  }
  else {
                    /* try { // try from 006a5ce0 to 006a5ce1 has its CatchHandler @ 006a5fc4 */
    (**(code **)(*plVar5 + 0x28))(&local_58,plVar5);
  }
  local_78 = &local_58;
  uVar11 = *(ulong *)(local_58 + -0x18);
  *(ulong *)(param_1 + 0x38) = uVar11;
  if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a5a68 to 006a5a6c has its CatchHandler @ 006a5ec8 */
    unaff_R14 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a5a7d to 006a5a81 has its CatchHandler @ 006a605f */
    FUN_0063a420(local_78,unaff_R14,uVar11,0);
    if (*(code **)(*plVar5 + 0x30) == (code *)&LAB_006a1f50) {
      lVar10 = *(long *)(plVar5[2] + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5eab to 006a5eaf has its CatchHandler @ 006a5fec */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
      lVar7 = thunk_FUN_007564d0(lVar10);
      lVar7 = lVar10 + lVar7 * 4;
      if (lVar10 == lVar7) {
        local_50 = &DAT_009452d8;
      }
      else {
                    /* try { // try from 006a5ac6 to 006a5aca has its CatchHandler @ 006a5fa6 */
        local_50 = (undefined *)FUN_006a1b60(lVar10,lVar7,&local_62);
      }
    }
    else {
                    /* try { // try from 006a5d50 to 006a5d51 has its CatchHandler @ 006a6011 */
      (**(code **)(*plVar5 + 0x30))(&local_50,plVar5);
    }
    local_70 = &local_50;
    uVar11 = *(ulong *)(local_50 + -0x18);
    *(ulong *)(param_1 + 0x48) = uVar11;
    if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a5afd to 006a5b01 has its CatchHandler @ 006a5fd2 */
      uVar8 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a5b12 to 006a5b16 has its CatchHandler @ 006a602e */
      FUN_0063a420(local_70,uVar8,uVar11,0);
      if (*(code **)(*plVar5 + 0x38) == (code *)&LAB_006a1e30) {
        lVar10 = *(long *)(plVar5[2] + 0x50);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5ec3 to 006a5ec7 has its CatchHandler @ 006a5eee */
          FUN_00403890("basic_string::_S_construct null not valid");
        }
        lVar7 = thunk_FUN_007564d0(lVar10);
        lVar7 = lVar10 + lVar7 * 4;
        if (lVar10 == lVar7) {
          local_48 = &DAT_009452d8;
        }
        else {
                    /* try { // try from 006a5b5a to 006a5b5e has its CatchHandler @ 006a5fbe */
          local_48 = (undefined *)FUN_006a1b60(lVar10,lVar7,&local_61);
        }
      }
      else {
                    /* try { // try from 006a5d90 to 006a5d91 has its CatchHandler @ 006a5fb2 */
        (**(code **)(*plVar5 + 0x38))(&local_48,plVar5);
      }
      local_90 = &local_48;
      uVar11 = *(ulong *)(local_48 + -0x18);
      *(ulong *)(param_1 + 0x58) = uVar11;
      if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a5b91 to 006a5b95 has its CatchHandler @ 006a5f8e */
        uVar9 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a5ba6 to 006a5c0d has its CatchHandler @ 006a5ee5 */
        FUN_0063a420(local_90,uVar9,uVar11,0);
        if (*(code **)(*plVar5 + 0x48) == FUN_006a1150) {
          uVar4 = *(undefined4 *)(plVar5[2] + 100);
        }
        else {
                    /* try { // try from 006a5d63 to 006a5d74 has its CatchHandler @ 006a5ee5 */
          uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
        }
        *(undefined4 *)(param_1 + 100) = uVar4;
        if (*(code **)(*plVar5 + 0x50) == FUN_006a1160) {
          uVar4 = *(undefined4 *)(plVar5[2] + 0x68);
        }
        else {
          uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
        }
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        plVar5 = (long *)FUN_006a4ba0(param_2);
        (**(code **)(*plVar5 + 0x58))(plVar5,PTR_DAT_0093d5c0,PTR_DAT_0093d5c0 + 0xb,param_1 + 0x6c)
        ;
        *(long *)(param_1 + 0x30) = unaff_R14;
        *(undefined8 *)(param_1 + 0x40) = uVar8;
        *(char **)(param_1 + 0x10) = pcVar6;
        *(undefined8 *)(param_1 + 0x50) = uVar9;
        *(undefined1 *)(param_1 + 0x98) = 1;
        if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar1 = (int *)(local_48 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(local_48 + -8);
            *(int *)(local_48 + -8) = iVar2 + -1;
          }
          if (iVar2 < 1) {
            thunk_FUN_007104f0(local_48 + -0x18,&local_61);
          }
        }
        if ((undefined8 *)(local_50 + -0x18) != &DAT_009452c0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar1 = (int *)(local_50 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(local_50 + -8);
            *(int *)(local_50 + -8) = iVar2 + -1;
          }
          if (iVar2 < 1) {
            thunk_FUN_007104f0(local_50 + -0x18,local_90);
          }
        }
        if ((undefined8 *)(local_58 + -0x18) != &DAT_009452c0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar1 = (int *)(local_58 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(local_58 + -8);
            *(int *)(local_58 + -8) = iVar2 + -1;
          }
          if (iVar2 < 1) {
            thunk_FUN_007104f0(local_58 + -0x18,local_90);
          }
        }
        if ((undefined8 *)(local_60 + -0x18) != &DAT_009452a0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar1 = (int *)(local_60 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(local_60 + -8);
            *(int *)(local_60 + -8) = iVar2 + -1;
          }
          if (iVar2 < 1) {
            thunk_FUN_007104f0((undefined8 *)(local_60 + -0x18),local_90);
          }
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00771f60();
        }
        return;
      }
                    /* try { // try from 006a6020 to 006a6024 has its CatchHandler @ 006a607d */
      uVar8 = FUN_00403cf5();
      uVar11 = 0;
      unaff_R13 = 0;
      unaff_R14 = 0;
                    /* catch() { ... } // from try @ 006a59ca with catch @ 006a6025 */
      goto LAB_006a5f1e;
    }
                    /* try { // try from 006a5fcd to 006a5fd1 has its CatchHandler @ 006a5fdb */
    uVar8 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006a5afd with catch @ 006a5fd2 */
    uVar11 = 0;
    unaff_R13 = 0;
  }
  else {
                    /* try { // try from 006a5ee0 to 006a5ee4 has its CatchHandler @ 006a5ef7 */
    uVar8 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006a5ba6 with catch @ 006a5ee5
                       catch() { ... } // from try @ 006a5d63 with catch @ 006a5ee5 */
    FUN_0063b1a0((char)local_90);
  }
  FUN_0063b1a0(local_70);
  FUN_0063b1a0(local_78);
LAB_006a5f1e:
  FUN_00637db0(local_88);
  FUN_006c2e40(uVar8);
  if (pcVar6 != (char *)0x0) {
    thunk_FUN_007104f0(pcVar6);
  }
  if (unaff_R14 != 0) {
    thunk_FUN_007104f0(unaff_R14);
  }
  if (unaff_R13 != 0) {
    thunk_FUN_007104f0(unaff_R13);
  }
  if (uVar11 != 0) {
    thunk_FUN_007104f0(uVar11);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5f67 to 006a5f6b has its CatchHandler @ 006a5f82 */
  FUN_006240b0();
}

