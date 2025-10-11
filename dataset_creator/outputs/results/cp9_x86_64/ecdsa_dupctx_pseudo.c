
undefined8 * ecdsa_dupctx(undefined8 *param_1)

{
  EC_KEY *key;
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EVP_MD_CTX *out;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)
           CRYPTO_zalloc(400,"../providers/implementations/signature/ecdsa_sig.c",0x18e);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = param_1;
  puVar7 = puVar3;
  for (lVar5 = 0x32; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  puVar3[2] = 0;
  puVar3[0x2e] = 0;
  key = (EC_KEY *)param_1[2];
  puVar3[1] = 0;
  puVar3[0x2f] = 0;
  if ((((key == (EC_KEY *)0x0) || (iVar2 = EC_KEY_up_ref(key), iVar2 != 0)) && (param_1[0x30] == 0))
     && (param_1[0x31] == 0)) {
    lVar5 = param_1[0x2e];
    puVar3[2] = param_1[2];
    if (lVar5 != 0) {
      iVar2 = EVP_MD_up_ref();
      if (iVar2 == 0) goto LAB_0047b1f0;
      lVar5 = param_1[0x2e];
    }
    lVar1 = param_1[0x2f];
    puVar3[0x2e] = lVar5;
    if (lVar1 != 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      puVar3[0x2f] = out;
      if ((out == (EVP_MD_CTX *)0x0) ||
         (iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2f]), iVar2 == 0))
      goto LAB_0047b1f0;
    }
    if ((char *)param_1[1] == (char *)0x0) {
      return puVar3;
    }
    pcVar4 = CRYPTO_strdup((char *)param_1[1],"../providers/implementations/signature/ecdsa_sig.c",
                           0x1ab);
    puVar3[1] = pcVar4;
    if (pcVar4 != (char *)0x0) {
      return puVar3;
    }
  }
LAB_0047b1f0:
  ecdsa_freectx(puVar3);
  return (undefined8 *)0x0;
}

