
void FUN_0062bb60(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar7 = (undefined8 *)FUN_006c31f0(0x150);
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_00934008;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    *(undefined1 *)(puVar7 + 0x29) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar7;
  }
  if (param_2 == 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    *(undefined1 **)(lVar9 + 0x10) = &DAT_0083e5c2;
    *(undefined8 *)(lVar9 + 0x48) = 0x2c0000002e;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined1 *)(lVar9 + 0x20) = 0;
    puVar1 = PTR_s___xX0123456789abcdef0123456789AB_0093d5b0;
    lVar6 = 0;
    do {
      *(int *)(lVar9 + 0x50 + lVar6 * 4) = (int)(char)puVar1[lVar6];
      puVar2 = PTR_s___xX0123456789abcdefABCDEF_0093d5b8;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x24);
    lVar6 = 0;
    do {
      *(int *)(lVar9 + 0xe0 + lVar6 * 4) = (int)(char)puVar2[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1a);
  }
  else {
    uVar3 = FUN_006e0b30(0x10003,param_2);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48) = uVar3;
    iVar4 = FUN_006e0b30(0x10004,param_2);
    lVar9 = *(long *)(param_1 + 0x10);
    *(int *)(lVar9 + 0x4c) = iVar4;
    if (iVar4 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined1 **)(lVar9 + 0x10) = &DAT_0083e5c2;
      *(undefined1 *)(lVar9 + 0x20) = 0;
      *(undefined4 *)(lVar9 + 0x4c) = 0x2c;
    }
    else {
      uVar5 = FUN_006e0b30(0x10002,param_2);
      lVar6 = thunk_FUN_007129d0(uVar5);
      if (lVar6 == 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        *(undefined1 **)(lVar9 + 0x10) = &DAT_0083e5c2;
        *(undefined1 *)(lVar9 + 0x20) = 0;
      }
      else {
                    /* try { // try from 0062bd42 to 0062bd46 has its CatchHandler @ 0062bd62 */
        uVar8 = thunk_FUN_006c31f0(lVar6 + 1);
        uVar5 = thunk_FUN_00713a50(uVar8,uVar5,lVar6 + 1);
        lVar9 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
      }
      *(long *)(lVar9 + 0x18) = lVar6;
    }
  }
  *(undefined8 *)(lVar9 + 0x30) = 4;
  *(undefined **)(lVar9 + 0x28) = &DAT_0081dae0;
  *(wchar_t **)(lVar9 + 0x38) = L"false";
  *(undefined8 *)(lVar9 + 0x40) = 5;
  return;
}

