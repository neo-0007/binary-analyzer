
undefined4
FUN_0047e1a0(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = FUN_0043b840();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_4 < 0x40) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0xa4,"ed25519_digest_sign");
      FUN_0051f8f0(0x39,0x6a,0);
      return 0;
    }
    iVar2 = FUN_004e3ff0(param_2,param_5,param_6,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x50),*param_1
                         ,0);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0xad,"ed25519_digest_sign");
      FUN_0051f8f0(0x39,0xaf,0);
      return 0;
    }
  }
  *param_3 = 0x40;
  return 1;
}

