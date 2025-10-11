
long FUN_0042b4b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_34;
  undefined1 local_30 [8];
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004a2cd0(0,local_30,&local_34,&local_28,param_1);
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = FUN_0056a590(0,local_30,(long)local_34);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_backend.c",0x239,"ossl_rsa_key_from_pkcs8");
      FUN_0051f8f0(4,0x80004,0);
    }
    else {
      iVar1 = FUN_0042b2a0(lVar2,local_28);
      if (iVar1 == 0) {
        FUN_0042b980(lVar2);
        lVar2 = 0;
      }
      else {
        FUN_0042c5d0(lVar2,0xf000);
        iVar1 = FUN_00423da0(*local_28);
        if (iVar1 == 6) {
          FUN_0042c5f0(lVar2,0);
        }
        else if (iVar1 == 0x390) {
          FUN_0042c5f0(lVar2,0x1000);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

