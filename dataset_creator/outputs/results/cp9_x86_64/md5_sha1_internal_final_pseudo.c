
undefined8
md5_sha1_internal_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (0x23 < param_4)) &&
     (iVar1 = ossl_md5_sha1_final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x24;
    return 1;
  }
  return 0;
}

