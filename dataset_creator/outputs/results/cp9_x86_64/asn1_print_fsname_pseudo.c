
bool asn1_print_fsname(BIO *param_1,int param_2,char *param_3,char *param_4,ulong *param_5)

{
  ulong uVar1;
  int iVar2;
  
  if (0x14 < param_2) {
    do {
      iVar2 = BIO_write(param_1,spaces_0,0x14);
      if (iVar2 != 0x14) {
        return false;
      }
      param_2 = param_2 + -0x14;
    } while (0x14 < param_2);
  }
  iVar2 = BIO_write(param_1,spaces_0,param_2);
  if (iVar2 != param_2) {
    return false;
  }
  uVar1 = *param_5;
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x40) == 0) {
      if (param_4 == (char *)0x0 && param_3 == (char *)0x0) {
        return true;
      }
      if (param_3 != (char *)0x0) {
        iVar2 = BIO_puts(param_1,param_3);
        if (iVar2 < 1) {
          return false;
        }
        if (param_4 == (char *)0x0) goto LAB_005a91be;
        iVar2 = BIO_printf(param_1," (%s)",param_4);
        goto joined_r0x005a9207;
      }
      if (param_4 == (char *)0x0) goto LAB_005a91be;
    }
    else if (param_4 == (char *)0x0) {
      return true;
    }
    iVar2 = BIO_puts(param_1,param_4);
  }
  else {
    if ((uVar1 & 0x40) != 0) {
      return true;
    }
    if (param_3 == (char *)0x0) {
      return true;
    }
    iVar2 = BIO_puts(param_1,param_3);
  }
joined_r0x005a9207:
  if (iVar2 < 1) {
    return false;
  }
LAB_005a91be:
  iVar2 = BIO_write(param_1,": ",2);
  return iVar2 == 2;
}

