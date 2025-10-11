
undefined4 FUN_005b4650(code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (*param_1)(param_3,0);
  uVar4 = 0;
  if (0 < iVar1) {
    lVar3 = FUN_0041ad90((long)iVar1,"../crypto/asn1/a_i2d_fp.c",0x2c);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_i2d_fp.c",0x2e,"ASN1_i2d_bio");
      FUN_0051f8f0(0xd,0xc0100,0);
      uVar4 = 0;
    }
    else {
      local_48 = lVar3;
      (*param_1)(param_3,&local_48);
      iVar5 = 0;
      while( true ) {
        iVar2 = FUN_004ab7e0(param_2,iVar5 + lVar3,iVar1);
        if (iVar1 == iVar2) break;
        if (iVar2 < 1) {
          uVar4 = 0;
          goto LAB_005b46f3;
        }
        iVar5 = iVar5 + iVar2;
        iVar1 = iVar1 - iVar2;
      }
      uVar4 = 1;
LAB_005b46f3:
      FUN_0041ad60(lVar3,"../crypto/asn1/a_i2d_fp.c",0x40);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

