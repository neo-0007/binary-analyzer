
undefined8 FUN_00708fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
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
      FUN_00784300(*(undefined8 *)(lVar1 + 0x10),param_2,param_3,param_1,param_2);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else if (*(char *)(lVar1 + 4) == '\x02') {
      FUN_007104f0(*(undefined8 *)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
  }
  uVar2 = FUN_0078dc90(&local_40,&local_38,&local_41,param_1,param_2);
  puVar3 = *(undefined4 **)(in_FS_OFFSET + -0x38);
  if (local_38 == 0) {
    uVar4 = 0;
    if ((puVar3 != (undefined4 *)0x0) && (*(long *)(puVar3 + 4) == 0)) {
      *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
      FUN_007104f0(puVar3);
      uVar4 = 0;
    }
  }
  else {
    if ((long)puVar3 - 1U < 0xfffffffffffffffe) {
      if (*(char *)(puVar3 + 1) == '\x01') {
        FUN_00784300(*(undefined8 *)(puVar3 + 4));
      }
      else if (*(char *)(puVar3 + 1) == '\x02') {
        FUN_007104f0(*(undefined8 *)(puVar3 + 4));
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_007101b0(0x18);
      if (puVar3 == (undefined4 *)0x0) {
        if (local_41 != '\0') {
          FUN_00784300(local_38);
        }
        *(undefined8 *)(in_FS_OFFSET + -0x38) = 0xffffffffffffffff;
        uVar4 = 1;
        goto LAB_007090b1;
      }
      *(undefined4 **)(in_FS_OFFSET + -0x38) = puVar3;
    }
    *puVar3 = uVar2;
    *(undefined1 *)((long)puVar3 + 5) = 0;
    *(undefined8 *)(puVar3 + 2) = local_40;
    *(long *)(puVar3 + 4) = local_38;
    if (local_41 == '\0') {
      *(undefined1 *)(puVar3 + 1) = 0;
      uVar4 = 1;
    }
    else {
      *(undefined1 *)(puVar3 + 1) = 1;
      uVar4 = 1;
    }
  }
LAB_007090b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

