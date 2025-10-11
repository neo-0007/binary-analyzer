
int dsa_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x160) == 0) {
    iVar1 = ossl_prov_is_running();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = EVP_MD_get_size();
    iVar2 = ossl_prov_is_running();
    if (iVar2 == 0) {
      return 0;
    }
    if (((long)iVar1 != 0) && (param_5 != iVar1)) {
      return 0;
    }
  }
  iVar1 = DSA_verify(0,param_4,(int)param_5,param_2,param_3,*(DSA **)(param_1 + 0x10));
  return iVar1;
}

