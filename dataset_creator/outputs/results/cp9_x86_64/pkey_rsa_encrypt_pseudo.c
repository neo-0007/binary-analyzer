
int pkey_rsa_encrypt(long param_1,uchar *param_2,long *param_3,uchar *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  RSA *rsa;
  
  lVar1 = *(long *)(param_1 + 0x98);
  rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(lVar1 + 0x1c) == 4) {
    iVar2 = RSA_size(rsa);
    iVar3 = setup_tbuf(lVar1,param_1);
    if (iVar3 != 0) {
      iVar3 = RSA_padding_add_PKCS1_OAEP_mgf1
                        (*(undefined8 *)(lVar1 + 0x38),iVar2,param_4,param_5,
                         *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                         *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
      if (iVar3 != 0) {
        iVar2 = RSA_public_encrypt(iVar2,*(uchar **)(lVar1 + 0x38),param_2,rsa,3);
        goto LAB_00431b62;
      }
    }
    iVar2 = -1;
  }
  else {
    iVar2 = RSA_public_encrypt(param_5,param_4,param_2,rsa,*(int *)(lVar1 + 0x1c));
LAB_00431b62:
    if (-1 < iVar2) {
      *param_3 = (long)iVar2;
      iVar2 = 1;
    }
  }
  return iVar2;
}

