
bool kmac_setkey(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_prov_digest_md(param_1 + 0x10);
  iVar1 = EVP_MD_get_block_size(uVar2);
  if (0xfc < param_3 - 4U) {
    ERR_new();
    ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0xf9,"kmac_setkey");
    ERR_set_error(0x39,0x69,0);
    return false;
  }
  if (-1 < iVar1) {
    iVar1 = kmac_bytepad_encode_key_constprop_0
                      (param_1 + 0x44,param_1 + 0x30,param_2,param_3,(long)iVar1);
    return iVar1 != 0;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0xfd,"kmac_setkey");
  ERR_set_error(0x39,0xa6,0);
  return false;
}

