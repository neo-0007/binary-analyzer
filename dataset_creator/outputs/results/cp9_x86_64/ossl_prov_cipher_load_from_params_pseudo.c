
bool ossl_prov_cipher_load_from_params(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  EVP_CIPHER *pEVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_38;
  long local_30;
  
  bVar5 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043a1a8;
  iVar1 = load_common(param_2,&local_38,param_1 + 2);
  if (iVar1 == 0) {
LAB_0043a1a5:
    bVar5 = false;
    goto LAB_0043a1a8;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"cipher");
  if (lVar2 == 0) goto LAB_0043a1a8;
  if (*(int *)(lVar2 + 8) != 4) goto LAB_0043a1a5;
  EVP_CIPHER_free(param_1[1]);
  ERR_set_mark();
  lVar3 = EVP_CIPHER_fetch(param_3,*(undefined8 *)(lVar2 + 0x10),local_38);
  param_1[1] = lVar3;
  *param_1 = lVar3;
  if (lVar3 == 0) {
    pEVar4 = EVP_get_cipherbyname(*(char **)(lVar2 + 0x10));
    if ((pEVar4 != (EVP_CIPHER *)0x0) && (*(int *)&pEVar4->init != 1)) {
      *param_1 = (long)pEVar4;
      goto LAB_0043a217;
    }
    if (*param_1 != 0) goto LAB_0043a217;
    ERR_clear_last_mark();
  }
  else {
LAB_0043a217:
    ERR_pop_to_mark();
  }
  bVar5 = *param_1 != 0;
LAB_0043a1a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

