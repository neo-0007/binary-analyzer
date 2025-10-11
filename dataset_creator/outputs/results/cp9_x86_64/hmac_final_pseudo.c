
undefined8 hmac_final(long param_1,uchar *param_2,size_t *param_3)

{
  size_t __n;
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      iVar1 = HMAC_Final(*(HMAC_CTX **)(param_1 + 8),param_2,&local_24);
      if (iVar1 != 0) {
        *param_3 = (ulong)local_24;
        uVar2 = 1;
        goto LAB_0047488a;
      }
    }
    else {
      __n = *(size_t *)(param_1 + 0x98);
      if (__n != 0) {
        if (param_3 != (size_t *)0x0) {
          *param_3 = __n;
        }
        memcpy(param_2,(void *)(param_1 + 0x54),__n);
        uVar2 = 1;
        goto LAB_0047488a;
      }
    }
  }
  uVar2 = 0;
LAB_0047488a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

