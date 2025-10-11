
undefined8 camellia_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar3 = EVP_CIPHER_CTX_get_block_size();
  uVar6 = (ulong)iVar3;
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar6 <= param_4) {
    uVar5 = 0;
    do {
      lVar1 = param_2 + uVar5;
      lVar2 = param_3 + uVar5;
      uVar5 = uVar5 + uVar6;
      (**(code **)(lVar4 + 0x118))(lVar2,lVar1,lVar4);
    } while (uVar5 <= param_4 - uVar6);
  }
  return 1;
}

