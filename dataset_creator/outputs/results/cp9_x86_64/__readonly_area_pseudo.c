
undefined8 __readonly_area(ulong param_1,long param_2)

{
  char *__nptr;
  char *pcVar1;
  char cVar2;
  uint uVar3;
  FILE *__stream;
  ulong uVar4;
  __ssize_t _Var5;
  uintmax_t uVar6;
  uintmax_t uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  char *local_60;
  size_t local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen("/proc/self/maps","rce");
  if (__stream == (FILE *)0x0) {
    if ((*(int *)(in_FS_OFFSET + -0x58) == 2) || (*(int *)(in_FS_OFFSET + -0x58) == 0xd))
    goto LAB_007a31f8;
  }
  else {
    uVar3 = __stream->_flags;
    __stream->_flags = uVar3 | 0x8000;
    local_60 = (char *)0x0;
    local_58 = 0;
    pcVar1 = local_48;
    if ((uVar3 & 0x10) == 0) {
      uVar4 = param_1 + param_2;
      do {
        _Var5 = getdelim(&local_60,&local_58,10,__stream);
        pcVar1 = local_48;
        if (_Var5 < 1) break;
        uVar6 = strtouq(local_60,&local_50,0x10);
        pcVar1 = local_48;
        if (local_50 == local_60) break;
        __nptr = local_50 + 1;
        cVar2 = *local_50;
        local_50 = __nptr;
        if (cVar2 != '-') break;
        uVar7 = strtouq(__nptr,&local_48,0x10);
        pcVar1 = local_48;
        if ((local_48 == local_50) || (pcVar1 = local_48 + 1, *local_48 != ' ')) break;
        if ((uVar6 < uVar4) && (param_1 < uVar7)) {
          pcVar1 = local_48 + 2;
          if ((local_48[1] != 'r') || (pcVar1 = local_48 + 3, local_48[2] != '-')) break;
          if (param_1 < uVar6) {
LAB_007a3189:
            if (uVar7 < uVar4) {
              param_2 = (uVar6 + param_2) - uVar7;
            }
            else {
              param_2 = (param_2 - uVar4) + uVar6;
            }
          }
          else {
            if (uVar4 <= uVar7) {
              param_2 = 0;
              break;
            }
            if (param_1 < uVar6) goto LAB_007a3189;
            param_2 = (param_2 + param_1) - uVar7;
          }
          if (param_2 == 0) break;
        }
        local_48 = pcVar1;
        pcVar1 = local_48;
      } while ((__stream->_flags & 0x10) == 0);
    }
    local_48 = pcVar1;
    fclose(__stream);
    free(local_60);
    if (param_2 == 0) {
LAB_007a31f8:
      uVar8 = 1;
      goto LAB_007a31bc;
    }
  }
  uVar8 = 0xffffffff;
LAB_007a31bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

