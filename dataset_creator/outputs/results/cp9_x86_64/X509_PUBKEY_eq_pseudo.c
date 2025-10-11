
undefined8 X509_PUBKEY_eq(X509_PUBKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  X509_ALGOR *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else if ((param_1 == (X509_PUBKEY *)0x0) || (param_2 == (X509_PUBKEY *)0x0)) {
    uVar4 = 0;
  }
  else {
    iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_30,param_1);
    if ((iVar1 != 0) && (local_30 != (X509_ALGOR *)0x0)) {
      iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,param_2)
      ;
      if ((iVar1 != 0) && (local_28 != (X509_ALGOR *)0x0)) {
        iVar1 = X509_ALGOR_cmp(local_30,local_28);
        uVar4 = 0;
        if (iVar1 != 0) goto LAB_0059cbba;
        lVar2 = X509_PUBKEY_get0(param_1);
        if (lVar2 != 0) {
          lVar3 = X509_PUBKEY_get0(param_2);
          if (lVar3 != 0) {
            uVar4 = EVP_PKEY_eq(lVar2,lVar3);
            goto LAB_0059cbba;
          }
        }
      }
    }
    uVar4 = 0xfffffffe;
  }
LAB_0059cbba:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

