
undefined8 FUN_0055f970(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  uVar1 = FUN_00423da0(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_00423b00(uVar1);
  lVar4 = FUN_0040d800(uVar3);
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_00405f40();
    if (lVar5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x3a1,"PKCS7_SIGNER_INFO_sign");
      FUN_0051f8f0(0x21,0xc0100,0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = FUN_005614f0(uVar7);
      uVar7 = FUN_005614d0(uVar7);
      uVar8 = FUN_0040ab30(lVar4);
      iVar2 = FUN_0040ca80(lVar5,&local_58,uVar8,uVar7,uVar6,uVar3);
      if (0 < iVar2) {
        uVar7 = FUN_0055dd90();
        iVar2 = FUN_004a6000(*(undefined8 *)(param_1 + 0x18),&local_50,uVar7);
        if ((local_50 != 0) && (iVar2 = FUN_0040cb40(lVar5,local_50,(long)iVar2), 0 < iVar2)) {
          FUN_0041ad60(local_50,"../crypto/pkcs7/pk7_doit.c",0x3b1);
          local_50 = 0;
          iVar2 = FUN_0040cd00(lVar5,0,&local_48);
          if ((0 < iVar2) &&
             ((local_50 = FUN_0041ad90(CONCAT44(uStack_44,local_48),"../crypto/pkcs7/pk7_doit.c",
                                       0x3b5), local_50 != 0 &&
              (iVar2 = FUN_0040cd00(lVar5,local_50,&local_48), 0 < iVar2)))) {
            FUN_00406b90(lVar5);
            FUN_004a2150(*(undefined8 *)(param_1 + 0x28),local_50,local_48);
            uVar3 = 1;
            goto LAB_0055faf8;
          }
        }
      }
    }
    FUN_0041ad60(local_50,"../crypto/pkcs7/pk7_doit.c",0x3c2);
    FUN_00406b90(lVar5);
    uVar3 = 0;
  }
LAB_0055faf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

