
long FUN_004ec330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_3c;
  int *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = (int *)0x0;
  local_30 = 0;
  FUN_004a8930(0,&local_3c,&local_38,param_1);
  local_30 = FUN_004ed610(param_2,param_3);
  if (local_30 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_backend.c",0x303,"ossl_ec_key_param_from_x509_algor");
    FUN_0051f8f0(0x10,0xc0100,0);
    lVar3 = 0;
  }
  else if (local_3c == 0x10) {
    local_28 = *(undefined8 *)(local_38 + 2);
    lVar4 = FUN_004ea840(&local_30,&local_28,(long)*local_38);
    lVar3 = local_30;
    if (lVar4 != 0) goto LAB_004ec3f6;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_backend.c",0x30e,"ossl_ec_key_param_from_x509_algor");
    FUN_0051f8f0(0x10,0x8e,0);
    lVar3 = 0;
  }
  else if (local_3c == 6) {
    uVar1 = FUN_00423da0(local_38);
    lVar3 = FUN_004ec9c0(param_2,param_3,uVar1);
    if (lVar3 != 0) {
      FUN_004ef8a0(lVar3,1);
      iVar2 = FUN_004ee8b0(local_30,lVar3);
      if (iVar2 != 0) {
        FUN_004efd00(lVar3);
        lVar3 = local_30;
        goto LAB_004ec3f6;
      }
    }
  }
  else {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/ec/ec_backend.c",800,"ossl_ec_key_param_from_x509_algor");
    FUN_0051f8f0(0x10,0x8e,0);
  }
  FUN_004ed620(local_30);
  FUN_004efd00(lVar3);
  lVar3 = 0;
LAB_004ec3f6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

