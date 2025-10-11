
int X509_cmp_time(ASN1_TIME *s,time_t *t)

{
  int iVar1;
  ASN1_TIME *a;
  int iVar2;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (s->type == 0x17) {
    iVar1 = 0;
    if (s->length != 0xd) goto LAB_00590ac5;
  }
  else if ((s->type != 0x18) || (s->length != 0xf)) {
    iVar1 = 0;
    goto LAB_00590ac5;
  }
  iVar2 = 0;
  do {
    iVar1 = ossl_ascii_isdigit();
    if (iVar1 == 0) goto LAB_00590ac5;
    iVar2 = iVar2 + 1;
  } while (iVar2 < s->length + -1);
  iVar1 = 0;
  if (s->data[(long)s->length + -1] != 'Z') goto LAB_00590ac5;
  a = X509_time_adj((ASN1_TIME *)0x0,0,t);
  if (a == (ASN1_TIME *)0x0) {
LAB_00590b86:
    iVar1 = 0;
  }
  else {
    iVar1 = ASN1_TIME_diff(&local_28,&local_24,s,a);
    if (iVar1 == 0) goto LAB_00590b86;
    iVar1 = 1;
    if (-1 < local_28) {
      iVar1 = (local_24 >> 0x1f & 2U) - 1;
    }
  }
  ASN1_TIME_free(a);
LAB_00590ac5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

