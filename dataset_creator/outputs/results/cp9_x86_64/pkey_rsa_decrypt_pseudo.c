
uint pkey_rsa_decrypt(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  RSA *rsa;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
  iVar3 = *(int *)(lVar1 + 0x1c);
  if (iVar3 == 4) {
    iVar3 = setup_tbuf(lVar1,param_1);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    uVar2 = RSA_private_decrypt(param_5,param_4,*(uchar **)(lVar1 + 0x38),rsa,3);
    if ((int)uVar2 < 1) {
      return uVar2;
    }
    uVar2 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,uVar2,*(undefined8 *)(lVar1 + 0x38),uVar2,uVar2,
                       *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                       *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  }
  else {
    if ((iVar3 == 1) && (*(int *)(lVar1 + 0x50) == 0)) {
      iVar3 = 8;
    }
    uVar2 = RSA_private_decrypt(param_5,param_4,param_2,rsa,iVar3);
  }
  uVar4 = (long)(int)uVar2 >> 0x3f;
  *param_3 = uVar4 & *param_3 | (long)(int)uVar2 & ~uVar4;
  return uVar2 & (int)uVar2 >> 0x1f | ~((int)uVar2 >> 0x1f) & 1U;
}

