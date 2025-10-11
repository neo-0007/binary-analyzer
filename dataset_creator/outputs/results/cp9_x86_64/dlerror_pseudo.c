
char * dlerror(void)

{
  int *__ptr;
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = *(int **)(in_FS_OFFSET + -0x38);
  if (__ptr == (int *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else if (__ptr == (int *)0xffffffffffffffff) {
    *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
    pcVar3 = "out of memory";
  }
  else {
    pcVar3 = *(char **)(__ptr + 4);
    if (pcVar3 != (char *)0x0) {
      if (*(char *)((long)__ptr + 5) == '\0') {
        if (*__ptr == 0) {
          uVar2 = dcgettext(&_libc_intl_domainname,pcVar3,5);
          pcVar3 = "";
          if (**(char **)(__ptr + 2) != '\0') {
            pcVar3 = ": ";
          }
          iVar1 = asprintf(&local_28,"%s%s%s",*(char **)(__ptr + 2),pcVar3,uVar2);
          *(undefined1 *)((long)__ptr + 5) = 1;
        }
        else {
          *(int *)(in_FS_OFFSET + -0x58) = *__ptr;
          uVar2 = dcgettext(&_libc_intl_domainname,pcVar3,5);
          pcVar3 = "";
          if (**(char **)(__ptr + 2) != '\0') {
            pcVar3 = ": ";
          }
          iVar1 = asprintf(&local_28,"%s%s%s: %m",*(char **)(__ptr + 2),pcVar3,uVar2);
          *(int *)(in_FS_OFFSET + -0x58) = *__ptr;
          *(undefined1 *)((long)__ptr + 5) = 1;
        }
        if (iVar1 < 0) {
          pcVar3 = *(char **)(__ptr + 4);
        }
        else {
          if ((char)__ptr[1] == '\x01') {
            _dl_error_free(*(undefined8 *)(__ptr + 4));
          }
          else if ((char)__ptr[1] == '\x02') {
            free(*(void **)(__ptr + 4));
          }
          *(undefined1 *)(__ptr + 1) = 2;
          *(char **)(__ptr + 4) = local_28;
          pcVar3 = local_28;
        }
      }
      else {
        *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
        if ((char)__ptr[1] == '\x01') {
          _dl_error_free(pcVar3);
        }
        else if ((char)__ptr[1] == '\x02') {
          free(pcVar3);
        }
        free(__ptr);
        pcVar3 = (char *)0x0;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar3;
}

