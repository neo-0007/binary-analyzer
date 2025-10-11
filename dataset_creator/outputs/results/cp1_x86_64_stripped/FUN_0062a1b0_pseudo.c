
void FUN_0062a1b0(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 in_R9;
  long in_FS_OFFSET;
  char cVar14;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar10 = (undefined8 *)FUN_006c31f0(0xa0);
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_00933f78;
    puVar10[3] = 0;
    *(undefined1 *)(puVar10 + 4) = 0;
    *(undefined8 *)((long)puVar10 + 0x24) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar10;
  }
  if (param_2 == 0) {
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined **)(lVar13 + 0x30) = &DAT_0081da5c;
    *(undefined **)(lVar13 + 0x40) = &DAT_0081da5c;
    *(undefined **)(lVar13 + 0x50) = &DAT_0081da5c;
    *(undefined8 *)(lVar13 + 0x24) = 0x2c0000002e;
    uVar4 = DAT_00821d4d;
    *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(lVar13 + 100) = uVar4;
    *(undefined1 *)(lVar13 + 0x20) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined4 *)(lVar13 + 0x60) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = uVar4;
    puVar11 = PTR_DAT_0093d5c0;
    lVar13 = *(long *)(param_1 + 0x10);
    lVar8 = 0;
    do {
      *(int *)(lVar13 + 0x6c + lVar8 * 4) = (int)(char)puVar11[lVar8];
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xb);
    goto LAB_0062a3e1;
  }
  uVar5 = FUN_006e1eb0(param_2);
  uVar4 = FUN_006e0b30(0x4002b,param_2);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24) = uVar4;
  uVar4 = FUN_006e0b30(0x4002c,param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar13 + 0x28) = uVar4;
  if (*(int *)(lVar13 + 0x24) == 0) {
    *(undefined4 *)(lVar13 + 0x60) = 0;
    *(undefined4 *)(lVar13 + 0x24) = 0x2e;
  }
  else {
    pcVar7 = (char *)FUN_006e0b30(0x40007,param_2);
    *(int *)(*(long *)(param_1 + 0x10) + 0x60) = (int)*pcVar7;
  }
  uVar6 = FUN_006e0b30(0x40004,param_2);
  local_60 = FUN_006e0b30(0x40005,param_2);
  local_58 = FUN_006e0b30(0x40006,param_2);
  local_50 = FUN_006e0b30(0x40000,param_2);
  pcVar7 = (char *)FUN_006e0b30(0x40015,param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar2 = *pcVar7;
  if (*(int *)(lVar13 + 0x28) == 0) {
    *(undefined1 *)(lVar13 + 0x20) = 0;
    *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(lVar13 + 0x28) = 0x2c;
    lVar8 = thunk_FUN_007129d0(local_60);
    if (lVar8 != 0) goto LAB_0062a524;
LAB_0062a2e4:
    puVar11 = &DAT_0081da5c;
    *(undefined **)(lVar13 + 0x40) = &DAT_0081da5c;
  }
  else {
    lVar8 = thunk_FUN_007129d0(uVar6);
    if (lVar8 == 0) {
      *(undefined1 *)(lVar13 + 0x20) = 0;
      *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
    }
    else {
      lVar13 = lVar8 + 1;
                    /* try { // try from 0062a5b7 to 0062a5bb has its CatchHandler @ 0062a76b */
      uVar9 = thunk_FUN_006c31f0(lVar13);
      thunk_FUN_00713a50(uVar9,uVar6,lVar13);
      lVar13 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    *(long *)(lVar13 + 0x18) = lVar8;
    lVar8 = thunk_FUN_007129d0(local_60);
    if (lVar8 == 0) goto LAB_0062a2e4;
LAB_0062a524:
    local_48 = 0;
    uVar1 = lVar8 + 1;
    lVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      lVar13 = -1;
    }
                    /* try { // try from 0062a551 to 0062a555 has its CatchHandler @ 0062a747 */
    puVar11 = (undefined *)thunk_FUN_006c31f0(lVar13);
    FUN_00771f20(puVar11,&local_60,uVar1,&local_48,0x3fffffffffffffff);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined **)(lVar13 + 0x40) = puVar11;
  }
  uVar6 = thunk_FUN_007564d0(puVar11);
  *(undefined8 *)(lVar13 + 0x48) = uVar6;
  lVar8 = thunk_FUN_007129d0(local_58);
  if (cVar2 == '\0') {
    puVar12 = &DAT_0081da54;
    *(undefined **)(lVar13 + 0x50) = &DAT_0081da54;
    puVar11 = (undefined *)0x0;
  }
  else if (lVar8 == 0) {
    puVar12 = &DAT_0081da5c;
    *(undefined **)(lVar13 + 0x50) = &DAT_0081da5c;
    puVar11 = (undefined *)0x0;
  }
  else {
    local_48 = 0;
    uVar1 = lVar8 + 1;
    lVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      lVar13 = -1;
    }
                    /* try { // try from 0062a60d to 0062a611 has its CatchHandler @ 0062a75f */
    puVar12 = (undefined *)thunk_FUN_006c31f0(lVar13);
    FUN_00771f20(puVar12,&local_58,uVar1,&local_48,0x3fffffffffffffff);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined **)(lVar13 + 0x50) = puVar12;
    puVar11 = puVar12;
  }
  uVar6 = thunk_FUN_007564d0(puVar12);
  *(undefined8 *)(lVar13 + 0x58) = uVar6;
  lVar8 = thunk_FUN_007129d0(local_50);
  if (lVar8 == 0) {
    puVar12 = &DAT_0081da5c;
    *(undefined **)(lVar13 + 0x30) = &DAT_0081da5c;
  }
  else {
    local_48 = 0;
    uVar1 = lVar8 + 1;
    lVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      lVar13 = -1;
    }
                    /* try { // try from 0062a67d to 0062a681 has its CatchHandler @ 0062a753 */
    puVar12 = (undefined *)thunk_FUN_006c31f0(lVar13);
    FUN_00771f20(puVar12,&local_50,uVar1,&local_48,0x3fffffffffffffff,in_R9,puVar11);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined **)(lVar13 + 0x30) = puVar12;
  }
  uVar6 = thunk_FUN_007564d0(puVar12);
  *(undefined8 *)(lVar13 + 0x38) = uVar6;
  pcVar7 = (char *)FUN_006e0b30(0x40010,param_2);
  cVar14 = *pcVar7;
  pcVar7 = (char *)FUN_006e0b30(0x40011,param_2);
  cVar3 = *pcVar7;
  pcVar7 = (char *)FUN_006e0b30(0x40014,param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar4 = FUN_00629390((int)cVar14,(int)cVar3,(int)*pcVar7);
  *(undefined4 *)(lVar13 + 100) = uVar4;
  pcVar7 = (char *)FUN_006e0b30(0x40012,param_2);
  cVar14 = *pcVar7;
  pcVar7 = (char *)FUN_006e0b30(0x40013,param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar4 = FUN_00629390((int)cVar14,(int)*pcVar7,(int)cVar2);
  *(undefined4 *)(lVar13 + 0x68) = uVar4;
  FUN_006e1eb0(uVar5);
LAB_0062a3e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

