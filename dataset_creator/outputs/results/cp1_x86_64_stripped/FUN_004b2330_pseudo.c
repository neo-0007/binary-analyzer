
undefined2 * FUN_004b2330(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined2 *local_40;
  
  iVar1 = FUN_004b7bb0();
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  lVar7 = (long)((iVar1 + 2) / 0x13 + 1);
  plVar2 = (long *)FUN_0041ad90(lVar7 * 8,"../crypto/bn/bn_conv.c",0x47);
  lVar3 = (long)(iVar1 + 5);
  puVar4 = (undefined2 *)FUN_0041ad90(lVar3,"../crypto/bn/bn_conv.c",0x48);
  if ((puVar4 == (undefined2 *)0x0) || (plVar2 == (long *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_conv.c",0x4a,"BN_bn2dec");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    lVar5 = FUN_004b82e0(param_1);
    if (lVar5 != 0) {
      iVar1 = FUN_004b7ba0(lVar5);
      if (iVar1 != 0) {
        *puVar4 = 0x30;
LAB_004b23fa:
        FUN_0041ad60(plVar2,"../crypto/bn/bn_conv.c",0x75);
        FUN_004b7fa0(lVar5);
        return puVar4;
      }
      iVar1 = FUN_004b7d60(lVar5);
      plVar9 = plVar2;
      local_40 = puVar4;
      if (iVar1 != 0) {
        local_40 = (undefined2 *)((long)puVar4 + 1);
        *(undefined1 *)puVar4 = 0x2d;
      }
      while (iVar1 = FUN_004b7ba0(lVar5), iVar1 == 0) {
        if (lVar7 <= (long)plVar9 - (long)plVar2 >> 3) goto LAB_004b2570;
        lVar6 = FUN_004bc970(lVar5,10000000000000000000);
        *plVar9 = lVar6;
        if (lVar6 == -1) goto LAB_004b2570;
        plVar9 = plVar9 + 1;
      }
      iVar1 = FUN_004aeb30(local_40,lVar3 - ((long)local_40 - (long)puVar4),&DAT_007cfad0,plVar9[-1]
                          );
      if (-1 < iVar1) {
        puVar8 = (undefined1 *)((long)local_40 + (long)iVar1);
        while (plVar9 = plVar9 + -1, plVar2 != plVar9) {
          iVar1 = FUN_004aeb30(puVar8,lVar3 - ((long)puVar8 - (long)puVar4),"%019lu",plVar9[-1]);
          if (iVar1 < 0) goto LAB_004b2570;
          puVar8 = puVar8 + iVar1;
        }
        goto LAB_004b23fa;
      }
LAB_004b2570:
      FUN_0041ad60(plVar2,"../crypto/bn/bn_conv.c",0x75);
      FUN_004b7fa0(lVar5);
      goto LAB_004b246b;
    }
  }
  FUN_0041ad60(plVar2,"../crypto/bn/bn_conv.c",0x75);
  FUN_004b7fa0(0);
LAB_004b246b:
  FUN_0041ad60(puVar4,"../crypto/bn/bn_conv.c",0x79);
  return (undefined2 *)0x0;
}

