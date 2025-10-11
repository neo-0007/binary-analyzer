
undefined4
pkey_ecd_digestverify448
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = EVP_MD_CTX_get_pkey_ctx();
  puVar3 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar2 + 0x88));
  if (param_3 != 0x72) {
    return 0;
  }
  uVar1 = ossl_ed448_verify(*puVar3,param_4,param_5,param_2,(long)puVar3 + 0x11,0,0,puVar3[1]);
  return uVar1;
}

