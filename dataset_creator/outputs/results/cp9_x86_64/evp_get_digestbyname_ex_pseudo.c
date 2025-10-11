
char * evp_get_digestbyname_ex(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_init_crypto(8,0);
  if (iVar1 != 0) {
    local_28 = OBJ_NAME_get(param_2,1);
    pcVar2 = local_28;
    if (local_28 != (char *)0x0) goto LAB_0052e4d7;
    uVar3 = ossl_namemap_stored(param_1);
    iVar1 = ossl_namemap_name2num(uVar3,param_2);
    if ((iVar1 != 0) &&
       (iVar1 = ossl_namemap_doall_names(uVar3,iVar1,digest_from_name,&local_28), pcVar2 = local_28,
       iVar1 != 0)) goto LAB_0052e4d7;
  }
  pcVar2 = (char *)0x0;
LAB_0052e4d7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar2;
}

