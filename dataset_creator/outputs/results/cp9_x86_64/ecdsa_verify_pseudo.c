
int ecdsa_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,long param_5)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((*(long *)(param_1 + 0x160) == param_5 || (*(long *)(param_1 + 0x160) == 0)))
     ) {
    iVar1 = ECDSA_verify(0,param_4,(int)param_5,param_2,param_3,*(EC_KEY **)(param_1 + 0x10));
    return iVar1;
  }
  return 0;
}

