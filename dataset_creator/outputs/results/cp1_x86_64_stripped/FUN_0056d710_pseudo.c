
undefined4 FUN_0056d710(long param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x30) == 0)) ||
     ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(param_1 + 0x28) == 0)))) {
    FUN_0051f420();
    uVar4 = 0x182;
LAB_0056d801:
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",uVar4,"ossl_rsa_sp800_56b_check_keypair");
    FUN_0051f8f0(4,0xaf,0);
    return 0;
  }
  iVar1 = FUN_0056dca0(param_4,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (param_2 != 0) {
    iVar1 = FUN_004b7840(param_2,uVar4);
    if (iVar1 != 0) {
      FUN_0051f420();
      uVar4 = 0x18d;
      goto LAB_0056d801;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  iVar1 = FUN_0056d150(uVar4);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x194,"ossl_rsa_sp800_56b_check_keypair");
    FUN_0051f8f0(4,0xb2,0);
    return 0;
  }
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x28));
  if (iVar1 != param_4) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x199,"ossl_rsa_sp800_56b_check_keypair");
    FUN_0051f8f0(4,0xab,0);
    return 0;
  }
  lVar2 = FUN_004b2a70(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  FUN_004b2c00(lVar2);
  lVar3 = FUN_004b2df0(lVar2);
  if ((lVar3 != 0) &&
     (iVar1 = FUN_004bacf0(lVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                           lVar2), iVar1 != 0)) {
    iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x28),lVar3);
    if (iVar1 == 0) {
      iVar1 = FUN_0056d040(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),param_4,
                           lVar2);
      if ((((iVar1 == 0) ||
           (iVar1 = FUN_0056d040(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
                                 param_4,lVar2), iVar1 == 0)) ||
          (iVar1 = FUN_0056d190(lVar3,*(undefined8 *)(param_1 + 0x40),
                                *(undefined8 *)(param_1 + 0x48),param_4), iVar1 < 1)) ||
         ((iVar1 = FUN_0056d2d0(param_1,param_4,lVar2), iVar1 == 0 ||
          (iVar1 = FUN_0056cd10(param_1,lVar2), iVar1 == 0)))) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x1b4,"ossl_rsa_sp800_56b_check_keypair")
        ;
        FUN_0051f8f0(4,0xab,0);
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_0056d929;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x1a7,"ossl_rsa_sp800_56b_check_keypair");
    FUN_0051f8f0(4,0xaf,0);
  }
  uVar5 = 0;
LAB_0056d929:
  FUN_004b7780(lVar3);
  FUN_004b2d50(lVar2);
  FUN_004b2b50(lVar2);
  return uVar5;
}

