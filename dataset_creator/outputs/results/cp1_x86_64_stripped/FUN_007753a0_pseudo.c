
undefined8 FUN_007753a0(uint *param_1,char *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((*param_1 & 0xc0ff) == 0x80fe) ||
       (((char)*param_1 == -1 && ((byte)((*(byte *)((long)param_1 + 1) & 0xf) - 1) < 2)))) &&
      (uVar1 = FUN_00773d90(param_2), (int)uVar1 != 0)) ||
     ((((int)*param_2 - 0x30U < 10 &&
       (uVar1 = FUN_006e9a60(param_2,&local_28,10,0,&PTR_PTR_00939c40), *local_28 == '\0')) &&
      (uVar1 >> 0x20 == 0)))) {
    *param_3 = (int)uVar1;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    uVar2 = 0xffffffff;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

