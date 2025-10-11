
undefined8 FUN_004f5b50(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) && (*plVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_pmeth.c",0x1ca,"pkey_ec_keygen");
    FUN_0051f8f0(0x10,0x8b,0);
  }
  else {
    lVar3 = FUN_004ed600();
    if (lVar3 != 0) {
      iVar2 = FUN_0040f1c0(param_2,0x198,lVar3);
      if (iVar2 == 0) {
        FUN_004ed620(lVar3);
        return 0;
      }
      if (*(long *)(param_1 + 0x88) == 0) {
        iVar2 = FUN_004ee8b0(lVar3,*plVar1);
      }
      else {
        iVar2 = FUN_00410570(param_2);
      }
      if (iVar2 != 0) {
        uVar4 = FUN_004eda10(lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}

