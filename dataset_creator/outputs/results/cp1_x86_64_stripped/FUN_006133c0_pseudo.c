
long FUN_006133c0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/x509/v3_skid.c",0x43,"ossl_x509_pubkey_hash");
    FUN_0051f8f0(0x22,0x72,0);
    goto LAB_00613492;
  }
  iVar1 = FUN_005afb90(&local_80,&local_88,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_004069d0(local_80,&DAT_007d039e,local_88);
    if (lVar2 != 0) {
      lVar3 = FUN_004a7670();
      if (lVar3 == 0) {
LAB_006134b0:
        FUN_00406a50(lVar2);
        goto LAB_00613492;
      }
      FUN_005afa30(0,&local_90,&local_98,0,param_1);
      iVar1 = FUN_00407440(local_90,(long)local_98,local_78,&local_94,lVar2,0);
      if (iVar1 != 0) {
        iVar1 = thunk_FUN_004a1fa0(lVar3,local_78,local_94);
        if (iVar1 != 0) goto LAB_006134b0;
      }
      FUN_00406a50(lVar2);
      thunk_FUN_004a2270(lVar3);
    }
  }
  lVar3 = 0;
LAB_00613492:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

