
void ossl_asn1_enc_free(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != (long *)0x0) {
    if (((*param_1 != 0) && (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 8) & 2) != 0)) {
      puVar2 = (undefined8 *)(*param_1 + (long)*(int *)(lVar1 + 0x20));
      CRYPTO_free((void *)*puVar2);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 1;
    }
    return;
  }
  return;
}

