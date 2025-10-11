
undefined4
ossl_sm2_internal_verify(uchar *param_1,int param_2,uchar *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  ECDSA_SIG *pEVar3;
  BIGNUM *a;
  long in_FS_OFFSET;
  ECDSA_SIG *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (ECDSA_SIG *)0x0;
  local_48 = (uchar *)0x0;
  local_50 = param_3;
  local_58 = ECDSA_SIG_new();
  if (local_58 == (ECDSA_SIG *)0x0) {
    uVar2 = 0xffffffff;
    ERR_new();
    ERR_set_debug("../crypto/sm2/sm2_sign.c",0x1e5,"ossl_sm2_internal_verify");
    ERR_set_error(0x35,0xc0100,0);
    a = (BIGNUM *)0x0;
  }
  else {
    pEVar3 = d2i_ECDSA_SIG(&local_58,&local_50,(long)param_4);
    if (pEVar3 == (ECDSA_SIG *)0x0) {
      uVar2 = 0xffffffff;
      ERR_new();
      ERR_set_debug("../crypto/sm2/sm2_sign.c",0x1e9,"ossl_sm2_internal_verify");
      ERR_set_error(0x35,0x68,0);
      a = (BIGNUM *)0x0;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_58,&local_48);
      if (param_4 == iVar1) {
        iVar1 = bcmp(param_3,local_48,(long)param_4);
        if (iVar1 == 0) {
          a = BN_bin2bn(param_1,param_2,(BIGNUM *)0x0);
          if (a == (BIGNUM *)0x0) {
            uVar2 = 0xffffffff;
            ERR_new();
            ERR_set_debug("../crypto/sm2/sm2_sign.c",0x1f5,"ossl_sm2_internal_verify");
            ERR_set_error(0x35,0x80003,0);
          }
          else {
            uVar2 = sm2_sig_verify(param_5,local_58,a);
          }
          goto LAB_0057d9b1;
        }
      }
      uVar2 = 0xffffffff;
      a = (BIGNUM *)0x0;
      ERR_new();
      ERR_set_debug("../crypto/sm2/sm2_sign.c",0x1ef,"ossl_sm2_internal_verify");
      ERR_set_error(0x35,0x68,0);
    }
  }
LAB_0057d9b1:
  CRYPTO_free(local_48);
  BN_free(a);
  ECDSA_SIG_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

