
int FUN_005b4830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  iVar3 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = FUN_004a6000(param_3,&local_28,param_1);
  if (local_28 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_i2d_fp.c",0x5e,"ASN1_item_i2d_bio");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  else {
    while( true ) {
      iVar2 = FUN_004ab7e0(param_2,local_28 + iVar3,iVar1);
      if (iVar1 == iVar2) break;
      if (iVar2 < 1) {
        iVar3 = 0;
        goto LAB_005b48ae;
      }
      iVar3 = iVar3 + iVar2;
      iVar1 = iVar1 - iVar2;
    }
    iVar3 = 1;
LAB_005b48ae:
    FUN_0041ad60(local_28,"../crypto/asn1/a_i2d_fp.c",0x6d);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

