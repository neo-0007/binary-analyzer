
long FUN_004ec500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  iVar1 = FUN_004a2cd0(0,&local_38,&local_3c,&local_28,param_1);
  lVar3 = 0;
  if (iVar1 != 0) {
    local_30 = FUN_004ec330(local_28,param_2,param_3);
    if (local_30 != 0) {
      lVar2 = FUN_004ea1b0(&local_30,&local_38,(long)local_3c);
      lVar3 = local_30;
      if (lVar2 != 0) goto LAB_004ec594;
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_backend.c",0x33c,"ossl_ec_key_from_pkcs8");
      FUN_0051f8f0(0x10,0x8e,0);
    }
    FUN_004ed620(local_30);
    lVar3 = 0;
  }
LAB_004ec594:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

