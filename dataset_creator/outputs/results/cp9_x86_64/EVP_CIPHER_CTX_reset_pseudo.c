
undefined8 EVP_CIPHER_CTX_reset(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *ptr;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
LAB_0040b755:
    ptr = (void *)param_1[0xf];
  }
  else {
    if (*(long *)(lVar1 + 0x78) != 0) {
      if (param_1[0x15] != 0) {
        if (*(code **)(lVar1 + 0xc0) != (code *)0x0) {
          (**(code **)(lVar1 + 0xc0))();
        }
        param_1[0x15] = 0;
      }
      if (param_1[0x16] != 0) {
        EVP_CIPHER_free();
      }
      goto LAB_0040b6da;
    }
    if ((*(code **)(lVar1 + 0x30) != (code *)0x0) &&
       (uVar2 = (**(code **)(lVar1 + 0x30))(), (int)uVar2 == 0)) {
      return uVar2;
    }
    ptr = (void *)param_1[0xf];
    if ((ptr != (void *)0x0) && (*(int *)(*param_1 + 0x38) != 0)) {
      OPENSSL_cleanse(ptr,(long)*(int *)(*param_1 + 0x38));
      goto LAB_0040b755;
    }
  }
  CRYPTO_free(ptr);
  ENGINE_finish((ENGINE *)param_1[1]);
LAB_0040b6da:
  *param_1 = 0;
  param_1[0x16] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb8U >> 3)
      ; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  return 1;
}

