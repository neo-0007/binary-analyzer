
undefined8 __libc_dynarray_emplace_enlarge(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  size_t __size;
  void *pvVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    if (param_3 < 4) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = 4;
      if (param_3 < 8) {
        pvVar4 = (void *)param_1[2];
        __size = param_3 * 8;
        uVar5 = 8;
        goto joined_r0x00799566;
      }
    }
  }
  else {
    uVar5 = uVar1 + 1 + (uVar1 >> 1);
    if (uVar5 <= uVar1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      return 0;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  __size = SUB168(auVar2 * auVar3,0);
  if (SUB168(auVar2 * auVar3,8) != 0) {
    return 0;
  }
  pvVar4 = (void *)param_1[2];
joined_r0x00799566:
  if (pvVar4 == param_2) {
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (param_2 != (void *)0x0) {
      pvVar4 = memcpy(pvVar4,param_2,param_3 * *param_1);
    }
  }
  else {
    pvVar4 = realloc(pvVar4,__size);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  param_1[1] = uVar5;
  param_1[2] = (long)pvVar4;
  return 1;
}

