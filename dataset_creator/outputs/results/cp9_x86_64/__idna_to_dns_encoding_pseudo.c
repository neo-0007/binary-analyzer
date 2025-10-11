
undefined4 __idna_to_dns_encoding(char *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = __idna_name_classify();
  if (uVar1 == 4) {
LAB_0076bd10:
    uVar5 = 0xfffffff6;
  }
  else {
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        pcVar3 = strdup(param_1);
        if (pcVar3 != (char *)0x0) {
          *param_2 = pcVar3;
          uVar5 = 0;
          goto LAB_0076bca6;
        }
        goto LAB_0076bd10;
      }
      if (1 < uVar1 - 2) goto LAB_0076bcd3;
    }
    else {
      uVar5 = 0xfffffff5;
      if (uVar1 == 5) goto LAB_0076bca6;
LAB_0076bcd3:
      lVar4 = functions_0;
      if ((functions_0 != 0) ||
         (lVar4 = __libc_allocate_once_slow(&functions_0,functions_allocate,functions_deallocate,0),
         lVar4 != 0)) {
        local_28 = 0;
        iVar2 = (*(code *)((*(ulong *)(lVar4 + 8) >> 0x11 | *(ulong *)(lVar4 + 8) << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30)))(param_1,&local_28,0);
        if (iVar2 == 0) {
          *param_2 = local_28;
          uVar5 = 0;
          goto LAB_0076bca6;
        }
        if (iVar2 == -100) goto LAB_0076bd10;
      }
    }
    uVar5 = 0xffffff97;
  }
LAB_0076bca6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

