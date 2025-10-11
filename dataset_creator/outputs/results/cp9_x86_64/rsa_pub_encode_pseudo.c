
undefined4 rsa_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  int local_54;
  uchar *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  iVar1 = rsa_param_encode_isra_0(*(undefined8 *)(param_2 + 0x20),&local_48,&local_54);
  if (iVar1 != 0) {
    iVar1 = i2d_RSAPublicKey(*(RSA **)(param_2 + 0x20),&local_50);
    penc = local_50;
    if (0 < iVar1) {
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,local_54,local_48,penc,iVar1);
      if (iVar1 == 0) {
        CRYPTO_free(local_50);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00552f4a;
    }
  }
  uVar2 = 0;
LAB_00552f4a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

