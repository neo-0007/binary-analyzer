
void ERR_print_errors_cb(cb *cb,void *u)

{
  int iVar1;
  char *ptr;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  byte bVar8;
  uint local_1070;
  byte local_106c [4];
  pthread_t local_1068;
  undefined8 local_1060;
  undefined1 *local_1058;
  undefined8 local_1050;
  undefined1 local_1048 [16];
  undefined8 local_1038 [511];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1068 = CRYPTO_THREAD_get_current_id();
  do {
    lVar4 = ERR_get_error_all(&local_1060,&local_1070,&local_1050,&local_1058,local_106c);
    if (lVar4 == 0) break;
    puVar7 = local_1038;
    for (lVar5 = 0x1fe; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
    }
    local_1048 = (undefined1  [16])0x0;
    if ((local_106c[0] & 2) == 0) {
      local_1058 = &DAT_008343a2;
    }
    ptr = (char *)ossl_buf2hexstr_sep(&local_1068,8,0);
    pcVar6 = "<null>";
    if (ptr != (char *)0x0) {
      pcVar6 = ptr;
    }
    BIO_snprintf(local_1048,0x1000,"%s:",pcVar6);
    sVar2 = strlen(local_1048);
    pcVar6 = local_1048 + sVar2;
    ossl_err_string_int(lVar4,local_1050,pcVar6,0x1000 - sVar2);
    sVar3 = strlen(pcVar6);
    lVar4 = (long)((int)sVar3 + (int)sVar2);
    BIO_snprintf(local_1048 + lVar4,0x1000 - lVar4,":%s:%d:%s\n",local_1060,(ulong)local_1070,
                 local_1058);
    CRYPTO_free(ptr);
    sVar2 = strlen(local_1048);
    iVar1 = (*cb)(local_1048,sVar2,u);
  } while (0 < iVar1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

