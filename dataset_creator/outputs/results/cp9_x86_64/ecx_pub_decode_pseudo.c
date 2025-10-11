
undefined8 ecx_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  void *key;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  uchar *local_20;
  X509_ALGOR *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_20,&local_24,&local_18,param_2);
  if (iVar1 != 0) {
    key = (void *)ossl_ecx_key_op(local_18,local_20,local_24,**(undefined4 **)&param_1->references,0
                                  ,0,0);
    if (key != (void *)0x0) {
      EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
      uVar2 = 1;
      goto LAB_00505aab;
    }
  }
  uVar2 = 0;
LAB_00505aab:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

