
char * __cxa_demangle(long param_1,char *param_2,ulong *param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  ulong uVar3;
  long in_FS_OFFSET;
  char *local_58;
  undefined8 local_50;
  ulong local_48;
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || ((param_2 != (char *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
    }
  }
  else {
    local_58 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    iVar1 = d_demangle_callback_constprop_0(param_1,d_growable_string_callback_adapter,&local_58);
    __src = local_58;
    if (iVar1 == 0) {
      free(local_58);
      if (param_4 != (undefined4 *)0x0) {
LAB_006c0bce:
        *param_4 = 0xfffffffe;
        __src = (char *)0x0;
        goto LAB_006c0b44;
      }
    }
    else if (local_40 == 0) {
      uVar3 = local_48;
      if (local_58 != (char *)0x0) goto LAB_006c0b04;
      if (param_4 != (undefined4 *)0x0) {
        if (local_48 == 1) goto LAB_006c0b85;
        goto LAB_006c0bce;
      }
    }
    else {
      uVar3 = 1;
      if (local_58 != (char *)0x0) {
LAB_006c0b04:
        if (param_2 == (char *)0x0) {
          if (param_3 != (ulong *)0x0) goto LAB_006c0ba8;
        }
        else {
          sVar2 = strlen(local_58);
          if (sVar2 < *param_3) {
            memcpy(param_2,__src,sVar2 + 1);
            free(__src);
            __src = param_2;
          }
          else {
            free(param_2);
LAB_006c0ba8:
            *param_3 = uVar3;
          }
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
        goto LAB_006c0b44;
      }
      if (param_4 != (undefined4 *)0x0) {
LAB_006c0b85:
        *param_4 = 0xffffffff;
        __src = (char *)0x0;
        goto LAB_006c0b44;
      }
    }
  }
  __src = (char *)0x0;
LAB_006c0b44:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return __src;
}

