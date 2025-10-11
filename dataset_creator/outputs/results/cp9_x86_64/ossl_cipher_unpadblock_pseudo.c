
undefined8 ossl_cipher_unpadblock(long param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*param_2 != param_3) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon_block.c",0x72,
                  "ossl_cipher_unpadblock");
    ERR_set_error(0x39,0xc0103,0);
    return 0;
  }
  bVar1 = *(byte *)(param_1 + -1 + param_3);
  uVar4 = (ulong)bVar1;
  uVar2 = param_3 - 1;
  if (uVar4 - 1 < param_3) {
    if (uVar4 == 0) {
LAB_00484860:
      *param_2 = param_3;
      return 1;
    }
    param_3 = param_3 - uVar4;
    do {
      if (param_3 == uVar2) goto LAB_00484860;
      uVar2 = uVar2 - 1;
    } while (bVar1 == *(byte *)(param_1 + uVar2));
    ERR_new();
    uVar3 = 0x81;
  }
  else {
    ERR_new();
    uVar3 = 0x7c;
  }
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon_block.c",uVar3,
                "ossl_cipher_unpadblock");
  ERR_set_error(0x39,100,0);
  return 0;
}

