
undefined8 * dsa_dupctx(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EVP_MD_CTX *out;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  DSA *r;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)
           CRYPTO_zalloc(0x178,"../providers/implementations/signature/dsa_sig.c",0x198);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = param_1;
  puVar7 = puVar3;
  for (lVar5 = 0x2f; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  puVar3[2] = 0;
  puVar3[0x2c] = 0;
  r = (DSA *)param_1[2];
  puVar3[1] = 0;
  puVar3[0x2d] = 0;
  if (r != (DSA *)0x0) {
    iVar2 = DSA_up_ref(r);
    if (iVar2 == 0) goto LAB_0047a670;
    r = (DSA *)param_1[2];
  }
  puVar3[2] = r;
  lVar5 = param_1[0x2c];
  if (lVar5 != 0) {
    iVar2 = EVP_MD_up_ref();
    if (iVar2 == 0) goto LAB_0047a670;
    lVar5 = param_1[0x2c];
  }
  lVar1 = param_1[0x2d];
  puVar3[0x2c] = lVar5;
  if (lVar1 != 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    puVar3[0x2d] = out;
    if ((out == (EVP_MD_CTX *)0x0) ||
       (iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2d]), iVar2 == 0)) goto LAB_0047a670;
  }
  if ((char *)param_1[1] == (char *)0x0) {
    return puVar3;
  }
  pcVar4 = CRYPTO_strdup((char *)param_1[1],"../providers/implementations/signature/dsa_sig.c",0x1b1
                        );
  puVar3[1] = pcVar4;
  if (pcVar4 != (char *)0x0) {
    return puVar3;
  }
LAB_0047a670:
  dsa_freectx(puVar3);
  return (undefined8 *)0x0;
}

