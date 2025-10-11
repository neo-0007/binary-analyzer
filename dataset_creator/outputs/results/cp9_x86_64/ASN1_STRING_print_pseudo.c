
int ASN1_STRING_print(BIO *bp,ASN1_STRING *v)

{
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long in_FS_OFFSET;
  uchar local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (v == (ASN1_STRING *)0x0) {
LAB_005a2088:
    uVar4 = 0;
  }
  else {
    puVar1 = v->data;
    if (0 < v->length) {
      lVar5 = 0;
      iVar3 = 0;
      do {
        while (uVar2 = puVar1[lVar5], uVar2 != '\x7f') {
          if (((char)uVar2 < ' ' && uVar2 != '\n') && (uVar2 != '\r')) {
            uVar2 = '.';
          }
          local_88[iVar3] = uVar2;
          if (iVar3 == 0x4f) goto LAB_005a2021;
LAB_005a1ffc:
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 1;
          if (v->length <= (int)lVar5) goto LAB_005a2040;
        }
        local_88[iVar3] = '.';
        if (iVar3 != 0x4f) goto LAB_005a1ffc;
LAB_005a2021:
        iVar3 = BIO_write(bp,local_88,iVar3 + 1);
        if (iVar3 < 1) goto LAB_005a2088;
        iVar3 = 0;
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < v->length);
LAB_005a2040:
      if (iVar3 != 0) {
        iVar3 = BIO_write(bp,local_88,iVar3);
        uVar4 = (uint)(0 < iVar3);
        goto LAB_005a2049;
      }
    }
    uVar4 = 1;
  }
LAB_005a2049:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

