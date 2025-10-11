
int evp_cipher_get_asn1_aead_params(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 == (void *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = ossl_asn1_type_get_octetstring_int(param_2,local_50,0,0x10);
    if (iVar1 < 1) {
      iVar1 = -1;
    }
    else {
      ossl_asn1_type_get_octetstring_int(param_2,local_50,local_48,iVar1);
      memcpy(param_3,local_48,(long)iVar1);
      *(int *)((long)param_3 + 0x10) = iVar1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

