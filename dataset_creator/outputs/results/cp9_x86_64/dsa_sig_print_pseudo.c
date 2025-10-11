
uint dsa_sig_print(BIO *param_1,undefined8 param_2,ASN1_STRING *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  DSA_SIG *a;
  long in_FS_OFFSET;
  uchar *local_48;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (ASN1_STRING *)0x0) {
    iVar1 = BIO_puts(param_1,"\n");
    uVar2 = (uint)(0 < iVar1);
    goto LAB_004ca89a;
  }
  local_48 = param_3->data;
  a = d2i_DSA_SIG((DSA_SIG **)0x0,&local_48,(long)param_3->length);
  if (a == (DSA_SIG *)0x0) {
    uVar2 = 0;
    iVar1 = BIO_puts(param_1,"\n");
    if (0 < iVar1) {
      uVar2 = X509_signature_dump(param_1,param_3,param_4);
    }
    goto LAB_004ca89a;
  }
  DSA_SIG_get0(a,&local_40,&local_38);
  iVar1 = BIO_write(param_1,&DAT_0081a1ca,1);
  if (iVar1 == 1) {
    iVar1 = ASN1_bn_print(param_1,"r:   ",local_40,(uchar *)0x0,param_4);
    if (iVar1 == 0) goto LAB_004ca88f;
    iVar1 = ASN1_bn_print(param_1,"s:   ",local_38,(uchar *)0x0,param_4);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
LAB_004ca88f:
    uVar2 = 0;
  }
  DSA_SIG_free(a);
LAB_004ca89a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

