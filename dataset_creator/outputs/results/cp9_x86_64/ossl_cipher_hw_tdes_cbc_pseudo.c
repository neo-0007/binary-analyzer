
undefined8 ossl_cipher_hw_tdes_cbc(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(code **)(param_1 + 0x240) == (code *)0x0) {
    uVar3 = param_4;
    if (0x3fffffffffffffff < param_4) {
      do {
        lVar2 = param_4 - uVar3;
        lVar1 = param_4 - uVar3;
        uVar3 = uVar3 + 0xc000000000000000;
        DES_ede3_cbc_encrypt
                  (param_3 + lVar1,param_2 + lVar2,0x4000000000000000,
                   (DES_key_schedule *)(param_1 + 0xc0),(DES_key_schedule *)(param_1 + 0x140),
                   (DES_key_schedule *)(param_1 + 0x1c0),(DES_cblock *)(param_1 + 0x94),
                   *(byte *)(param_1 + 0x3c) >> 1 & 1);
      } while (0x3fffffffffffffff < uVar3);
      uVar3 = param_4 & 0x3fffffffffffffff;
      lVar2 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
      param_3 = param_3 + lVar2;
      param_2 = param_2 + lVar2;
    }
    if (uVar3 != 0) {
      DES_ede3_cbc_encrypt
                (param_3,param_2,uVar3,(DES_key_schedule *)(param_1 + 0xc0),
                 (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                 (DES_cblock *)(param_1 + 0x94),*(byte *)(param_1 + 0x3c) >> 1 & 1);
    }
  }
  else {
    (**(code **)(param_1 + 0x240))(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x94);
  }
  return 1;
}

