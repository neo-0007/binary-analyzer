
void FUN_0067d8d0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined1 **local_90;
  undefined1 **local_80;
  undefined1 **local_78;
  undefined1 **local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)FUN_0067d880(param_2);
  if (*(code **)(*plVar6 + 0x10) == FUN_00678740) {
    uVar4 = *(undefined1 *)(plVar6[2] + 0x21);
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  if (*(code **)(*plVar6 + 0x18) == FUN_00678750) {
    uVar4 = *(undefined1 *)(plVar6[2] + 0x22);
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  *(undefined1 *)(param_1 + 0x22) = uVar4;
  lVar13 = *plVar6;
  if (*(code **)(lVar13 + 0x40) == FUN_00678760) {
    uVar5 = *(undefined4 *)(plVar6[2] + 0x58);
  }
  else {
    uVar5 = (**(code **)(lVar13 + 0x40))(plVar6);
    lVar13 = *plVar6;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  if (*(code **)(lVar13 + 0x20) == (code *)&LAB_00679040) {
    lVar13 = *(long *)(plVar6[2] + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067deaf to 0067deb3 has its CatchHandler @ 0067df82 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar13);
    if (lVar13 == lVar13 + lVar7) {
      local_60 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067d9a5 to 0067d9a9 has its CatchHandler @ 0067df82 */
      local_60 = (undefined1 *)FUN_00678df0(lVar13,lVar13 + lVar7,&local_48);
    }
  }
  else {
                    /* try { // try from 0067dcc0 to 0067dcc1 has its CatchHandler @ 0067df82 */
    (**(code **)(lVar13 + 0x20))(&local_60,plVar6);
  }
  local_80 = &local_60;
  uVar12 = *(undefined8 *)(local_60 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
                    /* try { // try from 0067d9c4 to 0067d9c8 has its CatchHandler @ 0067e013 */
  pcVar8 = (char *)thunk_FUN_006c31f0(uVar12);
                    /* try { // try from 0067d9da to 0067d9de has its CatchHandler @ 0067e00a */
  FUN_00637110(local_80,pcVar8,uVar12,0);
  bVar3 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = (byte)(*pcVar8 - 1U) < 0x7e;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar6 + 0x28) == (code *)&LAB_006790d0) {
    lVar13 = *(long *)(plVar6[2] + 0x28);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067dea3 to 0067dea7 has its CatchHandler @ 0067df94 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar13);
    if (lVar13 == lVar13 + lVar7) {
      local_58 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067da32 to 0067da36 has its CatchHandler @ 0067df2d */
      local_58 = (undefined1 *)FUN_00678df0(lVar13,lVar13 + lVar7,&local_63);
    }
  }
  else {
                    /* try { // try from 0067dd10 to 0067dd11 has its CatchHandler @ 0067df59 */
    (**(code **)(*plVar6 + 0x28))(&local_58,plVar6);
  }
  local_78 = &local_58;
  uVar12 = *(undefined8 *)(local_58 + -0x18);
  *(undefined8 *)(param_1 + 0x30) = uVar12;
                    /* try { // try from 0067da51 to 0067da55 has its CatchHandler @ 0067dfe1 */
  uVar9 = thunk_FUN_006c31f0(uVar12);
                    /* try { // try from 0067da66 to 0067da6a has its CatchHandler @ 0067dfd8 */
  FUN_00637110(local_78,uVar9,uVar12,0);
  if (*(code **)(*plVar6 + 0x30) == FUN_00678f20) {
    lVar13 = *(long *)(plVar6[2] + 0x38);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067de8b to 0067de8f has its CatchHandler @ 0067deb4 */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar13);
    if (lVar13 == lVar13 + lVar7) {
      local_50 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067daaf to 0067dab3 has its CatchHandler @ 0067dff3 */
      local_50 = (undefined1 *)FUN_00678df0(lVar13,lVar13 + lVar7,&local_62);
    }
  }
  else {
                    /* try { // try from 0067dd30 to 0067dd31 has its CatchHandler @ 0067df50 */
    (**(code **)(*plVar6 + 0x30))(&local_50,plVar6);
  }
  local_70 = &local_50;
  uVar12 = *(undefined8 *)(local_50 + -0x18);
  *(undefined8 *)(param_1 + 0x40) = uVar12;
                    /* try { // try from 0067dace to 0067dad2 has its CatchHandler @ 0067df5f */
  uVar10 = thunk_FUN_006c31f0(uVar12);
                    /* try { // try from 0067dae3 to 0067dae7 has its CatchHandler @ 0067df7c */
  FUN_00637110(local_70,uVar10,uVar12,0);
  if (*(code **)(*plVar6 + 0x38) == (code *)&LAB_00678fb0) {
    lVar13 = *(long *)(plVar6[2] + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0067de97 to 0067de9b has its CatchHandler @ 0067debd */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar7 = thunk_FUN_007129d0(lVar13);
    if (lVar13 == lVar13 + lVar7) {
      local_48 = &DAT_009452b8;
    }
    else {
                    /* try { // try from 0067db2b to 0067db2f has its CatchHandler @ 0067df36 */
      local_48 = (undefined1 *)FUN_00678df0(lVar13,lVar13 + lVar7,&local_61);
    }
  }
  else {
                    /* try { // try from 0067dd50 to 0067dd51 has its CatchHandler @ 0067df4a */
    (**(code **)(*plVar6 + 0x38))(&local_48,plVar6);
  }
  local_90 = &local_48;
  uVar12 = *(undefined8 *)(local_48 + -0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar12;
                    /* try { // try from 0067db4a to 0067db4e has its CatchHandler @ 0067df8b */
  uVar11 = thunk_FUN_006c31f0(uVar12);
                    /* try { // try from 0067db5f to 0067dbc5 has its CatchHandler @ 0067dfea */
  FUN_00637110(local_90,uVar11,uVar12,0);
  if (*(code **)(*plVar6 + 0x48) == FUN_00678770) {
    uVar5 = *(undefined4 *)(plVar6[2] + 0x5c);
  }
  else {
                    /* try { // try from 0067dd63 to 0067dd74 has its CatchHandler @ 0067dfea */
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (*(code **)(*plVar6 + 0x50) == FUN_00678780) {
    uVar5 = *(undefined4 *)(plVar6[2] + 0x60);
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  uVar12 = FUN_0067c1e0(param_2);
  FUN_006799c0(uVar12,PTR_DAT_0093d5c0,PTR_DAT_0093d5c0 + 0xb,param_1 + 100);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(char **)(param_1 + 0x10) = pcVar8;
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  *(undefined1 *)(param_1 + 0x6f) = 1;
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
      thunk_FUN_007104f0(local_48 + -0x18,&local_61);
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
      thunk_FUN_007104f0(local_50 + -0x18,local_90);
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
      thunk_FUN_007104f0(local_60 + -0x18,local_90);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

