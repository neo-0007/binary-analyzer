
void __nss_dns_functions(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 auStack_218 [14];
  code *local_1a8;
  code *local_180;
  code *pcStack_178;
  code *local_170;
  code *pcStack_168;
  code *local_160;
  code *pcStack_158;
  code *local_140;
  code *pcStack_138;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = auStack_218;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1a8 = _nss_dns_getcanonname_r;
  local_180 = _nss_dns_gethostbyaddr2_r;
  pcStack_178 = _nss_dns_gethostbyaddr_r;
  local_170 = _nss_dns_gethostbyname2_r;
  pcStack_168 = _nss_dns_gethostbyname3_r;
  local_160 = _nss_dns_gethostbyname4_r;
  pcStack_158 = _nss_dns_gethostbyname_r;
  local_140 = _nss_dns_getnetbyaddr_r;
  pcStack_138 = _nss_dns_getnetbyname_r;
  *param_1 = 0;
  param_1[0x3f] = 0;
  lVar1 = (long)param_1 - (long)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)((long)auStack_218 - lVar1);
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)((int)lVar1 + 0x200U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

