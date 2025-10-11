
void FUN_0067cb60(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  undefined1 **local_78;
  undefined1 **local_70;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)FUN_0067cb10(param_2);
  if (*(code **)(*plVar6 + 0x20) == (code *)&LAB_00679160) {
    lVar3 = *(long *)(plVar6[2] + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067cf9b to 0067cf9f has its CatchHandler @ 0067cfc1 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar3);
    if (lVar3 == lVar3 + lVar7) {
      local_58 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067cbda to 0067cbde has its CatchHandler @ 0067cfc1 */
      local_58 = (undefined1 *)FUN_00678df0(lVar3,lVar3 + lVar7,&local_48);
    }
  }
  else {
                    /* try { // try from 0067ce60 to 0067ce61 has its CatchHandler @ 0067cfc1 */
    (**(code **)(*plVar6 + 0x20))(&local_58,plVar6);
  }
  local_70 = &local_58;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(local_58 + -0x18);
                    /* try { // try from 0067cbf6 to 0067cbfa has its CatchHandler @ 0067d096 */
  pcVar8 = (char *)thunk_FUN_006c31f0();
                    /* try { // try from 0067cc0c to 0067cc10 has its CatchHandler @ 0067d05b */
  FUN_00637110(local_70,pcVar8,*(undefined8 *)(param_1 + 0x18),0);
  bVar4 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar4 = (byte)(*pcVar8 - 1U) < 0x7e;
  }
  *(bool *)(param_1 + 0x20) = bVar4;
  if (*(code **)(*plVar6 + 0x28) == (code *)&LAB_006791f0) {
    lVar3 = *(long *)(plVar6[2] + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067cfa7 to 0067cfab has its CatchHandler @ 0067d0a8 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar3);
    if (lVar3 == lVar3 + lVar7) {
      local_50 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067cc65 to 0067cc69 has its CatchHandler @ 0067cfd3 */
      local_50 = (undefined1 *)FUN_00678df0(lVar3,lVar3 + lVar7,&local_5a);
    }
  }
  else {
                    /* try { // try from 0067ce80 to 0067ce81 has its CatchHandler @ 0067d08d */
    (**(code **)(*plVar6 + 0x28))(&local_50,plVar6);
  }
  local_78 = &local_50;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(local_50 + -0x18);
                    /* try { // try from 0067cc81 to 0067cc85 has its CatchHandler @ 0067cfca */
  uVar9 = thunk_FUN_006c31f0();
                    /* try { // try from 0067cc97 to 0067cc9b has its CatchHandler @ 0067cfb8 */
  FUN_00637110(local_78,uVar9,*(undefined8 *)(param_1 + 0x30),0);
  if (*(code **)(*plVar6 + 0x30) == (code *)&LAB_006794c0) {
    lVar3 = *(long *)(plVar6[2] + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067cfb3 to 0067cfb7 has its CatchHandler @ 0067cfdc */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar3);
    if (lVar3 == lVar3 + lVar7) {
      local_48 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067ccdf to 0067cce3 has its CatchHandler @ 0067d064 */
      local_48 = (undefined1 *)FUN_00678df0(lVar3,lVar3 + lVar7,&local_59);
    }
  }
  else {
                    /* try { // try from 0067cebb to 0067cebc has its CatchHandler @ 0067d09f */
    (**(code **)(*plVar6 + 0x30))(&local_48,plVar6);
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(local_48 + -0x18);
                    /* try { // try from 0067ccf6 to 0067ccfa has its CatchHandler @ 0067d076 */
  uVar10 = thunk_FUN_006c31f0();
                    /* try { // try from 0067cd0a to 0067cd8f has its CatchHandler @ 0067d06d */
  FUN_00637110(&local_48,uVar10,*(undefined8 *)(param_1 + 0x40),0);
  if (*(code **)(*plVar6 + 0x10) == FUN_00678820) {
    uVar5 = *(undefined1 *)(plVar6[2] + 0x48);
  }
  else {
                    /* try { // try from 0067ce93 to 0067cea4 has its CatchHandler @ 0067d06d */
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  *(undefined1 *)(param_1 + 0x48) = uVar5;
  if (*(code **)(*plVar6 + 0x18) == FUN_00678830) {
    uVar5 = *(undefined1 *)(plVar6[2] + 0x49);
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  *(undefined1 *)(param_1 + 0x49) = uVar5;
  uVar11 = FUN_0067c1e0(param_2);
  FUN_006799c0(uVar11,PTR_s___xX0123456789abcdef0123456789AB_0093d5b0,
               PTR_s___xX0123456789abcdef0123456789AB_0093d5b0 + 0x24,param_1 + 0x4a);
  FUN_006799c0(uVar11,PTR_s___xX0123456789abcdefABCDEF_0093d5b8,
               PTR_s___xX0123456789abcdefABCDEF_0093d5b8 + 0x1a,param_1 + 0x6e);
  *(char **)(param_1 + 0x10) = pcVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined1 *)(param_1 + 0x88) = 1;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
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
  if ((undefined8 *)(local_50 + -0x18) != &DAT_009452a0) {
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
      thunk_FUN_007104f0(local_58 + -0x18,&local_48);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

