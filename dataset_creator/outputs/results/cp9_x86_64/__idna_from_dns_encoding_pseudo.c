
undefined8 __idna_from_dns_encoding(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = functions_0;
  if (functions_0 == 0) {
    lVar2 = __libc_allocate_once_slow(&functions_0,functions_allocate,functions_deallocate,0);
    if (lVar2 != 0) goto LAB_0076bdba;
    pcVar3 = strdup(param_1);
    if (pcVar3 != (char *)0x0) {
      *param_2 = pcVar3;
      uVar1 = 0;
      goto LAB_0076bdeb;
    }
  }
  else {
LAB_0076bdba:
    local_28 = 0;
    uVar1 = (*(code *)((*(ulong *)(lVar2 + 0x10) >> 0x11 | *(ulong *)(lVar2 + 0x10) << 0x2f) ^
                      *(ulong *)(in_FS_OFFSET + 0x30)))(param_1,&local_28,0);
    if ((int)uVar1 == 0) {
      *param_2 = local_28;
      goto LAB_0076bdeb;
    }
    if ((int)uVar1 != -100) {
      uVar1 = 0xffffff97;
      goto LAB_0076bdeb;
    }
  }
  uVar1 = 0xfffffff6;
LAB_0076bdeb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

