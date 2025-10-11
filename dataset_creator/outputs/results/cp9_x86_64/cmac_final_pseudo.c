
int cmac_final(long param_1,uchar *param_2,size_t *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CMAC_Final(*(CMAC_CTX **)(param_1 + 8),param_2,param_3);
  return iVar1;
}

