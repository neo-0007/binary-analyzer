
long FUN_005fe170(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar4 = FUN_004a2c10();
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_pkey.c",0x85,"EVP_PKEY2PKCS8");
      FUN_0051f8f0(6,0xc0100,0);
      goto LAB_005fe236;
    }
    lVar3 = 0;
    lVar5 = lVar4;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_pkey.c",0x94,"EVP_PKEY2PKCS8");
      FUN_0051f8f0(6,0x76,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x48);
      if (pcVar1 == (code *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_pkey.c",0x90,"EVP_PKEY2PKCS8");
        FUN_0051f8f0(6,0x90,0);
      }
      else {
        iVar2 = (*pcVar1)(lVar4,param_1);
        if (iVar2 != 0) goto LAB_005fe22e;
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_pkey.c",0x8c,"EVP_PKEY2PKCS8");
        FUN_0051f8f0(6,0x92,0);
      }
    }
LAB_005fe223:
    lVar4 = 0;
    FUN_004a2c30(lVar5);
  }
  else {
    local_38 = 0;
    local_30 = 0;
    lVar3 = FUN_00518970(param_1,0x87,"DER","PrivateKeyInfo",0);
    if (lVar3 == 0) {
LAB_005fe220:
      lVar5 = 0;
      goto LAB_005fe223;
    }
    iVar2 = FUN_00517380(lVar3,&local_38,&local_30);
    if (iVar2 == 0) goto LAB_005fe220;
    local_28 = local_38;
    lVar4 = FUN_004a2bb0(0,&local_28,local_30);
    FUN_0041ad60(local_38,"../crypto/evp/evp_pkey.c",0x7f);
    if (lVar4 == 0) goto LAB_005fe220;
  }
LAB_005fe22e:
  FUN_00518590(lVar3);
LAB_005fe236:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

