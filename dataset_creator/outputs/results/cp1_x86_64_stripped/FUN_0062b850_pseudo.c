
void FUN_0062b850(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar9 = (undefined8 *)FUN_006c31f0(0x90);
    *(undefined4 *)(puVar9 + 1) = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_00933fe8;
    puVar9[3] = 0;
    *(undefined1 *)(puVar9 + 4) = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    *(undefined2 *)(puVar9 + 9) = 0;
    *(undefined1 *)(puVar9 + 0x11) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar9;
  }
  if (param_2 == 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    *(undefined1 **)(lVar7 + 0x10) = &DAT_0083e5c2;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined1 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x48) = 0x2e;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x49) = 0x2c;
    puVar1 = PTR_s___xX0123456789abcdef0123456789AB_0093d5b0;
    lVar7 = 0;
    do {
      *(undefined *)(*(long *)(param_1 + 0x10) + 0x4a + lVar7) = puVar1[lVar7];
      puVar2 = PTR_s___xX0123456789abcdefABCDEF_0093d5b8;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x24);
    lVar7 = 0;
    do {
      *(undefined *)(*(long *)(param_1 + 0x10) + 0x6e + lVar7) = puVar2[lVar7];
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x1a);
  }
  else {
    puVar4 = (undefined1 *)FUN_006e0b30(0x10000,param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48) = *puVar4;
    pcVar5 = (char *)FUN_006e0b30(0x10001,param_2);
    if ((*pcVar5 == '\0') || (pcVar5[1] == '\0')) {
      *(char *)(*(long *)(param_1 + 0x10) + 0x49) = *pcVar5;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar3 = FUN_0062b680(pcVar5,param_2);
      *(undefined1 *)(lVar7 + 0x49) = uVar3;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar7 + 0x49) != '\0') {
      uVar6 = FUN_006e0b30(0x10002,param_2);
      lVar7 = thunk_FUN_007129d0(uVar6);
      if (lVar7 == 0) {
        lVar8 = *(long *)(param_1 + 0x10);
        *(undefined1 **)(lVar8 + 0x10) = &DAT_0083e5c2;
        *(undefined1 *)(lVar8 + 0x20) = 0;
      }
      else {
                    /* try { // try from 0062ba60 to 0062ba64 has its CatchHandler @ 0062ba83 */
        uVar10 = thunk_FUN_006c31f0(lVar7 + 1);
        uVar6 = thunk_FUN_00713a50(uVar10,uVar6,lVar7 + 1);
        lVar8 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      *(long *)(lVar8 + 0x18) = lVar7;
      goto LAB_0062b8da;
    }
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined1 **)(lVar7 + 0x10) = &DAT_0083e5c2;
    *(undefined1 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x49) = 0x2c;
  }
  lVar8 = *(long *)(param_1 + 0x10);
LAB_0062b8da:
  *(undefined8 *)(lVar8 + 0x30) = 4;
  *(undefined **)(lVar8 + 0x28) = &DAT_0080b58b;
  *(char **)(lVar8 + 0x38) = "false";
  *(undefined8 *)(lVar8 + 0x40) = 5;
  return;
}

