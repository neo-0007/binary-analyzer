
uint rsakem_recover(long param_1,uchar *param_2,long *param_3,uchar *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = RSA_size(*(RSA **)(param_1 + 8));
    lVar2 = (long)iVar1;
    uVar3 = 0;
    if (param_2 == (uchar *)0x0) {
      if (lVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kem/rsa_kem.c",0x12f,"rsasve_recover");
        ERR_set_error(0x39,0x9e,0);
      }
      else {
        *param_3 = lVar2;
        uVar3 = 1;
      }
    }
    else if (param_5 == lVar2) {
      iVar1 = RSA_private_decrypt((int)param_5,param_4,param_2,*(RSA **)(param_1 + 8),3);
      uVar3 = (uint)(0 < iVar1);
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/kem/rsa_kem.c",0x138,"rsasve_recover");
      ERR_set_error(0x39,0x8e,0);
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

