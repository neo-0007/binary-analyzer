
undefined8 rsa_ossl_finish(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x88));
    if (iVar1 <= iVar3) break;
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar3);
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(lVar2 + 0x20));
    iVar3 = iVar3 + 1;
  }
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xa8));
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xb0));
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xb8));
  return 1;
}

