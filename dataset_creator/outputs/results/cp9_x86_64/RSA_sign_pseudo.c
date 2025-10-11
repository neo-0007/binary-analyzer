
int RSA_sign(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (uchar *)0x0;
  if (*(code **)(rsa->engine + 0x58) != (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00433912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(rsa->engine + 0x58))();
      return iVar1;
    }
    goto LAB_00433aa7;
  }
  if (type == 0x72) {
    if (m_length == 0x24) {
      local_50 = 0x24;
      lVar3 = 0x24;
      uVar2 = RSA_size(rsa);
      if (0x2e < uVar2) goto LAB_00433952;
LAB_00433a06:
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../crypto/rsa/rsa_sign.c",0x132,"RSA_sign");
      ERR_set_error(4,0x70,0);
      goto LAB_00433980;
    }
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/rsa/rsa_sign.c",0x126,"RSA_sign");
    ERR_set_error(4,0x83,0);
  }
  else {
    iVar1 = encode_pkcs1_constprop_0(&local_48,&local_50,type,m,m_length);
    m = local_48;
    lVar3 = local_50;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = RSA_size(rsa);
      if ((ulong)(long)iVar1 < lVar3 + 0xbU) goto LAB_00433a06;
LAB_00433952:
      uVar2 = RSA_private_encrypt((int)lVar3,m,sigret,rsa,1);
      if ((int)uVar2 < 1) {
        iVar1 = 0;
      }
      else {
        *siglen = uVar2;
        iVar1 = 1;
      }
    }
LAB_00433980:
    CRYPTO_clear_free(local_48,lVar3,"../crypto/rsa/rsa_sign.c",0x13e);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_00433aa7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

