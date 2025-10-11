
void __gettext_extract_plural(char *param_1,undefined8 *param_2,uintmax_t *param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uintmax_t uVar5;
  char *__nptr;
  long in_FS_OFFSET;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    pcVar3 = strstr(param_1,"plural=");
    pcVar4 = strstr(param_1,"nplurals=");
    if ((pcVar3 != (char *)0x0) && (pcVar4 != (char *)0x0)) {
      __nptr = pcVar4 + 9;
      bVar1 = pcVar4[9];
      if (bVar1 != 0) {
        do {
          if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (ulong)bVar1 * 2) & 0x20) == 0) {
            if ((byte)(bVar1 - 0x30) < 10) {
              uVar5 = strtouq(__nptr,&local_50,10);
              if (local_50 != __nptr) {
                *param_3 = uVar5;
                local_48 = pcVar3 + 7;
                iVar2 = __gettextparse(&local_48);
                if (iVar2 == 0) {
                  *param_2 = local_40;
                  goto LAB_006de823;
                }
              }
            }
            break;
          }
          bVar1 = __nptr[1];
          __nptr = __nptr + 1;
        } while (bVar1 != 0);
      }
    }
  }
  *param_2 = __gettext_germanic_plural;
  *param_3 = 2;
LAB_006de823:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

