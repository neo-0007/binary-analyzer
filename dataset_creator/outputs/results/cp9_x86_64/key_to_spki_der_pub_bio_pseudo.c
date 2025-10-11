
int key_to_spki_der_pub_bio
              (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  X509_PUBKEY *a;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0xffffffff;
  local_38 = 0;
  if ((param_5 == (code *)0x0) ||
     (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_38,&local_3c),
     iVar1 != 0)) {
    iVar1 = 0;
    a = (X509_PUBKEY *)key_to_pubkey(param_2,param_3,local_38,local_3c,param_6);
    if (a != (X509_PUBKEY *)0x0) {
      iVar1 = i2d_X509_PUBKEY_bio(param_1,a);
    }
    X509_PUBKEY_free(a);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

