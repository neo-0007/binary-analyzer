
/* WARNING: Removing unreachable block (ram,0x006a57aa) */

void FUN_006a52e0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long in_FS_OFFSET;
  long *local_80;
  undefined **local_70;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar7 = (long *)FUN_006a5290(param_2);
  if (*(code **)(*plVar7 + 0x20) == FUN_006a1890) {
    lVar12 = -1;
    lVar9 = *(long *)(plVar7[2] + 0x10);
    if (lVar9 != 0) {
      lVar12 = thunk_FUN_007129d0(lVar9,0xffffffffffffffff);
      lVar12 = lVar9 + lVar12;
    }
                    /* try { // try from 006a5354 to 006a5358 has its CatchHandler @ 006a582e */
    local_58 = FUN_006a1740(lVar9,lVar12,&local_48);
  }
  else {
                    /* try { // try from 006a5610 to 006a5611 has its CatchHandler @ 006a582e */
    (**(code **)(*plVar7 + 0x20))(&local_58,plVar7);
  }
  local_80 = &local_58;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(local_58 + -0x18);
                    /* try { // try from 006a5370 to 006a5374 has its CatchHandler @ 006a5825 */
  pcVar8 = (char *)thunk_FUN_006c31f0();
                    /* try { // try from 006a5386 to 006a538a has its CatchHandler @ 006a584f */
  FUN_00637110(local_80,pcVar8,*(undefined8 *)(param_1 + 0x18),0);
  bVar5 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar5 = (byte)(*pcVar8 - 1U) < 0x7e;
  }
  *(bool *)(param_1 + 0x20) = bVar5;
  if (*(code **)(*plVar7 + 0x28) == (code *)&LAB_006a2070) {
    lVar12 = *(long *)(plVar7[2] + 0x28);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5744 to 006a5748 has its CatchHandler @ 006a575b */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar9 = thunk_FUN_007564d0(lVar12);
    lVar9 = lVar12 + lVar9 * 4;
    if (lVar12 == lVar9) {
      local_50 = &DAT_009452d8;
    }
    else {
                    /* try { // try from 006a53e7 to 006a53eb has its CatchHandler @ 006a57e4 */
      local_50 = (undefined *)FUN_006a1b60(lVar12,lVar9,&local_5a);
    }
  }
  else {
                    /* try { // try from 006a55f0 to 006a55f1 has its CatchHandler @ 006a5749 */
    (**(code **)(*plVar7 + 0x28))(&local_50,plVar7);
  }
  local_70 = &local_50;
  uVar3 = *(ulong *)(local_50 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar3;
  if (uVar3 < 0x1fffffffffffffff) {
                    /* try { // try from 006a541a to 006a541e has its CatchHandler @ 006a57db */
    lVar12 = thunk_FUN_006c31f0(uVar3 << 2);
                    /* try { // try from 006a5430 to 006a5434 has its CatchHandler @ 006a57cd */
    FUN_0063a420(local_70,lVar12,*(undefined8 *)(param_1 + 0x30),0);
    if (*(code **)(*plVar7 + 0x30) == (code *)&LAB_006a2100) {
      lVar9 = *(long *)(plVar7[2] + 0x38);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a5738 to 006a573c has its CatchHandler @ 006a5752 */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
      lVar10 = thunk_FUN_007564d0(lVar9);
      lVar10 = lVar9 + lVar10 * 4;
      if (lVar9 == lVar10) {
        local_48 = &DAT_009452d8;
      }
      else {
                    /* try { // try from 006a5478 to 006a547c has its CatchHandler @ 006a5858 */
        local_48 = (undefined *)FUN_006a1b60(lVar9,lVar10,&local_59);
      }
    }
    else {
                    /* try { // try from 006a562b to 006a562c has its CatchHandler @ 006a5813 */
      (**(code **)(*plVar7 + 0x30))(&local_48,plVar7);
    }
    uVar3 = *(ulong *)(local_48 + -0x18);
    *(ulong *)(param_1 + 0x40) = uVar3;
    if (uVar3 < 0x1fffffffffffffff) {
                    /* try { // try from 006a54a6 to 006a54aa has its CatchHandler @ 006a5861 */
      uVar11 = thunk_FUN_006c31f0(uVar3 << 2);
                    /* try { // try from 006a54ba to 006a5540 has its CatchHandler @ 006a5819 */
      FUN_0063a420(&local_48,uVar11,*(undefined8 *)(param_1 + 0x40),0);
      lVar9 = *plVar7;
      pcVar4 = *(code **)(lVar9 + 0x10);
      if (pcVar4 == FUN_006a11b0) {
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(plVar7[2] + 0x48);
        pcVar4 = *(code **)(lVar9 + 0x18);
      }
      else {
                    /* try { // try from 006a5643 to 006a5661 has its CatchHandler @ 006a5819 */
        uVar6 = (*pcVar4)(plVar7);
        lVar9 = *plVar7;
        *(undefined4 *)(param_1 + 0x48) = uVar6;
        pcVar4 = *(code **)(lVar9 + 0x18);
      }
      if (pcVar4 == FUN_006a11c0) {
        uVar6 = *(undefined4 *)(plVar7[2] + 0x4c);
      }
      else {
        uVar6 = (*pcVar4)(plVar7);
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar6;
      plVar7 = (long *)FUN_006a4ba0(param_2);
      (**(code **)(*plVar7 + 0x58))
                (plVar7,PTR_s___xX0123456789abcdef0123456789AB_0093d5b0,
                 PTR_s___xX0123456789abcdef0123456789AB_0093d5b0 + 0x24,param_1 + 0x50);
      (**(code **)(*plVar7 + 0x58))
                (plVar7,PTR_s___xX0123456789abcdefABCDEF_0093d5b8,
                 PTR_s___xX0123456789abcdefABCDEF_0093d5b8 + 0x1a,param_1 + 0xe0);
      *(char **)(param_1 + 0x10) = pcVar8;
      *(long *)(param_1 + 0x28) = lVar12;
      *(undefined8 *)(param_1 + 0x38) = uVar11;
      *(undefined1 *)(param_1 + 0x148) = 1;
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
          thunk_FUN_007104f0(local_48 + -0x18,&local_59);
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
          thunk_FUN_007104f0(local_50 + -0x18,&local_48);
        }
      }
      if ((undefined8 *)(local_58 + -0x18) != &DAT_009452a0) {
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
          thunk_FUN_007104f0((undefined8 *)(local_58 + -0x18),&local_48);
        }
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return;
    }
                    /* try { // try from 006a586d to 006a5871 has its CatchHandler @ 006a5872 */
    uVar11 = FUN_00403cf5();
    FUN_0063b1a0(&local_48);
                    /* catch() { ... } // from try @ 006a586d with catch @ 006a5872 */
  }
  else {
                    /* try { // try from 006a57d6 to 006a57da has its CatchHandler @ 006a57fa */
    uVar11 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006a541a with catch @ 006a57db */
    lVar12 = 0;
  }
  FUN_0063b1a0(local_70);
  FUN_00637db0(local_80);
  FUN_006c2e40(uVar11);
  if (pcVar8 != (char *)0x0) {
    thunk_FUN_007104f0(pcVar8);
  }
  if (lVar12 != 0) {
    thunk_FUN_007104f0(lVar12);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a57b2 to 006a57b6 has its CatchHandler @ 006a57c4 */
  FUN_006240b0();
}

