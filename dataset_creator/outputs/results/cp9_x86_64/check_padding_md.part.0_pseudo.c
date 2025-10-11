
undefined8 check_padding_md_part_0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = EVP_MD_get_type();
  if (param_2 == 3) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x18d,"check_padding_md");
    ERR_set_error(4,0x8d,0);
    return 0;
  }
  if (param_2 == 5) {
    iVar1 = RSA_X931_hash_id(iVar1);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x193,"check_padding_md");
      ERR_set_error(4,0x8e,0);
      return 0;
    }
    return 1;
  }
  if (iVar1 < 0x76) {
    if (iVar1 < 0x40) {
      if (iVar1 - 3U < 2) {
        return 1;
      }
    }
    else if ((0x24000080000001U >> ((ulong)(iVar1 - 0x40) & 0x3f) & 1) != 0) {
      return 1;
    }
  }
  else if (iVar1 < 0x2a4) {
    if (0x29f < iVar1) {
      return 1;
    }
    if (iVar1 == 0x101) {
      return 1;
    }
  }
  else if (iVar1 - 0x446U < 6) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x1ad,"check_padding_md");
  ERR_set_error(4,0x9d,0);
  return 0;
}

