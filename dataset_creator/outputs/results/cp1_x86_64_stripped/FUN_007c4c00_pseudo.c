
undefined8
FUN_007c4c00(long *param_1,undefined1 *param_2,long param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  lVar2 = thunk_FUN_007129d0(param_2);
  if (param_3 == 0) {
    if (0x3ff < lVar2 - 1U) goto LAB_007c4d60;
  }
  else {
    lVar3 = thunk_FUN_007129d0(param_3);
    if (0x400 < (ulong)(lVar2 + 1 + lVar3)) {
LAB_007c4d60:
      *(undefined4 *)(lVar1 + 0x1f0) = 3;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
      uVar5 = 0xffffffff;
      goto LAB_007c4d26;
    }
    puVar4 = (undefined1 *)thunk_FUN_00713930(local_448,param_2);
    *puVar4 = 0x2e;
    thunk_FUN_00713a50(puVar4 + 1,param_3,lVar3 + 1);
    param_2 = local_448;
  }
  uVar5 = FUN_007c4580(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                       param_11,param_12);
LAB_007c4d26:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

