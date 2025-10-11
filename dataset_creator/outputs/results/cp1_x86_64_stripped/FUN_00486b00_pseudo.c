
undefined8 FUN_00486b00(long param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*param_2 != param_3) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon_block.c",0x72,
                 "ossl_cipher_unpadblock");
    FUN_0051f8f0(0x39,0xc0103,0);
    return 0;
  }
  bVar1 = *(byte *)(param_1 + -1 + param_3);
  uVar4 = (ulong)bVar1;
  uVar2 = param_3 - 1;
  if (uVar4 - 1 < param_3) {
    if (uVar4 == 0) {
LAB_00486bc0:
      *param_2 = param_3;
      return 1;
    }
    param_3 = param_3 - uVar4;
    do {
      if (param_3 == uVar2) goto LAB_00486bc0;
      uVar2 = uVar2 - 1;
    } while (bVar1 == *(byte *)(param_1 + uVar2));
    FUN_0051f420();
    uVar3 = 0x81;
  }
  else {
    FUN_0051f420();
    uVar3 = 0x7c;
  }
  FUN_0051f540("../providers/implementations/ciphers/ciphercommon_block.c",uVar3,
               "ossl_cipher_unpadblock");
  FUN_0051f8f0(0x39,100,0);
  return 0;
}

