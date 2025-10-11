
undefined8 * mac_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *ptr;
  char *ptr_00;
  long lVar4;
  
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"../providers/implementations/signature/mac_legacy_sig.c",0xb6);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  ptr[2] = 0;
  ptr[3] = 0;
  *ptr = uVar1;
  ptr[1] = uVar2;
  ptr[1] = 0;
  if ((char *)param_1[1] != (char *)0x0) {
    ptr_00 = CRYPTO_strdup((char *)param_1[1],
                           "../providers/implementations/signature/mac_legacy_sig.c",0xbf);
    ptr[1] = ptr_00;
    if (ptr_00 == (char *)0x0) goto LAB_0047ca85;
  }
  lVar4 = param_1[2];
  if (lVar4 == 0) {
LAB_0047ca52:
    ptr[2] = lVar4;
    if (param_1[3] == 0) {
      return ptr;
    }
    lVar4 = EVP_MAC_CTX_dup();
    ptr[3] = lVar4;
    if (lVar4 != 0) {
      return ptr;
    }
  }
  else {
    iVar3 = ossl_mac_key_up_ref();
    if (iVar3 != 0) {
      lVar4 = param_1[2];
      goto LAB_0047ca52;
    }
  }
  ptr_00 = (char *)ptr[1];
LAB_0047ca85:
  CRYPTO_free(ptr_00);
  EVP_MAC_CTX_free(ptr[3]);
  ossl_mac_key_free(ptr[2]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

