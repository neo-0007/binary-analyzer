
undefined1  [16]
FUN_0064f9b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,char param_6,undefined8 *param_7)

{
  undefined1 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [2];
  code *local_48;
  long local_40;
  
  puVar1 = (undefined1 *)*param_7;
  uVar2 = param_7[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  local_48 = (code *)0x0;
  if ((puVar1 + uVar2 != (undefined1 *)0x0) && (puVar1 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_70 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*puVar1);
      goto LAB_0064fa3e;
    }
    if (uVar2 == 0) goto LAB_0064fa3e;
  }
  else {
                    /* try { // try from 0064fadd to 0064fb14 has its CatchHandler @ 0064fb23 */
    local_68 = (ulong *)FUN_0069de90(&local_68,&local_70,0);
    local_58[0] = local_70;
  }
  thunk_FUN_00713a50(local_68,puVar1,uVar2);
LAB_0064fa3e:
  *(undefined1 *)((long)local_68 + local_70) = 0;
  local_48 = FUN_0064f190;
  local_60 = local_70;
                    /* try { // try from 0064fa7d to 0064fa81 has its CatchHandler @ 0064fb23 */
  auVar3 = FUN_00634640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,(int)param_6
                        ,0,0,&local_68);
  if (local_48 != (code *)0x0) {
    (*local_48)(&local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return auVar3;
}

