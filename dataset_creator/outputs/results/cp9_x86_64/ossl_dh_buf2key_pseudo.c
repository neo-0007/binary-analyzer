
undefined8 ossl_dh_buf2key(undefined8 param_1,uchar *param_2,int param_3)

{
  int iVar1;
  BIGNUM *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = BN_bin2bn(param_2,param_3,(BIGNUM *)0x0);
  if (a == (BIGNUM *)0x0) {
LAB_004c9050:
    uVar2 = 0x6a;
  }
  else {
    DH_get0_pqg(param_1,&local_28,0,0);
    if (local_28 != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(local_28);
      if (0xe < iVar1 + 0xeU) {
        uVar2 = 0x66;
        iVar1 = ossl_dh_check_pub_key_partial(param_1,a,local_2c);
        if (iVar1 != 0) {
          uVar2 = DH_set0_key(param_1,a,0);
          if ((int)uVar2 == 1) goto LAB_004c909e;
          goto LAB_004c9050;
        }
        goto LAB_004c9066;
      }
    }
    uVar2 = 0x6b;
  }
LAB_004c9066:
  ERR_new();
  ERR_set_debug("../crypto/dh/dh_key.c",0x198,"ossl_dh_buf2key");
  ERR_set_error(5,uVar2,0);
  BN_free(a);
  uVar2 = 0;
LAB_004c909e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

