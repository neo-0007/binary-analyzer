
int pkey_dsa_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  DSA *dsa;
  
  lVar1 = *(long *)(param_1 + 0x98);
  dsa = (DSA *)EVP_PKEY_get0_DSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = EVP_MD_get_size();
    if (iVar2 != param_5) {
      return 0;
    }
  }
  iVar2 = DSA_verify(0,param_4,(int)param_5,param_2,param_3,dsa);
  return iVar2;
}

