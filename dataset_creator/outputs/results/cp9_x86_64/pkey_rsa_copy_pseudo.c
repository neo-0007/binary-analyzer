
undefined8 pkey_rsa_copy(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  BIGNUM *pBVar4;
  long lVar5;
  
  iVar3 = pkey_rsa_init();
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  puVar2 = *(undefined4 **)(param_2 + 0x98);
  pBVar4 = *(BIGNUM **)(puVar2 + 2);
  *puVar1 = *puVar2;
  if (pBVar4 != (BIGNUM *)0x0) {
    pBVar4 = BN_dup(pBVar4);
    *(BIGNUM **)(puVar1 + 2) = pBVar4;
    if (pBVar4 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  lVar5 = *(long *)(puVar2 + 0x10);
  puVar1[7] = puVar2[7];
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar2 + 10);
  puVar1[0xc] = puVar2[0xc];
  puVar1[0x14] = puVar2[0x14];
  if (lVar5 != 0) {
    CRYPTO_free(*(void **)(puVar1 + 0x10));
    lVar5 = CRYPTO_memdup(*(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x12),
                          "../crypto/rsa/rsa_pmeth.c",0x6a);
    *(long *)(puVar1 + 0x10) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar2 + 0x12);
  }
  return 1;
}

