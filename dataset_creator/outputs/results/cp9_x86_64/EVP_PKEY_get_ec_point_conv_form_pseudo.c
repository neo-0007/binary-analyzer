
point_conversion_form_t EVP_PKEY_get_ec_point_conv_form(long param_1)

{
  point_conversion_form_t pVar1;
  EC_KEY *key;
  long in_FS_OFFSET;
  undefined1 local_70 [8];
  int local_68;
  short sStack_64;
  char cStack_62;
  undefined1 uStack_61;
  undefined4 local_60;
  char local_5c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00533360:
    pVar1 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
      key = (EC_KEY *)EVP_PKEY_get0_EC_KEY();
      if (key != (EC_KEY *)0x0) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          pVar1 = EC_KEY_get_conv_form(key);
          return pVar1;
        }
        goto LAB_0053340d;
      }
      goto LAB_00533360;
    }
    pVar1 = EVP_PKEY_get_utf8_string_param(param_1,"point-format",&local_68,0x50,local_70);
    if ((pVar1 != 0) &&
       (((CONCAT17(uStack_61,CONCAT16(cStack_62,CONCAT24(sStack_64,local_68))) != 0x6572706d6f636e75
         || (local_60 != 0x64657373)) || (pVar1 = POINT_CONVERSION_UNCOMPRESSED, local_5c != '\0')))
       ) {
      if ((CONCAT17(uStack_61,CONCAT16(cStack_62,CONCAT24(sStack_64,local_68))) ==
           0x73736572706d6f63) && ((short)local_60 == 0x6465)) {
        pVar1 = POINT_CONVERSION_COMPRESSED;
        if (local_60._2_1_ == '\0') goto LAB_00533362;
      }
      if (((local_68 != 0x72627968) || (sStack_64 != 0x6469)) ||
         (pVar1 = POINT_CONVERSION_HYBRID, cStack_62 != '\0')) goto LAB_00533360;
    }
  }
LAB_00533362:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pVar1;
  }
LAB_0053340d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

