
undefined8 FUN_005901d0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
LAB_00590268:
    FUN_0051f420();
    FUN_0051f540("../crypto/sm2/sm2_key.c",0x21,"ossl_sm2_key_private_check");
    FUN_0051f8f0(0x35,0xc0102,0);
    return 0;
  }
  lVar2 = FUN_004ee2d0();
  if (lVar2 == 0) goto LAB_00590268;
  lVar3 = FUN_004ee2e0(param_1);
  if (lVar3 == 0) goto LAB_00590268;
  lVar2 = FUN_004ef7e0(lVar2);
  if (lVar2 == 0) goto LAB_00590268;
  lVar2 = FUN_004b82e0(lVar2);
  if (lVar2 != 0) {
    iVar1 = FUN_004bcb60(lVar2,1);
    if (iVar1 != 0) {
      uVar4 = FUN_004b75a0();
      iVar1 = FUN_004b7840(lVar3,uVar4);
      if (-1 < iVar1) {
        iVar1 = FUN_004b7840(lVar3,lVar2);
        if (iVar1 < 0) {
          uVar4 = 1;
          goto LAB_005902db;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_key.c",0x2b,"ossl_sm2_key_private_check");
      FUN_0051f8f0(0x35,0x71,0);
    }
  }
  uVar4 = 0;
LAB_005902db:
  FUN_004b7fa0(lVar2);
  return uVar4;
}

