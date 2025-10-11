
void FUN_00629a60(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar15 = (undefined8 *)FUN_006c31f0(0x70);
    *(undefined4 *)(puVar15 + 1) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_FUN_00933f58;
    puVar15[3] = 0;
    *(undefined2 *)(puVar15 + 4) = 0;
    *(undefined1 *)((long)puVar15 + 0x22) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    *(undefined4 *)(puVar15 + 0xc) = 0;
    *(undefined1 *)((long)puVar15 + 0x6f) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar15;
  }
  if (param_2 != 0) {
    puVar6 = (undefined1 *)FUN_006e0b30(0x40002,param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x21) = *puVar6;
    puVar6 = (undefined1 *)FUN_006e0b30(0x40003,param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = *puVar6;
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar12 + 0x21) == '\0') {
      *(undefined4 *)(lVar12 + 0x58) = 0;
      *(undefined1 *)(lVar12 + 0x21) = 0x2e;
    }
    else {
      pcVar11 = (char *)FUN_006e0b30(0x40008,param_2);
      *(int *)(*(long *)(param_1 + 0x10) + 0x58) = (int)*pcVar11;
    }
    uVar7 = FUN_006e0b30(0x40004,param_2);
    uVar8 = FUN_006e0b30(0x40005,param_2);
    uVar9 = FUN_006e0b30(0x40006,param_2);
    uVar10 = FUN_006e0b30(0x40001,param_2);
    pcVar11 = (char *)FUN_006e0b30(0x4000e,param_2);
    lVar12 = *(long *)(param_1 + 0x10);
    cVar1 = *pcVar11;
    if (*(char *)(lVar12 + 0x22) == '\0') {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined1 **)(lVar12 + 0x10) = &DAT_0083e5c2;
      *(undefined1 *)(lVar12 + 0x20) = 0;
      *(undefined1 *)(lVar12 + 0x22) = 0x2c;
      lVar12 = thunk_FUN_007129d0(uVar8);
    }
    else {
      lVar13 = thunk_FUN_007129d0(uVar7);
      if (lVar13 == 0) {
        *(undefined1 *)(lVar12 + 0x20) = 0;
        *(undefined1 **)(lVar12 + 0x10) = &DAT_0083e5c2;
      }
      else {
                    /* try { // try from 00629e2c to 00629e30 has its CatchHandler @ 00629f15 */
        uVar14 = thunk_FUN_006c31f0(lVar13 + 1);
        thunk_FUN_00713a50(uVar14,uVar7,lVar13 + 1);
        lVar12 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      *(long *)(lVar12 + 0x18) = lVar13;
      lVar12 = thunk_FUN_007129d0(uVar8);
    }
    if (lVar12 == 0) {
      lVar13 = *(long *)(param_1 + 0x10);
      *(undefined1 **)(lVar13 + 0x38) = &DAT_0083e5c2;
    }
    else {
                    /* try { // try from 00629dd1 to 00629dd5 has its CatchHandler @ 00629f21 */
      uVar7 = thunk_FUN_006c31f0(lVar12 + 1);
      thunk_FUN_00713a50(uVar7,uVar8,lVar12 + 1);
      lVar13 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar13 + 0x38) = uVar7;
    }
    *(long *)(lVar13 + 0x40) = lVar12;
    if (cVar1 == '\0') {
      *(undefined8 *)(lVar13 + 0x50) = 2;
      *(char **)(lVar13 + 0x48) = "()";
      lVar12 = thunk_FUN_007129d0(uVar10);
    }
    else {
      lVar12 = thunk_FUN_007129d0(uVar9);
      if (lVar12 == 0) {
        *(undefined1 **)(lVar13 + 0x48) = &DAT_0083e5c2;
      }
      else {
                    /* try { // try from 00629e67 to 00629e6b has its CatchHandler @ 00629f39 */
        uVar7 = thunk_FUN_006c31f0(lVar12 + 1);
        thunk_FUN_00713a50(uVar7,uVar9,lVar12 + 1);
        lVar13 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar13 + 0x48) = uVar7;
      }
      *(long *)(lVar13 + 0x50) = lVar12;
      lVar12 = thunk_FUN_007129d0(uVar10);
    }
    if (lVar12 == 0) {
      *(undefined1 **)(lVar13 + 0x28) = &DAT_0083e5c2;
    }
    else {
                    /* try { // try from 00629d47 to 00629d4b has its CatchHandler @ 00629f2d */
      uVar7 = thunk_FUN_006c31f0(lVar12 + 1);
      uVar7 = thunk_FUN_00713a50(uVar7,uVar10,lVar12 + 1);
      lVar13 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar13 + 0x28) = uVar7;
    }
    *(long *)(lVar13 + 0x30) = lVar12;
    pcVar11 = (char *)FUN_006e0b30(0x40009,param_2);
    cVar2 = *pcVar11;
    pcVar11 = (char *)FUN_006e0b30(0x4000a,param_2);
    cVar3 = *pcVar11;
    pcVar11 = (char *)FUN_006e0b30(0x4000d,param_2);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar5 = FUN_00629390((int)cVar2,(int)cVar3,(int)*pcVar11);
    *(undefined4 *)(lVar12 + 0x5c) = uVar5;
    pcVar11 = (char *)FUN_006e0b30(0x4000b,param_2);
    cVar2 = *pcVar11;
    pcVar11 = (char *)FUN_006e0b30(0x4000c,param_2);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar5 = FUN_00629390((int)cVar2,(int)*pcVar11,(int)cVar1);
    *(undefined4 *)(lVar12 + 0x60) = uVar5;
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar12 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar12 + 0x10) = &DAT_0083e5c2;
  *(undefined1 **)(lVar12 + 0x28) = &DAT_0083e5c2;
  *(undefined1 **)(lVar12 + 0x38) = &DAT_0083e5c2;
  *(undefined1 **)(lVar12 + 0x48) = &DAT_0083e5c2;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  uVar5 = DAT_00821d4d;
  *(undefined1 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0x40) = 0;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  *(undefined4 *)(lVar12 + 0x58) = 0;
  *(undefined4 *)(lVar12 + 0x5c) = uVar5;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar5;
  puVar4 = PTR_DAT_0093d5c0;
  lVar12 = 0;
  do {
    *(undefined *)(*(long *)(param_1 + 0x10) + 100 + lVar12) = puVar4[lVar12];
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0xb);
  return;
}

