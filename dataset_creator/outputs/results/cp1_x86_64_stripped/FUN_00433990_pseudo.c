
undefined8 FUN_00433990(long *param_1,long *param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sign.c",0xfa,"encode_pkcs1");
    FUN_0051f8f0(4,0x75,0);
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_00433800(param_3,&local_48);
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_sign.c",0xff,"encode_pkcs1");
      FUN_0051f8f0(4,0x74,0);
      uVar3 = 0;
    }
    else {
      lVar4 = local_48 + param_5;
      lVar2 = FUN_0041ad90(lVar4,"../crypto/rsa/rsa_sign.c",0x104);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_sign.c",0x106,"encode_pkcs1");
        FUN_0051f8f0(4,0xc0100,0);
        uVar3 = 0;
      }
      else {
        thunk_FUN_00713a50(lVar2,lVar1,local_48);
        thunk_FUN_00713a50(local_48 + lVar2,param_4,param_5);
        *param_1 = lVar2;
        uVar3 = 1;
        *param_2 = lVar4;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

