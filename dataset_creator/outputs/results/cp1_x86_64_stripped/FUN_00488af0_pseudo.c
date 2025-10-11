
undefined8
FUN_00488af0(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0x159,"ossl_gcm_cipher"
                  );
      FUN_0051f8f0(0x39,0x6a,0);
    }
    else {
      iVar1 = FUN_00487d10(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}

