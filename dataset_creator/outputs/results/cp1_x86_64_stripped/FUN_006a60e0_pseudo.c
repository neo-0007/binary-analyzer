
void FUN_006a60e0(long param_1,undefined8 param_2)

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
  plVar5 = (long *)FUN_006a6090(param_2);
  lVar10 = *plVar5;
  if (*(code **)(lVar10 + 0x10) == FUN_006a10d0) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x24);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x10))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (*(code **)(lVar10 + 0x18) == FUN_006a10e0) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x28);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x18))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (*(code **)(lVar10 + 0x40) == FUN_006a10f0) {
    uVar4 = *(undefined4 *)(plVar5[2] + 0x60);
  }
  else {
    uVar4 = (**(code **)(lVar10 + 0x40))(plVar5);
    lVar10 = *plVar5;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  if (*(code **)(lVar10 + 0x20) == (code *)&LAB_006a1980) {
    lVar10 = -1;
    lVar7 = *(long *)(plVar5[2] + 0x10);
    if (lVar7 != 0) {
      lVar10 = thunk_FUN_007129d0(lVar7,0xffffffffffffffff);
      lVar10 = lVar7 + lVar10;
    }
                    /* try { // try from 006a61a5 to 006a61a9 has its CatchHandler @ 006a67aa */
    local_60 = FUN_006a1740(lVar7,lVar10,&local_48);
  }
  else {
                    /* try { // try from 006a6510 to 006a6511 has its CatchHandler @ 006a67aa */
    (**(code **)(lVar10 + 0x20))(&local_60,plVar5);
  }
  local_88 = &local_60;
  uVar8 = *(undefined8 *)(local_60 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
                    /* try { // try from 006a61c4 to 006a61c8 has its CatchHandler @ 006a6827 */
  pcVar6 = (char *)thunk_FUN_006c31f0(uVar8);
                    /* try { // try from 006a61da to 006a61de has its CatchHandler @ 006a6835 */
  FUN_00637110(local_88,pcVar6,uVar8,0);
  bVar3 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    local_90._0_1_ = *pcVar6;
    bVar3 = (byte)((char)local_90 - 1U) < 0x7e;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar5 + 0x28) == (code *)&LAB_006a1fe0) {
    unaff_R14 = *(long *)(plVar5[2] + 0x30);
    if (unaff_R14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a66c7 to 006a66cb has its CatchHandler @ 006a6805 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar10 = thunk_FUN_007564d0(unaff_R14);
    lVar10 = unaff_R14 + lVar10 * 4;
    if (unaff_R14 == lVar10) {
      local_58 = &DAT_009452d8;
    }
    else {
                    /* try { // try from 006a6241 to 006a6245 has its CatchHandler @ 006a66e4 */
      local_58 = (undefined *)FUN_006a1b60(unaff_R14,lVar10,&local_63);
    }
  }
  else {
                    /* try { // try from 006a64f0 to 006a64f1 has its CatchHandler @ 006a67d4 */
    (**(code **)(*plVar5 + 0x28))(&local_58,plVar5);
  }
  local_78 = &local_58;
  uVar11 = *(ulong *)(local_58 + -0x18);
  *(ulong *)(param_1 + 0x38) = uVar11;
  if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a6278 to 006a627c has its CatchHandler @ 006a66d8 */
    unaff_R14 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a628d to 006a6291 has its CatchHandler @ 006a686f */
    FUN_0063a420(local_78,unaff_R14,uVar11,0);
    if (*(code **)(*plVar5 + 0x30) == (code *)&LAB_006a2190) {
      lVar10 = *(long *)(plVar5[2] + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a66bb to 006a66bf has its CatchHandler @ 006a67fc */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
      lVar7 = thunk_FUN_007564d0(lVar10);
      lVar7 = lVar10 + lVar7 * 4;
      if (lVar10 == lVar7) {
        local_50 = &DAT_009452d8;
      }
      else {
                    /* try { // try from 006a62d6 to 006a62da has its CatchHandler @ 006a67b6 */
        local_50 = (undefined *)FUN_006a1b60(lVar10,lVar7,&local_62);
      }
    }
    else {
                    /* try { // try from 006a6560 to 006a6561 has its CatchHandler @ 006a6821 */
      (**(code **)(*plVar5 + 0x30))(&local_50,plVar5);
    }
    local_70 = &local_50;
    uVar11 = *(ulong *)(local_50 + -0x18);
    *(ulong *)(param_1 + 0x48) = uVar11;
    if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a630d to 006a6311 has its CatchHandler @ 006a67e2 */
      uVar8 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a6322 to 006a6326 has its CatchHandler @ 006a683e */
      FUN_0063a420(local_70,uVar8,uVar11,0);
      if (*(code **)(*plVar5 + 0x38) == (code *)&LAB_006a2220) {
        lVar10 = *(long *)(plVar5[2] + 0x50);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a66d3 to 006a66d7 has its CatchHandler @ 006a66fe */
          FUN_00403890("basic_string::_S_construct null not valid");
        }
        lVar7 = thunk_FUN_007564d0(lVar10);
        lVar7 = lVar10 + lVar7 * 4;
        if (lVar10 == lVar7) {
          local_48 = &DAT_009452d8;
        }
        else {
                    /* try { // try from 006a636a to 006a636e has its CatchHandler @ 006a67ce */
          local_48 = (undefined *)FUN_006a1b60(lVar10,lVar7,&local_61);
        }
      }
      else {
                    /* try { // try from 006a65a0 to 006a65a1 has its CatchHandler @ 006a67c2 */
        (**(code **)(*plVar5 + 0x38))(&local_48,plVar5);
      }
      local_90 = &local_48;
      uVar11 = *(ulong *)(local_48 + -0x18);
      *(ulong *)(param_1 + 0x58) = uVar11;
      if (uVar11 < 0x1fffffffffffffff) {
                    /* try { // try from 006a63a1 to 006a63a5 has its CatchHandler @ 006a679e */
        uVar9 = thunk_FUN_006c31f0(uVar11 * 4);
                    /* try { // try from 006a63b6 to 006a641d has its CatchHandler @ 006a66f5 */
        FUN_0063a420(local_90,uVar9,uVar11,0);
        if (*(code **)(*plVar5 + 0x48) == FUN_006a1100) {
          uVar4 = *(undefined4 *)(plVar5[2] + 100);
        }
        else {
                    /* try { // try from 006a6573 to 006a6584 has its CatchHandler @ 006a66f5 */
          uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
        }
        *(undefined4 *)(param_1 + 100) = uVar4;
        if (*(code **)(*plVar5 + 0x50) == FUN_006a1110) {
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
                    /* try { // try from 006a6830 to 006a6834 has its CatchHandler @ 006a688d */
      uVar8 = FUN_00403cf5();
      uVar11 = 0;
      unaff_R13 = 0;
      unaff_R14 = 0;
                    /* catch() { ... } // from try @ 006a61da with catch @ 006a6835 */
      goto LAB_006a672e;
    }
                    /* try { // try from 006a67dd to 006a67e1 has its CatchHandler @ 006a67eb */
    uVar8 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006a630d with catch @ 006a67e2 */
    uVar11 = 0;
    unaff_R13 = 0;
  }
  else {
                    /* try { // try from 006a66f0 to 006a66f4 has its CatchHandler @ 006a6707 */
    uVar8 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006a63b6 with catch @ 006a66f5
                       catch() { ... } // from try @ 006a6573 with catch @ 006a66f5 */
    FUN_0063b1a0((char)local_90);
  }
  FUN_0063b1a0(local_70);
  FUN_0063b1a0(local_78);
LAB_006a672e:
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
                    /* try { // try from 006a6777 to 006a677b has its CatchHandler @ 006a6792 */
  FUN_006240b0();
}

