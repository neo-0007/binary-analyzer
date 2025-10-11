
int OBJ_create_objects(BIO *in)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *ln;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char local_248 [520];
  long local_40;
  
  ln = (char *)0x0;
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while (iVar3 = BIO_gets(in,local_248,0x200), 0 < iVar3) {
    local_248[iVar3 + -1] = '\0';
    iVar3 = ossl_ctype_check((int)local_248[0],7);
    pcVar6 = local_248;
    if (iVar3 == 0) break;
    for (; (iVar3 = ossl_isdigit((int)*pcVar6), iVar3 != 0 || (*pcVar6 == '.')); pcVar6 = pcVar6 + 1
        ) {
    }
    pcVar2 = (char *)0x0;
    if (*pcVar6 != '\0') {
      *pcVar6 = '\0';
      do {
        pcVar6 = pcVar6 + 1;
        iVar3 = ossl_ctype_check((int)*pcVar6,8);
      } while (iVar3 != 0);
      cVar1 = *pcVar6;
      pcVar5 = pcVar6;
      if (cVar1 == '\0') {
        pcVar2 = (char *)0x0;
      }
      else {
        do {
          iVar3 = ossl_ctype_check((int)cVar1,8);
          pcVar2 = pcVar6;
          if (iVar3 != 0) {
            ln = (char *)0x0;
            if (*pcVar5 != '\0') {
              *pcVar5 = '\0';
              do {
                pcVar5 = pcVar5 + 1;
                iVar3 = ossl_ctype_check((int)*pcVar5,8);
              } while (iVar3 != 0);
              ln = pcVar5;
              if (*pcVar5 == '\0') {
                ln = (char *)0x0;
              }
            }
            goto joined_r0x0042af41;
          }
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        ln = (char *)0x0;
      }
    }
joined_r0x0042af41:
    if ((local_248[0] == '\0') || (iVar3 = OBJ_create(local_248,pcVar2,ln), iVar3 == 0)) break;
    iVar4 = iVar4 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

