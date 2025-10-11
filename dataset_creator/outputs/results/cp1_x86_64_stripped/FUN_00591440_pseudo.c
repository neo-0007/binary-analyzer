
undefined4
FUN_00591440(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = 0;
  local_50 = param_3;
  local_58 = FUN_004eac60();
  if (local_58 == 0) {
    uVar2 = 0xffffffff;
    FUN_0051f420();
    FUN_0051f540("../crypto/sm2/sm2_sign.c",0x1e5,"ossl_sm2_internal_verify");
    FUN_0051f8f0(0x35,0xc0100,0);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_004ead20(&local_58,&local_50,(long)param_4);
    if (lVar3 == 0) {
      uVar2 = 0xffffffff;
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_sign.c",0x1e9,"ossl_sm2_internal_verify");
      FUN_0051f8f0(0x35,0x68,0);
      lVar3 = 0;
    }
    else {
      iVar1 = FUN_004eae50(local_58,&local_48);
      if (param_4 == iVar1) {
        iVar1 = thunk_FUN_00713570(param_3,local_48,(long)param_4);
        if (iVar1 == 0) {
          lVar3 = FUN_004b84d0(param_1,param_2,0);
          if (lVar3 == 0) {
            uVar2 = 0xffffffff;
            FUN_0051f420();
            FUN_0051f540("../crypto/sm2/sm2_sign.c",0x1f5,"ossl_sm2_internal_verify");
            FUN_0051f8f0(0x35,0x80003,0);
          }
          else {
            uVar2 = FUN_005906c0(param_5,local_58,lVar3);
          }
          goto LAB_00591521;
        }
      }
      uVar2 = 0xffffffff;
      lVar3 = 0;
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_sign.c",0x1ef,"ossl_sm2_internal_verify");
      FUN_0051f8f0(0x35,0x68,0);
    }
  }
LAB_00591521:
  FUN_0041ad60(local_48,"../crypto/sm2/sm2_sign.c",0x1fc);
  FUN_004b7fa0(lVar3);
  FUN_004eace0(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

