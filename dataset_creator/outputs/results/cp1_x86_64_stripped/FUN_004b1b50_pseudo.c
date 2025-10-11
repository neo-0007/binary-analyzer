
long * FUN_004b1b50(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x50,"../crypto/bn/bn_blind.c",0x24);
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_blind.c",0x25,"BN_BLINDING_new");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    lVar3 = FUN_00422240();
    plVar2[9] = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_blind.c",0x2b,"BN_BLINDING_new");
      FUN_0051f8f0(3,0xc0100,0);
      FUN_0041ad60(plVar2,"../crypto/bn/bn_blind.c",0x2c);
      return (long *)0x0;
    }
    FUN_004b1b30(plVar2);
    if (param_1 != 0) {
      lVar3 = FUN_004b82e0(param_1);
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_004b1c28;
    }
    if (param_2 != 0) {
      lVar3 = FUN_004b82e0(param_2);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_004b1c28;
    }
    lVar3 = FUN_004b82e0(param_3);
    plVar2[3] = lVar3;
    if (lVar3 == 0) {
LAB_004b1c28:
      FUN_004b1980(plVar2);
      return (long *)0x0;
    }
    iVar1 = FUN_004b7e80(param_3,4);
    if (iVar1 != 0) {
      FUN_004b7e70(plVar2[3],4);
    }
    *(undefined4 *)(plVar2 + 5) = 0xffffffff;
  }
  return plVar2;
}

