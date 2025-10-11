
undefined4 FUN_0056d470(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0056d580;
  iVar1 = FUN_004b7bb0();
  if (0x4000 < iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x125,"ossl_rsa_sp800_56b_check_public");
    FUN_0051f8f0(4,0x69,0);
    uVar6 = 0;
    goto LAB_0056d580;
  }
  iVar2 = FUN_004b7d40(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x134,"ossl_rsa_sp800_56b_check_public");
    FUN_0051f8f0(4,0xae,0);
    uVar6 = 0;
    goto LAB_0056d580;
  }
  iVar2 = FUN_0056d150(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",0x139,"ossl_rsa_sp800_56b_check_public");
    FUN_0051f8f0(4,0xb2,0);
    uVar6 = 0;
    goto LAB_0056d580;
  }
  lVar3 = FUN_004b2a70(*(undefined8 *)(param_1 + 8));
  lVar4 = FUN_004b7690();
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_005c3bc0();
    iVar2 = FUN_004b6d50(lVar4,*(undefined8 *)(param_1 + 0x28),uVar5,lVar3);
    if (iVar2 == 0) {
LAB_0056d53a:
      FUN_0051f420();
      uVar5 = 0x148;
    }
    else {
      iVar2 = FUN_004b7cc0(lVar4);
      if (iVar2 == 0) goto LAB_0056d53a;
      iVar2 = FUN_005c3c30(*(undefined8 *)(param_1 + 0x28),5,lVar3,0,1,&local_34);
      if ((iVar2 == 1) && ((uVar6 = 1, local_34 == 2 || ((local_34 == 1 && (iVar1 < 0x200))))))
      goto LAB_0056d56d;
      FUN_0051f420();
      uVar5 = 0x155;
    }
    uVar6 = 0;
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_check.c",uVar5,"ossl_rsa_sp800_56b_check_public");
    FUN_0051f8f0(4,0xae,0);
  }
LAB_0056d56d:
  FUN_004b7fa0(lVar4);
  FUN_004b2b50(lVar3);
LAB_0056d580:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

