
bool FUN_004333e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long in_FS_OFFSET;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 4;
  local_58 = param_3;
  local_50 = param_2;
  iVar1 = FUN_004a7640(&local_58,0);
  iVar2 = FUN_0056b040(param_6);
  if (iVar1 < iVar2 + -10) {
    lVar3 = FUN_0041ad90(iVar2 + 1,"../crypto/rsa/rsa_saos.c",0x2a);
    if (lVar3 == 0) {
      FUN_0051f420();
      bVar4 = false;
      FUN_0051f540("../crypto/rsa/rsa_saos.c",0x2c,"RSA_sign_ASN1_OCTET_STRING");
      FUN_0051f8f0(4,0xc0100,0);
    }
    else {
      local_60 = lVar3;
      FUN_004a7640(&local_58,&local_60);
      iVar1 = FUN_0056b080(iVar1,lVar3,param_4,param_6,1);
      bVar4 = 0 < iVar1;
      if (bVar4) {
        *param_5 = iVar1;
      }
      FUN_0041aef0(lVar3,iVar2 + 1,"../crypto/rsa/rsa_saos.c",0x37);
    }
  }
  else {
    FUN_0051f420();
    bVar4 = false;
    FUN_0051f540("../crypto/rsa/rsa_saos.c",0x27,"RSA_sign_ASN1_OCTET_STRING");
    FUN_0051f8f0(4,0x70,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

