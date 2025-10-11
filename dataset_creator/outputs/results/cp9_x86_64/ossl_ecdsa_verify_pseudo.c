
int ossl_ecdsa_verify(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,
                     EC_KEY *param_6)

{
  int iVar1;
  int iVar2;
  ECDSA_SIG *pEVar3;
  uchar *ptr;
  long in_FS_OFFSET;
  ECDSA_SIG *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_50 = param_4;
  local_58 = ECDSA_SIG_new();
  if (local_58 == (ECDSA_SIG *)0x0) {
    iVar1 = -1;
  }
  else {
    pEVar3 = d2i_ECDSA_SIG(&local_58,&local_50,(long)param_5);
    if (pEVar3 == (ECDSA_SIG *)0x0) {
      iVar1 = -1;
      ptr = local_48;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_58,&local_48);
      ptr = local_48;
      if (param_5 == iVar1) {
        iVar1 = -1;
        iVar2 = bcmp(param_4,local_48,(long)param_5);
        if (iVar2 == 0) {
          iVar1 = ECDSA_do_verify(param_2,param_3,local_58,param_6);
          ptr = local_48;
        }
      }
      else {
        iVar1 = -1;
      }
    }
    CRYPTO_free(ptr);
    ECDSA_SIG_free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

