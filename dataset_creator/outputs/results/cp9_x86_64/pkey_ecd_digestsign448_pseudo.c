
undefined8
pkey_ecd_digestsign448
          (undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = EVP_MD_CTX_get_pkey_ctx();
  puVar2 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar1 + 0x88));
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x346,"pkey_ecd_digestsign448");
      ERR_set_error(0x10,100,0);
      return 0;
    }
    uVar3 = ossl_ed448_sign(*puVar2,param_2,param_4,param_5,(long)puVar2 + 0x11,puVar2[10],0,0,
                            puVar2[1]);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  *param_3 = 0x72;
  return 1;
}

