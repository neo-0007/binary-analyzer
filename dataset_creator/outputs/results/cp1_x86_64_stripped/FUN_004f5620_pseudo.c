
undefined8 FUN_004f5620(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    FUN_0051f420();
    uVar4 = 0xb2;
  }
  else {
    lVar3 = thunk_FUN_00541030();
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00541030(*(undefined8 *)(param_1 + 0x88));
      }
      if (param_2 != 0) {
        uVar4 = FUN_004ee3f0(lVar3);
        iVar1 = FUN_004ef0d0(param_2,*param_3,uVar4,lVar5,0);
        if (iVar1 < 1) {
          return 0;
        }
        *param_3 = (long)iVar1;
        return 1;
      }
      lVar5 = FUN_004ee2d0(lVar5);
      if (lVar5 != 0) {
        iVar2 = FUN_004efad0(lVar5);
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        *param_3 = (long)(iVar1 >> 3);
        return 1;
      }
      return 0;
    }
    FUN_0051f420();
    uVar4 = 0xb7;
  }
  FUN_0051f540("../crypto/ec/ec_pmeth.c",uVar4,"pkey_ec_derive");
  FUN_0051f8f0(0x10,0x8c,0);
  return 0;
}

