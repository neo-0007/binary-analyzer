
NAME_CONSTRAINTS *
v2i_NAME_CONSTRAINTS(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  GENERAL_SUBTREE *a;
  GENERAL_NAME *pGVar2;
  long lVar3;
  stack_st_GENERAL_SUBTREE *psVar4;
  int iVar5;
  NAME_CONSTRAINTS *pNVar6;
  long in_FS_OFFSET;
  NAME_CONSTRAINTS *local_60;
  CONF_VALUE local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = NAME_CONSTRAINTS_new();
  if (local_60 == (NAME_CONSTRAINTS *)0x0) {
LAB_0060d288:
    a = (GENERAL_SUBTREE *)0x0;
LAB_0060d215:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_ncons.c",0xa5,"v2i_NAME_CONSTRAINTS");
    ERR_set_error(0x22,0xc0100,0);
LAB_0060d245:
    NAME_CONSTRAINTS_free(local_60);
    GENERAL_SUBTREE_free(a);
    local_60 = (NAME_CONSTRAINTS *)0x0;
  }
  else {
    iVar5 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_3);
      if (iVar1 <= iVar5) break;
      lVar3 = OPENSSL_sk_value(param_3,iVar5);
      __s1 = *(char **)(lVar3 + 8);
      iVar1 = strncmp(__s1,"permitted",9);
      if ((iVar1 == 0) && (__s1[9] != '\0')) {
        local_58.name = __s1 + 10;
        pNVar6 = local_60;
      }
      else {
        iVar1 = strncmp(__s1,"excluded",8);
        if ((iVar1 != 0) || (__s1[8] == '\0')) {
          ERR_new();
          a = (GENERAL_SUBTREE *)0x0;
          ERR_set_debug("../crypto/x509/v3_ncons.c",0x92,"v2i_NAME_CONSTRAINTS");
          ERR_set_error(0x22,0x8f,0);
          goto LAB_0060d245;
        }
        local_58.name = __s1 + 9;
        pNVar6 = (NAME_CONSTRAINTS *)&local_60->excludedSubtrees;
      }
      local_58.value = *(char **)(lVar3 + 0x10);
      a = GENERAL_SUBTREE_new();
      if (a == (GENERAL_SUBTREE *)0x0) goto LAB_0060d288;
      pGVar2 = v2i_GENERAL_NAME_ex(a->base,param_1,param_2,&local_58,1);
      if (pGVar2 == (GENERAL_NAME *)0x0) goto LAB_0060d245;
      psVar4 = pNVar6->permittedSubtrees;
      if (psVar4 == (stack_st_GENERAL_SUBTREE *)0x0) {
        psVar4 = (stack_st_GENERAL_SUBTREE *)OPENSSL_sk_new_null();
        pNVar6->permittedSubtrees = psVar4;
        if (psVar4 == (stack_st_GENERAL_SUBTREE *)0x0) goto LAB_0060d215;
      }
      iVar1 = OPENSSL_sk_push(psVar4,a);
      if (iVar1 == 0) goto LAB_0060d215;
      iVar5 = iVar5 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

