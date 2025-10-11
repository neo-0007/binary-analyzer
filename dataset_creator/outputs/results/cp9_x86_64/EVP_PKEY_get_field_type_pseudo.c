
undefined8 EVP_PKEY_get_field_type(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  EC_KEY *key;
  EC_GROUP *pEVar3;
  long in_FS_OFFSET;
  undefined1 local_70 [8];
  long local_68;
  int local_60;
  undefined4 uStack_5c;
  long local_58;
  char local_50;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_005334ca:
    uVar2 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
      key = (EC_KEY *)EVP_PKEY_get0_EC_KEY();
      if ((key != (EC_KEY *)0x0) && (pEVar3 = EC_KEY_get0_group(key), pEVar3 != (EC_GROUP *)0x0)) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = EC_GROUP_get_field_type(pEVar3);
          return uVar2;
        }
        goto LAB_0053353d;
      }
      goto LAB_005334ca;
    }
    iVar1 = EVP_PKEY_get_utf8_string_param(param_1,"field-type",&local_68,0x50,local_70);
    if (iVar1 == 0) goto LAB_005334ca;
    if ((local_68 != 0x69662d656d697270) || (uVar2 = 0x196, local_60 != 0x646c65)) {
      if ((CONCAT44(uStack_5c,local_60) == 0x742d636974736972 && local_68 == 0x6574636172616863) &&
         ((local_58 == 0x646c6569662d6f77 && (local_50 == '\0')))) goto LAB_005334ca;
      uVar2 = 0x197;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_0053353d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

