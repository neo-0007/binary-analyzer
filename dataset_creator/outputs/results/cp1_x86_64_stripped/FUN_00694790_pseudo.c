
void FUN_00694790(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  puVar3 = param_1 + 0xb;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_009388a8;
  FUN_006274c0(param_1 + 7);
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = (undefined1 *)*param_2;
  param_1[9] = puVar3;
  *param_1 = &PTR_FUN_009380c8;
  if ((puVar2 + uVar1 != (undefined1 *)0x0) && (puVar2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_48 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 0xb) = *puVar2;
      goto LAB_00694853;
    }
    if (uVar1 == 0) goto LAB_00694853;
  }
  else {
                    /* try { // try from 006948b9 to 006948f0 has its CatchHandler @ 006948fb */
    puVar3 = (undefined8 *)FUN_0069de90(param_1 + 9,&local_48,0);
    param_1[9] = puVar3;
    param_1[0xb] = local_48;
  }
  thunk_FUN_00713a50(puVar3,puVar2,uVar1);
  puVar3 = (undefined8 *)param_1[9];
LAB_00694853:
  param_1[10] = local_48;
  uVar4 = 0;
  *(undefined1 *)((long)puVar3 + local_48) = 0;
  *(uint *)(param_1 + 8) = param_3;
  if ((param_3 & 3) != 0) {
    uVar4 = param_1[10];
  }
                    /* try { // try from 00694873 to 00694877 has its CatchHandler @ 00694904 */
  FUN_00694640(param_1,param_1[9],0,uVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

