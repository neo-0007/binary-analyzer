
/* WARNING: Removing unreachable block (ram,0x0064f70f) */

undefined1  [16] FUN_0064f670(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 *in_stack_00000018;
  undefined8 *local_88;
  long local_80;
  undefined8 local_78 [2];
  long local_68;
  long local_60;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (code *)0x0;
                    /* try { // try from 0064f6ce to 0064f6d2 has its CatchHandler @ 0064f841 */
  auVar3 = FUN_00634280(*(undefined8 *)(param_1 + 0x10));
  if (local_48 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("uninitialized __any_string");
  }
  local_88 = local_78;
                    /* try { // try from 0064f768 to 0064f840 has its CatchHandler @ 0064f841 */
  FUN_0064f5b0(&local_88,local_68,local_60 + local_68);
  puVar2 = (undefined8 *)*in_stack_00000018;
  if (local_88 == local_78) {
    if (local_80 != 0) {
      if (local_80 == 1) {
        *(undefined1 *)puVar2 = (undefined1)local_78[0];
        puVar2 = (undefined8 *)*in_stack_00000018;
      }
      else {
        thunk_FUN_00713a50(puVar2,local_78);
        puVar2 = (undefined8 *)*in_stack_00000018;
      }
    }
    in_stack_00000018[1] = local_80;
    *(undefined1 *)((long)puVar2 + local_80) = 0;
    uVar1 = local_78[0];
  }
  else {
    if (puVar2 == in_stack_00000018 + 2) {
      *in_stack_00000018 = local_88;
      in_stack_00000018[1] = local_80;
      in_stack_00000018[2] = local_78[0];
    }
    else {
      uVar1 = in_stack_00000018[2];
      *in_stack_00000018 = local_88;
      in_stack_00000018[1] = local_80;
      in_stack_00000018[2] = local_78[0];
      local_88 = puVar2;
      if (puVar2 != (undefined8 *)0x0) goto LAB_0064f7ac;
    }
    local_88 = local_78;
    uVar1 = local_78[0];
  }
LAB_0064f7ac:
  local_78[0] = uVar1;
  local_80 = 0;
  *(undefined1 *)local_88 = 0;
  if (local_88 != local_78) {
    thunk_FUN_007104f0();
  }
  if (local_48 != (code *)0x0) {
    (*local_48)(&local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._8_8_ = param_3 & 0xffffffff00000000 | auVar3._8_8_ & 0xffffffff;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

