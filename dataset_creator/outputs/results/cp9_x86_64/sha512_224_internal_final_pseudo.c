
undefined8
sha512_224_internal_final(SHA512_CTX *param_1,uchar *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (0x1b < param_4)) && (iVar1 = SHA512_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x1c;
    return 1;
  }
  return 0;
}

