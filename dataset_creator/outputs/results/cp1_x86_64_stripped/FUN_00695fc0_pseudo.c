
void FUN_00695fc0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  puVar1 = param_1 + 0xf;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00670010(puVar1);
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *param_1 = &DAT_00938150;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0xf] = &DAT_00938178;
  param_1[1] = 0;
                    /* try { // try from 0069605a to 0069605e has its CatchHandler @ 006961ea */
  FUN_0066f450(puVar1,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xf] = &PTR_FUN_009381e8;
  *param_1 = &PTR_FUN_009381c0;
  param_1[6] = 0;
  param_1[2] = &PTR_FUN_009388a8;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_006274c0(param_1 + 9);
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 10) = 0;
  puVar3 = (undefined1 *)*param_2;
  param_1[2] = &PTR_FUN_009380c8;
  puVar4 = param_1 + 0xd;
  param_1[0xb] = puVar4;
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_48 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0xd) = *puVar3;
      goto LAB_00696125;
    }
    if (uVar2 == 0) goto LAB_00696125;
  }
  else {
                    /* try { // try from 0069619b to 006961d4 has its CatchHandler @ 006961e1 */
    puVar4 = (undefined8 *)FUN_0069de90(param_1 + 0xb,&local_48,0);
    param_1[0xb] = puVar4;
    param_1[0xd] = local_48;
  }
  thunk_FUN_00713a50(puVar4,puVar3,uVar2);
  puVar4 = (undefined8 *)param_1[0xb];
LAB_00696125:
  param_1[0xc] = local_48;
  uVar5 = 0;
  *(undefined1 *)((long)puVar4 + local_48) = 0;
  *(uint *)(param_1 + 10) = param_3 | 8;
  if ((param_3 & 3) != 0) {
    uVar5 = param_1[0xc];
  }
                    /* try { // try from 0069614a to 0069614e has its CatchHandler @ 0069624b */
  FUN_00694640(param_1 + 2,param_1[0xb],0,uVar5);
                    /* try { // try from 00696155 to 00696159 has its CatchHandler @ 00696254 */
  FUN_0066f450(puVar1,param_1 + 2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

