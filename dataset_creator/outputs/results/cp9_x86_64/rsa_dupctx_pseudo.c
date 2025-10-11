
undefined8 * rsa_dupctx(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  EVP_MD_CTX *out;
  char *pcVar6;
  RSA *r;
  long lVar7;
  
  puVar5 = (undefined8 *)0x0;
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)
             CRYPTO_zalloc(0xc0,"../providers/implementations/signature/rsa_sig.c",0x3dc);
    if (puVar5 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x3de,__func___7);
      ERR_set_error(0x39,0xc0100,0);
      return (undefined8 *)0x0;
    }
    uVar2 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar2;
    uVar2 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar2;
    uVar2 = param_1[5];
    puVar5[4] = param_1[4];
    puVar5[5] = uVar2;
    uVar2 = param_1[7];
    puVar5[6] = param_1[6];
    puVar5[7] = uVar2;
    uVar2 = param_1[9];
    puVar5[8] = param_1[8];
    puVar5[9] = uVar2;
    uVar2 = param_1[0xb];
    puVar5[10] = param_1[10];
    puVar5[0xb] = uVar2;
    uVar2 = param_1[0xd];
    puVar5[0xc] = param_1[0xc];
    puVar5[0xd] = uVar2;
    uVar2 = param_1[0xf];
    puVar5[0xe] = param_1[0xe];
    puVar5[0xf] = uVar2;
    uVar2 = param_1[0x11];
    puVar5[0x10] = param_1[0x10];
    puVar5[0x11] = uVar2;
    uVar2 = param_1[0x13];
    puVar5[0x12] = param_1[0x12];
    puVar5[0x13] = uVar2;
    uVar2 = param_1[0x15];
    puVar5[0x14] = param_1[0x14];
    puVar5[0x15] = uVar2;
    uVar2 = param_1[0x16];
    uVar3 = param_1[0x17];
    puVar5[2] = 0;
    r = (RSA *)param_1[2];
    puVar5[0x16] = uVar2;
    puVar5[0x17] = uVar3;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[0x17] = 0;
    puVar5[1] = 0;
    if (r != (RSA *)0x0) {
      iVar4 = RSA_up_ref(r);
      if (iVar4 == 0) goto LAB_0047eb50;
      r = (RSA *)param_1[2];
    }
    puVar5[2] = r;
    lVar7 = param_1[4];
    if (lVar7 != 0) {
      iVar4 = EVP_MD_up_ref();
      if (iVar4 == 0) goto LAB_0047eb50;
      lVar7 = param_1[4];
    }
    puVar5[4] = lVar7;
    lVar7 = param_1[0xe];
    if (lVar7 != 0) {
      iVar4 = EVP_MD_up_ref();
      if (iVar4 == 0) goto LAB_0047eb50;
      lVar7 = param_1[0xe];
    }
    lVar1 = param_1[5];
    puVar5[0xe] = lVar7;
    if (lVar1 != 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      puVar5[5] = out;
      if ((out == (EVP_MD_CTX *)0x0) ||
         (iVar4 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[5]), iVar4 == 0)) goto LAB_0047eb50;
    }
    if ((char *)param_1[1] != (char *)0x0) {
      pcVar6 = CRYPTO_strdup((char *)param_1[1],"../providers/implementations/signature/rsa_sig.c",
                             0x3fd);
      puVar5[1] = pcVar6;
      if (pcVar6 == (char *)0x0) {
LAB_0047eb50:
        rsa_freectx_part_0(puVar5);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar5;
}

