
ulong FUN_0044ab80(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  uVar3 = FUN_0043b840();
  if ((int)uVar3 != 0) {
    if (param_6 == 0) {
      *param_3 = 0;
      return 1;
    }
    if (param_4 < param_6) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x11d,
                   "chacha20_poly1305_cipher");
      FUN_0051f8f0(0x39,0x6a,0);
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,param_5,param_6);
      uVar3 = (ulong)(iVar2 != 0);
    }
  }
  return uVar3;
}

