
int ASN1_STRING_set_default_mask_asc(char *p)

{
  int iVar1;
  uintmax_t mask;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = strncmp(p,"MASK:",5);
  if (iVar1 == 0) {
    if ((p[5] == '\0') || (mask = strtouq(p + 5,&local_18,0), *local_18 != '\0')) {
LAB_005a3d4b:
      iVar1 = 0;
      goto LAB_005a3d4d;
    }
  }
  else {
    iVar1 = strcmp(p,"nombstr");
    if (iVar1 == 0) {
      mask = 0xffffffffffffd7ff;
    }
    else {
      iVar1 = strcmp(p,"pkix");
      if (iVar1 == 0) {
        mask = 0xfffffffffffffffb;
      }
      else {
        iVar1 = strcmp(p,"utf8only");
        if (iVar1 == 0) {
          mask = 0x2000;
        }
        else {
          iVar1 = strcmp(p,"default");
          mask = 0xffffffff;
          if (iVar1 != 0) goto LAB_005a3d4b;
        }
      }
    }
  }
  ASN1_STRING_set_default_mask(mask);
  iVar1 = 1;
LAB_005a3d4d:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

