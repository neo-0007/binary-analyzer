
undefined8
pkey_ecd_digestverify25519
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = EVP_MD_CTX_get_pkey_ctx();
  puVar2 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar1 + 0x88));
  if (param_3 != 0x40) {
    return 0;
  }
  uVar3 = ossl_ed25519_verify(param_4,param_5,param_2,(long)puVar2 + 0x11,*puVar2,puVar2[1]);
  return uVar3;
}

