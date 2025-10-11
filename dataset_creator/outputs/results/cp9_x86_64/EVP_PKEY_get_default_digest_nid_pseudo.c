
int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey,int *pnid)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&pkey->references == 0) {
    if (*(long *)&pkey[1].save_parameters != 0) {
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      iVar1 = EVP_PKEY_get_default_digest_name(pkey,local_88,0x50);
      if (iVar1 < 1) goto LAB_005304d6;
      uVar3 = ossl_provider_libctx(*(undefined8 *)(*(long *)&pkey[1].save_parameters + 0x18));
      local_8c = 0;
      ERR_set_mark();
      uVar4 = EVP_MD_fetch(uVar3,local_88,0);
      ERR_pop_to_mark();
      uVar3 = ossl_namemap_stored(uVar3);
      EVP_MD_free(uVar4);
      iVar2 = ossl_namemap_name2num(uVar3,local_88);
      if (iVar2 != 0) {
        iVar2 = ossl_namemap_doall_names(uVar3,iVar2,mdname2nid,&local_8c);
        if (iVar2 != 0) {
          *pnid = local_8c;
          goto LAB_005304d6;
        }
      }
    }
    iVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)&pkey->references + 0xb0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00530486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*UNRECOVERED_JUMPTABLE)(pkey,3,0,pnid);
        return iVar1;
      }
      goto LAB_00530593;
    }
    iVar1 = -2;
  }
LAB_005304d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_00530593:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

