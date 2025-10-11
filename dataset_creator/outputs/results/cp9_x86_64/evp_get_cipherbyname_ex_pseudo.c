
char * evp_get_cipherbyname_ex(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_init_crypto(4,0);
  if (iVar1 != 0) {
    local_28 = OBJ_NAME_get(param_2,2);
    pcVar2 = local_28;
    if (local_28 != (char *)0x0) goto LAB_0052e417;
    uVar3 = ossl_namemap_stored(param_1);
    iVar1 = ossl_namemap_name2num(uVar3,param_2);
    if ((iVar1 != 0) &&
       (iVar1 = ossl_namemap_doall_names(uVar3,iVar1,cipher_from_name,&local_28), pcVar2 = local_28,
       iVar1 != 0)) goto LAB_0052e417;
  }
  pcVar2 = (char *)0x0;
LAB_0052e417:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar2;
}

