
int i2a_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *a)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_INTEGER *)0x0) {
    uVar3 = 0;
    goto LAB_005a7a76;
  }
  uVar2 = a->type & 0x100;
  if ((uVar2 == 0) || (uVar2 = BIO_write(bp,&DAT_0080042c,1), uVar2 == 1)) {
    if (a->length == 0) {
      iVar1 = BIO_write(bp,"00",2);
      if (iVar1 == 2) {
        uVar3 = uVar2 + 2;
        goto LAB_005a7a76;
      }
    }
    else {
      lVar4 = 0;
      uVar3 = uVar2;
      if (a->length < 1) goto LAB_005a7a76;
      while( true ) {
        local_42 = "0123456789ABCDEF"[a->data[lVar4] >> 4];
        local_41 = "0123456789ABCDEF"[a->data[lVar4] & 0xf];
        iVar1 = BIO_write(bp,&local_42,2);
        if (iVar1 != 2) break;
        iVar1 = (int)lVar4 + 1;
        uVar3 = uVar2 + 2;
        if (a->length <= iVar1) goto LAB_005a7a76;
        if ((uint)(iVar1 * -0x75075075) < 0x7507508) {
          iVar1 = BIO_write(bp,&DAT_0080496b,2);
          if (iVar1 != 2) break;
          uVar3 = uVar2 + 4;
        }
        uVar2 = uVar3;
        lVar4 = lVar4 + 1;
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_005a7a76:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

