
int i2a_ASN1_STRING(BIO *bp,ASN1_STRING *a,int type)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (a == (ASN1_STRING *)0x0) {
    iVar1 = 0;
  }
  else {
    if (a->length == 0) {
      iVar1 = BIO_write(bp,"0",1);
      if (iVar1 == 1) goto LAB_0061ed35;
    }
    else {
      lVar4 = 0;
      iVar3 = 0;
      if (a->length < 1) goto LAB_0061ed35;
      while( true ) {
        local_42 = "0123456789ABCDEF"[a->data[lVar4] >> 4];
        local_41 = "0123456789ABCDEF"[a->data[lVar4] & 0xf];
        iVar1 = BIO_write(bp,&local_42,2);
        if (iVar1 != 2) break;
        iVar1 = iVar3 + 2;
        iVar2 = (int)lVar4 + 1;
        if (a->length <= iVar2) goto LAB_0061ed35;
        if ((uint)(iVar2 * -0x75075075) < 0x7507508) {
          iVar1 = BIO_write(bp,&DAT_0080496b,2);
          if (iVar1 != 2) break;
          iVar1 = iVar3 + 4;
        }
        lVar4 = lVar4 + 1;
        iVar3 = iVar1;
      }
    }
    iVar1 = -1;
  }
LAB_0061ed35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

