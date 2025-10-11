
undefined8 FUN_005a7c60(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x919,"X509_STORE_CTX_init");
    FUN_0051f8f0(0xb,0xc0102,0);
    return 0;
  }
  FUN_005a7b60();
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  if (param_2 == 0) {
    param_1[0xb] = 0;
    param_1[9] = (long)FUN_005a2b70;
    param_1[0x11] = 0;
    param_1[8] = (long)FUN_005a09f0;
    param_1[7] = (long)FUN_005a2b60;
    param_1[6] = (long)FUN_005a4b40;
    param_1[10] = (long)&LAB_005a58a0;
    param_1[0xc] = (long)&LAB_005a83c0;
    param_1[0xd] = (long)FUN_005a2d60;
    param_1[0xe] = (long)FUN_005a32d0;
    param_1[0xf] = (long)FUN_005a03b0;
    param_1[0x10] = (long)&LAB_005a0540;
    lVar6 = FUN_005a8b60();
    param_1[4] = lVar6;
    if (lVar6 == 0) goto LAB_005a7fd3;
    *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 0x11;
LAB_005a7e4a:
    uVar7 = FUN_005a9600("default");
    iVar2 = FUN_005a8ff0(param_1[4],uVar7);
    if (iVar2 != 0) {
      if (*(int *)(param_1[4] + 0x24) == 0) {
        uVar3 = FUN_0059a9b0(*(undefined4 *)(param_1[4] + 0x20));
        lVar6 = FUN_0059a910(uVar3);
        if (lVar6 != 0) {
          lVar1 = param_1[4];
          uVar3 = FUN_0059adb0(lVar6);
          *(undefined4 *)(lVar1 + 0x24) = uVar3;
        }
      }
      iVar2 = FUN_004196b0(5,param_1,param_1 + 0x1c);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_0051f420();
      uVar7 = 0x996;
      goto LAB_005a7ea3;
    }
  }
  else {
    param_1[0x11] = *(long *)(param_2 + 0x78);
    pcVar4 = *(code **)(param_2 + 0x38);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a2b70;
    }
    param_1[9] = (long)pcVar4;
    pcVar4 = *(code **)(param_2 + 0x30);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a09f0;
    }
    param_1[8] = (long)pcVar4;
    pcVar4 = *(code **)(param_2 + 0x28);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a2b60;
    }
    param_1[7] = (long)pcVar4;
    pcVar4 = *(code **)(param_2 + 0x20);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a4b40;
    }
    param_1[6] = (long)pcVar4;
    puVar5 = *(undefined1 **)(param_2 + 0x40);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &LAB_005a58a0;
    }
    param_1[10] = (long)puVar5;
    param_1[0xb] = *(long *)(param_2 + 0x48);
    puVar5 = *(undefined1 **)(param_2 + 0x50);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &LAB_005a83c0;
    }
    param_1[0xc] = (long)puVar5;
    pcVar4 = *(code **)(param_2 + 0x58);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a2d60;
    }
    param_1[0xd] = (long)pcVar4;
    pcVar4 = *(code **)(param_2 + 0x60);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_005a32d0;
    }
    param_1[0xe] = (long)pcVar4;
    if (*(long *)(param_2 + 0x68) == 0) {
      param_1[0xf] = (long)FUN_005a03b0;
      lVar6 = *(long *)(param_2 + 0x70);
      if (lVar6 == 0) goto LAB_005a7fb0;
LAB_005a7e1d:
      param_1[0x10] = lVar6;
      lVar6 = FUN_005a8b60();
      param_1[4] = lVar6;
    }
    else {
      param_1[0xf] = *(long *)(param_2 + 0x68);
      lVar6 = *(long *)(param_2 + 0x70);
      if (lVar6 != 0) goto LAB_005a7e1d;
LAB_005a7fb0:
      param_1[0x10] = (long)&LAB_005a0540;
      lVar6 = FUN_005a8b60();
      param_1[4] = lVar6;
    }
    if (lVar6 == 0) {
LAB_005a7fd3:
      FUN_0051f420();
      uVar7 = 0x974;
      goto LAB_005a7ea3;
    }
    iVar2 = FUN_005a8ff0(lVar6,*(undefined8 *)(param_2 + 0x18));
    if (iVar2 != 0) goto LAB_005a7e4a;
  }
  FUN_0051f420();
  uVar7 = 0x983;
LAB_005a7ea3:
  FUN_0051f540("../crypto/x509/x509_vfy.c",uVar7,"X509_STORE_CTX_init");
  FUN_0051f8f0(0xb,0xc0100,0);
  FUN_005a7b60(param_1);
  return 0;
}

