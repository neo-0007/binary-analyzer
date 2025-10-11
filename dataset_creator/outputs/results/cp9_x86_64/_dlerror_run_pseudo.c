
undefined8 _dlerror_run(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *__ptr;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_41;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(in_FS_OFFSET + -0x38);
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
    }
    else if (*(char *)(lVar1 + 4) == '\x01') {
      _dl_error_free(*(undefined8 *)(lVar1 + 0x10),param_2,param_3,param_1,param_2);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else if (*(char *)(lVar1 + 4) == '\x02') {
      free(*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
  }
  uVar2 = _dl_catch_error(&local_40,&local_38,&local_41,param_1,param_2);
  __ptr = *(undefined4 **)(in_FS_OFFSET + -0x38);
  if (local_38 == 0) {
    uVar3 = 0;
    if ((__ptr != (undefined4 *)0x0) && (*(long *)(__ptr + 4) == 0)) {
      *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
      free(__ptr);
      uVar3 = 0;
    }
  }
  else {
    if ((long)__ptr - 1U < 0xfffffffffffffffe) {
      if (*(char *)(__ptr + 1) == '\x01') {
        _dl_error_free(*(undefined8 *)(__ptr + 4));
      }
      else if (*(char *)(__ptr + 1) == '\x02') {
        free(*(void **)(__ptr + 4));
      }
    }
    else {
      __ptr = (undefined4 *)malloc(0x18);
      if (__ptr == (undefined4 *)0x0) {
        if (local_41 != '\0') {
          _dl_error_free(local_38);
        }
        *(undefined8 *)(in_FS_OFFSET + -0x38) = 0xffffffffffffffff;
        uVar3 = 1;
        goto LAB_006ff6a1;
      }
      *(undefined4 **)(in_FS_OFFSET + -0x38) = __ptr;
    }
    *__ptr = uVar2;
    *(undefined1 *)((long)__ptr + 5) = 0;
    *(undefined8 *)(__ptr + 2) = local_40;
    *(long *)(__ptr + 4) = local_38;
    if (local_41 == '\0') {
      *(undefined1 *)(__ptr + 1) = 0;
      uVar3 = 1;
    }
    else {
      *(undefined1 *)(__ptr + 1) = 1;
      uVar3 = 1;
    }
  }
LAB_006ff6a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

