
undefined8
FUN_005b4200(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (*param_1)(param_3,0);
  if (iVar1 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_digest.c",0x24,"ASN1_digest");
    FUN_0051f8f0(0xd,0xc0103,0);
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0041ad90((long)iVar1,"../crypto/asn1/a_digest.c",0x27);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_digest.c",0x28,"ASN1_digest");
      FUN_0051f8f0(0xd,0xc0100,0);
      uVar3 = 0;
    }
    else {
      local_48 = lVar2;
      (*param_1)(param_3,&local_48);
      iVar1 = FUN_00407440(lVar2,(long)iVar1,param_4,param_5,param_2,0);
      if (iVar1 == 0) {
        FUN_0041ad60(lVar2,"../crypto/asn1/a_digest.c",0x2f);
        uVar3 = 0;
      }
      else {
        FUN_0041ad60(lVar2,"../crypto/asn1/a_digest.c",0x32);
        uVar3 = 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

