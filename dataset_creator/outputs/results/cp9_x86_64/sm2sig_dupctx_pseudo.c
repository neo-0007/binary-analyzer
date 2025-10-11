
undefined8 * sm2sig_dupctx(undefined8 *param_1)

{
  long lVar1;
  void *__src;
  int iVar2;
  undefined8 *puVar3;
  EVP_MD_CTX *out;
  void *__dest;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  EC_KEY *key;
  byte bVar7;
  
  bVar7 = 0;
  puVar3 = (undefined8 *)
           CRYPTO_zalloc(0x188,"../providers/implementations/signature/sm2_sig.c",0x156);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = param_1;
    puVar6 = puVar3;
    for (lVar4 = 0x31; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    puVar3[2] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    key = (EC_KEY *)param_1[2];
    if (key != (EC_KEY *)0x0) {
      iVar2 = EC_KEY_up_ref(key);
      if (iVar2 == 0) goto LAB_0047fa20;
      key = (EC_KEY *)param_1[2];
    }
    puVar3[2] = key;
    lVar4 = param_1[0x2c];
    if (lVar4 != 0) {
      iVar2 = EVP_MD_up_ref();
      if (iVar2 == 0) goto LAB_0047fa20;
      lVar4 = param_1[0x2c];
    }
    lVar1 = param_1[0x2d];
    puVar3[0x2c] = lVar4;
    if (lVar1 != 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      puVar3[0x2d] = out;
      if (out == (EVP_MD_CTX *)0x0) goto LAB_0047fa20;
      iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2d]);
      if (iVar2 == 0) goto LAB_0047fa20;
    }
    if (param_1[0x2f] != 0) {
      __dest = CRYPTO_malloc((int)param_1[0x30],"../providers/implementations/signature/sm2_sig.c",
                             0x16f);
      puVar3[0x2f] = __dest;
      if (__dest == (void *)0x0) {
LAB_0047fa20:
        sm2sig_freectx(puVar3);
        return (undefined8 *)0x0;
      }
      __src = (void *)param_1[0x2f];
      puVar3[0x30] = param_1[0x30];
      memcpy(__dest,__src,param_1[0x30]);
    }
  }
  return puVar3;
}

