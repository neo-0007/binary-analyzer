
bool ossl_prov_digest_load_from_params(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  EVP_MD *pEVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  long local_30;
  
  bVar4 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043a3d8;
  iVar1 = load_common(param_2,&local_38,param_1 + 2);
  if (iVar1 == 0) {
LAB_0043a3d5:
    bVar4 = false;
    goto LAB_0043a3d8;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
  if (lVar2 == 0) goto LAB_0043a3d8;
  if (*(int *)(lVar2 + 8) != 4) goto LAB_0043a3d5;
  ERR_set_mark();
  ossl_prov_digest_fetch(param_1,param_3,*(undefined8 *)(lVar2 + 0x10),local_38);
  if (*param_1 == 0) {
    pEVar3 = EVP_get_digestbyname(*(char **)(lVar2 + 0x10));
    if ((pEVar3 != (EVP_MD *)0x0) && (*(int *)&pEVar3->init != 1)) {
      *param_1 = (long)pEVar3;
      goto LAB_0043a43b;
    }
    if (*param_1 != 0) goto LAB_0043a43b;
    ERR_clear_last_mark();
  }
  else {
LAB_0043a43b:
    ERR_pop_to_mark();
  }
  bVar4 = *param_1 != 0;
LAB_0043a3d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

