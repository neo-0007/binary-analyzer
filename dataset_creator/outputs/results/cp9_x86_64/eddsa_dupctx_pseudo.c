
undefined8 * eddsa_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x120,"../providers/implementations/signature/eddsa_sig.c",0x10a),
     ptr != (undefined8 *)0x0)) {
    puVar3 = param_1;
    puVar4 = ptr;
    for (lVar2 = 0x24; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    ptr[1] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      iVar1 = ossl_ecx_key_up_ref();
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0x112,"eddsa_dupctx");
        ERR_set_error(0x39,0xc0103,0);
        ossl_ecx_key_free(ptr[1]);
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
      lVar2 = param_1[1];
    }
    ptr[1] = lVar2;
    return ptr;
  }
  return (undefined8 *)0x0;
}

