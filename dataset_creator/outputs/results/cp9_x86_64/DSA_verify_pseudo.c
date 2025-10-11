
int DSA_verify(int type,uchar *dgst,int dgst_len,uchar *sigbuf,int siglen,DSA *dsa)

{
  int iVar1;
  int iVar2;
  DSA_SIG *pDVar3;
  uchar *puVar4;
  size_t __n;
  long in_FS_OFFSET;
  DSA_SIG *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_50 = sigbuf;
  local_58 = DSA_SIG_new();
  if (local_58 == (DSA_SIG *)0x0) {
    iVar1 = -1;
  }
  else {
    __n = (size_t)siglen;
    pDVar3 = d2i_DSA_SIG(&local_58,&local_50,__n);
    if (pDVar3 == (DSA_SIG *)0x0) {
      __n = 0xffffffffffffffff;
      iVar1 = -1;
      puVar4 = local_48;
    }
    else {
      iVar1 = i2d_DSA_SIG(local_58,&local_48);
      puVar4 = local_48;
      if (siglen == iVar1) {
        iVar1 = -1;
        iVar2 = bcmp(sigbuf,local_48,__n);
        if (iVar2 == 0) {
          iVar1 = DSA_do_verify(dgst,dgst_len,local_58,dsa);
          puVar4 = local_48;
        }
      }
      else {
        __n = (size_t)iVar1;
        iVar1 = -1;
      }
    }
    CRYPTO_clear_free(puVar4,__n,"../crypto/dsa/dsa_sign.c",0xce);
    DSA_SIG_free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

