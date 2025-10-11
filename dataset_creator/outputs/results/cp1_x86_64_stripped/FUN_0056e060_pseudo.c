
undefined8 FUN_0056e060(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  FUN_004b2c00(param_2);
  uVar2 = FUN_004b2df0(param_2);
  lVar3 = FUN_004b2df0(param_2);
  if (lVar3 != 0) {
    FUN_004b7e70(lVar3,4);
    iVar1 = FUN_004b8190(lVar3,2);
    if (iVar1 != 0) {
      iVar1 = FUN_004b5a10(uVar2,lVar3,*(undefined8 *)(param_1 + 0x30),
                           *(undefined8 *)(param_1 + 0x28),param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_004b5a10(uVar2,uVar2,*(undefined8 *)(param_1 + 0x38),
                             *(undefined8 *)(param_1 + 0x28),param_2);
        if (iVar1 != 0) {
          iVar1 = FUN_004b7840(lVar3,uVar2);
          if (iVar1 == 0) {
            uVar4 = 1;
            goto LAB_0056e0e9;
          }
        }
      }
    }
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_gen.c",0x1b4,"ossl_rsa_sp800_56b_pairwise_test");
    FUN_0051f8f0(4,0xb1,0);
  }
LAB_0056e0e9:
  FUN_004b2d50(param_2);
  return uVar4;
}

