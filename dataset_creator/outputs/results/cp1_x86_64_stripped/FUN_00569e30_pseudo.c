
undefined8 FUN_00569e30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_50[0] = param_2;
  iVar1 = FUN_00423da0(*param_3);
  if (iVar1 != 0x390) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x211,"ossl_rsa_pss_to_ctx");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(4,0x9b,0);
    goto LAB_00569eb1;
  }
  uVar3 = FUN_0042b160(param_3);
  iVar1 = FUN_00569d50(uVar3,&local_30,&local_38,&local_3c);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x218,"ossl_rsa_pss_to_ctx");
    uVar4 = 0xffffffff;
    FUN_0051f8f0(4,0x95,0);
  }
  else {
    if (param_4 == 0) {
      iVar1 = FUN_004148f0(local_50[0],&local_28);
      if (0 < iVar1) {
        iVar1 = FUN_0040aaf0(local_30);
        iVar2 = FUN_0040aaf0(local_28);
        if (iVar1 == iVar2) goto LAB_00569f22;
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x225,"ossl_rsa_pss_to_ctx");
        FUN_0051f8f0(4,0x9e,0);
      }
    }
    else {
      iVar1 = FUN_0040cb10(param_1,local_50,local_30,0,param_4);
      if (iVar1 != 0) {
LAB_00569f22:
        iVar1 = FUN_0042ca30(local_50[0],6);
        if (0 < iVar1) {
          iVar1 = FUN_0042ced0(local_50[0],local_3c);
          if (0 < iVar1) {
            uVar4 = 1;
            iVar1 = FUN_0042cb50(local_50[0],local_38);
            if (0 < iVar1) goto LAB_00569f66;
          }
        }
      }
    }
    uVar4 = 0xffffffff;
  }
LAB_00569f66:
  FUN_0056a4a0(uVar3);
LAB_00569eb1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

