
undefined8 ossl_blake2s_final(undefined1 *param_1,void *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *__src;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar2 = local_58;
  __src = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  iVar3 = (int)(*(ulong *)((long)param_2 + 0x78) + 3 >> 2);
  if ((*(ulong *)((long)param_2 + 0x78) & 3) == 0) {
    *(undefined4 *)((long)param_2 + 0x28) = 0xffffffff;
    memset((void *)(*(long *)((long)param_2 + 0x70) + (long)param_2 + 0x30),0,
           0x40 - *(long *)((long)param_2 + 0x70));
    blake2s_compress(param_2,(long)param_2 + 0x30,*(undefined8 *)((long)param_2 + 0x70));
    puVar2 = param_1;
    if (iVar3 < 1) goto LAB_0044f368;
LAB_0044f343:
    lVar1 = 0;
    do {
      *(undefined4 *)(puVar2 + lVar1 * 4) = *(undefined4 *)((long)param_2 + lVar1 * 4);
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < iVar3);
    __src = puVar2;
    if (param_1 == puVar2) goto LAB_0044f368;
  }
  else {
    *(undefined4 *)((long)param_2 + 0x28) = 0xffffffff;
    memset((void *)(*(long *)((long)param_2 + 0x70) + (long)param_2 + 0x30),0,
           0x40 - *(long *)((long)param_2 + 0x70));
    blake2s_compress(param_2,(long)param_2 + 0x30,*(undefined8 *)((long)param_2 + 0x70));
    if (0 < iVar3) goto LAB_0044f343;
  }
  memcpy(param_1,__src,*(size_t *)((long)param_2 + 0x78));
LAB_0044f368:
  OPENSSL_cleanse(param_2,0x80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 1;
}

