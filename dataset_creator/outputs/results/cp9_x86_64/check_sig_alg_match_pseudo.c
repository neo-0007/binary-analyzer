
undefined8 check_sig_alg_match(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar2 = 0x18;
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_2 + 0x20));
    iVar1 = OBJ_find_sigid_algs(iVar1,(int *)0x0,&local_14);
    uVar2 = 0x4c;
    if (iVar1 != 0) {
      pcVar3 = OBJ_nid2sn(local_14);
      iVar1 = EVP_PKEY_is_a(param_1,pcVar3);
      if (iVar1 == 0) {
        iVar1 = EVP_PKEY_is_a(param_1,"RSA");
        uVar2 = 0x4d;
        if ((iVar1 != 0) && (local_14 == 0x390)) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

