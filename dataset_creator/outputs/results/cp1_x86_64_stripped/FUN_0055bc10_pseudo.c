
long FUN_0055bc10(undefined8 *param_1,undefined8 param_2,int param_3,long param_4,int param_5,
                 long *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_00535890();
  local_44 = 0;
  if (lVar3 == 0) {
    FUN_0051f420(param_1,param_2);
    lVar6 = 0;
    FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x1f,"PKCS12_pbe_crypt_ex");
    FUN_0051f8f0(0x23,0xc0100,0);
    goto LAB_0055bdcc;
  }
  lVar6 = 0;
  iVar1 = FUN_00539340(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
  if (iVar1 == 0) goto LAB_0055bdcc;
  iVar1 = FUN_004096f0(lVar3);
  iVar1 = iVar1 + param_5;
  uVar4 = FUN_00409860(lVar3);
  uVar5 = FUN_004098c0(uVar4);
  if ((uVar5 & 0x2000000) == 0) {
LAB_0055bd30:
    lVar6 = FUN_0041ad90((long)iVar1,"../crypto/pkcs12/p12_decr.c",0x46);
    if (lVar6 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x47,"PKCS12_pbe_crypt_ex");
      FUN_0051f8f0(0x23,0xc0100,0);
      goto LAB_0055bdcc;
    }
    iVar2 = FUN_005366f0(lVar3,lVar6,&local_48,param_4,param_5);
    iVar1 = local_48;
    if (iVar2 == 0) {
      FUN_0041ad60(lVar6,"../crypto/pkcs12/p12_decr.c",0x4c);
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x4e,"PKCS12_pbe_crypt_ex");
      FUN_0051f8f0(0x23,0x80006,0);
      lVar6 = 0;
      goto LAB_0055bdcc;
    }
    iVar2 = FUN_00536ac0(lVar3,local_48 + lVar6,&local_48);
    if (iVar2 == 0) {
      FUN_0041ad60(lVar6,"../crypto/pkcs12/p12_decr.c",0x54);
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x56,"PKCS12_pbe_crypt_ex");
      pcVar7 = "empty password";
      if (param_3 != 0) {
        pcVar7 = "maybe wrong password";
      }
      FUN_0051f8f0(0x23,0x74,pcVar7);
      lVar6 = 0;
      goto LAB_0055bdcc;
    }
    iVar1 = iVar1 + local_48;
    uVar4 = FUN_00409860(lVar3);
    uVar5 = FUN_004098c0(uVar4);
    if (((uVar5 & 0x2000000) != 0) && (iVar2 = FUN_004098b0(lVar3), iVar2 != 0)) {
      iVar2 = FUN_00536c00(lVar3,0x10,local_44,iVar1 + lVar6);
      if (iVar2 < 0) {
        FUN_0051f420();
        uVar4 = 0x61;
        goto LAB_0055bf47;
      }
      iVar1 = iVar1 + local_44;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = iVar1;
    }
    if (param_6 != (long *)0x0) {
      *param_6 = lVar6;
    }
  }
  else {
    iVar2 = FUN_00536c00(lVar3,0x16,0,&local_44);
    if (-1 < iVar2) {
      iVar2 = FUN_004098b0(lVar3);
      if (iVar2 == 0) {
        if (param_5 < local_44) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x3a,"PKCS12_pbe_crypt_ex");
          FUN_0051f8f0(0x23,0x77,0);
          lVar6 = 0;
          goto LAB_0055bdcc;
        }
        param_5 = param_5 - local_44;
        iVar2 = FUN_00536c00(lVar3,0x11,local_44,param_5 + param_4);
        if (iVar2 < 0) {
          FUN_0051f420();
          uVar4 = 0x40;
          goto LAB_0055bf47;
        }
      }
      else {
        iVar1 = iVar1 + local_44;
      }
      goto LAB_0055bd30;
    }
    FUN_0051f420();
    uVar4 = 0x32;
LAB_0055bf47:
    FUN_0051f540("../crypto/pkcs12/p12_decr.c",uVar4,"PKCS12_pbe_crypt_ex");
    FUN_0051f8f0(0x23,0xc0103,0);
  }
LAB_0055bdcc:
  FUN_00537b70(lVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar6;
}

