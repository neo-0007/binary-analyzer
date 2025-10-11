
undefined8 md5_internal_final(MD5_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (0xf < param_4)) && (iVar1 = MD5_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}

