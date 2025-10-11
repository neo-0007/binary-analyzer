
void FUN_00627740(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar16 = (undefined8 *)FUN_006c31f0(0x70);
    *(undefined4 *)(puVar16 + 1) = 0;
    puVar16[2] = 0;
    *puVar16 = &PTR_FUN_00933f38;
    puVar16[3] = 0;
    *(undefined2 *)(puVar16 + 4) = 0;
    *(undefined1 *)((long)puVar16 + 0x22) = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    *(undefined4 *)(puVar16 + 0xc) = 0;
    *(undefined1 *)((long)puVar16 + 0x6f) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar16;
  }
  if (param_2 != 0) {
    puVar7 = (undefined1 *)FUN_006e0b30(0x40002,param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x21) = *puVar7;
    pcVar8 = (char *)FUN_006e0b30(0x40003,param_2);
    if ((*pcVar8 == '\0') || (pcVar8[1] == '\0')) {
      *(char *)(*(long *)(param_1 + 0x10) + 0x22) = *pcVar8;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x10);
      uVar5 = FUN_0062b680(pcVar8,param_2);
      *(undefined1 *)(lVar13 + 0x22) = uVar5;
    }
    lVar13 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar13 + 0x21) == '\0') {
      *(undefined4 *)(lVar13 + 0x58) = 0;
      *(undefined1 *)(lVar13 + 0x21) = 0x2e;
    }
    else {
      pcVar8 = (char *)FUN_006e0b30(0x40007,param_2);
      *(int *)(*(long *)(param_1 + 0x10) + 0x58) = (int)*pcVar8;
    }
    uVar9 = FUN_006e0b30(0x40004,param_2);
    uVar10 = FUN_006e0b30(0x40005,param_2);
    uVar11 = FUN_006e0b30(0x40006,param_2);
    uVar12 = FUN_006e0b30(0x40000,param_2);
    pcVar8 = (char *)FUN_006e0b30(0x40015,param_2);
    lVar13 = *(long *)(param_1 + 0x10);
    cVar1 = *pcVar8;
    if (*(char *)(lVar13 + 0x22) == '\0') {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
      *(undefined1 *)(lVar13 + 0x20) = 0;
      *(undefined1 *)(lVar13 + 0x22) = 0x2c;
      lVar13 = thunk_FUN_007129d0(uVar10);
    }
    else {
      lVar14 = thunk_FUN_007129d0(uVar9);
      if (lVar14 == 0) {
        *(undefined1 *)(lVar13 + 0x20) = 0;
        *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
      }
      else {
                    /* try { // try from 00627b1c to 00627b20 has its CatchHandler @ 00627c25 */
        uVar15 = thunk_FUN_006c31f0(lVar14 + 1);
        thunk_FUN_00713a50(uVar15,uVar9,lVar14 + 1);
        lVar13 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar13 + 0x10) = uVar15;
      }
      *(long *)(lVar13 + 0x18) = lVar14;
      lVar13 = thunk_FUN_007129d0(uVar10);
    }
    if (lVar13 == 0) {
      lVar14 = *(long *)(param_1 + 0x10);
      *(undefined1 **)(lVar14 + 0x38) = &DAT_0083e5c2;
    }
    else {
                    /* try { // try from 00627add to 00627ae1 has its CatchHandler @ 00627c31 */
      uVar9 = thunk_FUN_006c31f0(lVar13 + 1);
      thunk_FUN_00713a50(uVar9,uVar10,lVar13 + 1);
      lVar14 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar14 + 0x38) = uVar9;
    }
    *(long *)(lVar14 + 0x40) = lVar13;
    if (cVar1 == '\0') {
      *(undefined8 *)(lVar14 + 0x50) = 2;
      *(char **)(lVar14 + 0x48) = "()";
      lVar13 = thunk_FUN_007129d0(uVar12);
    }
    else {
      lVar13 = thunk_FUN_007129d0(uVar11);
      if (lVar13 == 0) {
        *(undefined1 **)(lVar14 + 0x48) = &DAT_0083e5c2;
      }
      else {
                    /* try { // try from 00627b57 to 00627b5b has its CatchHandler @ 00627c49 */
        uVar9 = thunk_FUN_006c31f0(lVar13 + 1);
        thunk_FUN_00713a50(uVar9,uVar11,lVar13 + 1);
        lVar14 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar14 + 0x48) = uVar9;
      }
      *(long *)(lVar14 + 0x50) = lVar13;
      lVar13 = thunk_FUN_007129d0(uVar12);
    }
    if (lVar13 == 0) {
      *(undefined1 **)(lVar14 + 0x28) = &DAT_0083e5c2;
    }
    else {
                    /* try { // try from 00627a57 to 00627a5b has its CatchHandler @ 00627c3d */
      uVar9 = thunk_FUN_006c31f0(lVar13 + 1);
      uVar9 = thunk_FUN_00713a50(uVar9,uVar12,lVar13 + 1);
      lVar14 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar14 + 0x28) = uVar9;
    }
    *(long *)(lVar14 + 0x30) = lVar13;
    pcVar8 = (char *)FUN_006e0b30(0x40010,param_2);
    cVar2 = *pcVar8;
    pcVar8 = (char *)FUN_006e0b30(0x40011,param_2);
    cVar3 = *pcVar8;
    pcVar8 = (char *)FUN_006e0b30(0x40014,param_2);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar6 = FUN_00629390((int)cVar2,(int)cVar3,(int)*pcVar8);
    *(undefined4 *)(lVar13 + 0x5c) = uVar6;
    pcVar8 = (char *)FUN_006e0b30(0x40012,param_2);
    cVar2 = *pcVar8;
    pcVar8 = (char *)FUN_006e0b30(0x40013,param_2);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar6 = FUN_00629390((int)cVar2,(int)*pcVar8,(int)cVar1);
    *(undefined4 *)(lVar13 + 0x60) = uVar6;
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar13 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar13 + 0x10) = &DAT_0083e5c2;
  *(undefined1 **)(lVar13 + 0x28) = &DAT_0083e5c2;
  *(undefined1 **)(lVar13 + 0x38) = &DAT_0083e5c2;
  *(undefined1 **)(lVar13 + 0x48) = &DAT_0083e5c2;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  uVar6 = DAT_00821d4d;
  *(undefined1 *)(lVar13 + 0x20) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined4 *)(lVar13 + 0x58) = 0;
  *(undefined4 *)(lVar13 + 0x5c) = uVar6;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar6;
  puVar4 = PTR_DAT_0093d5c0;
  lVar13 = 0;
  do {
    *(undefined *)(*(long *)(param_1 + 0x10) + 100 + lVar13) = puVar4[lVar13];
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0xb);
  return;
}

