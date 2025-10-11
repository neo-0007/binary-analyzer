
undefined8 ossl_blake2b_final(undefined1 *param_1,void *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *__src;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar2 = local_78;
  __src = local_78;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  iVar3 = (int)(*(ulong *)((long)param_2 + 0xe8) + 7 >> 3);
  if ((*(ulong *)((long)param_2 + 0xe8) & 7) == 0) {
    *(undefined8 *)((long)param_2 + 0x50) = 0xffffffffffffffff;
    memset((void *)(*(long *)((long)param_2 + 0xe0) + (long)param_2 + 0x60),0,
           0x80 - *(long *)((long)param_2 + 0xe0));
    blake2b_compress(param_2,(long)param_2 + 0x60,*(undefined8 *)((long)param_2 + 0xe0));
    puVar2 = param_1;
    if (iVar3 < 1) goto LAB_0044dcc5;
LAB_0044dc9a:
    lVar1 = 0;
    do {
      *(undefined8 *)(puVar2 + lVar1 * 8) = *(undefined8 *)((long)param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < iVar3);
    __src = puVar2;
    if (param_1 == puVar2) goto LAB_0044dcc5;
  }
  else {
    *(undefined8 *)((long)param_2 + 0x50) = 0xffffffffffffffff;
    memset((void *)(*(long *)((long)param_2 + 0xe0) + (long)param_2 + 0x60),0,
           0x80 - *(long *)((long)param_2 + 0xe0));
    blake2b_compress(param_2,(long)param_2 + 0x60,*(undefined8 *)((long)param_2 + 0xe0));
    if (0 < iVar3) goto LAB_0044dc9a;
  }
  memcpy(param_1,__src,*(size_t *)((long)param_2 + 0xe8));
LAB_0044dcc5:
  OPENSSL_cleanse(param_2,0xf0);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 1;
}

