
undefined8 ossl_cipher_hw_chunked_cbc(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  
  local_40 = param_2;
  if (0x3fffffffffffffff < param_4) {
    uVar2 = param_4;
    do {
      lVar1 = (param_3 + param_4) - uVar2;
      lVar3 = (param_2 + param_4) - uVar2;
      uVar2 = uVar2 + 0xc000000000000000;
      ossl_cipher_hw_generic_cbc(param_1,lVar3,lVar1,0x4000000000000000);
    } while (0x3fffffffffffffff < uVar2);
    uVar2 = param_4 + 0xc000000000000000;
    param_4 = param_4 & 0x3fffffffffffffff;
    lVar1 = (uVar2 >> 0x3e) + 1 << 0x3e;
    local_40 = param_2 + lVar1;
    param_3 = param_3 + lVar1;
  }
  if (param_4 != 0) {
    ossl_cipher_hw_generic_cbc(param_1,local_40,param_3,param_4);
  }
  return 1;
}

