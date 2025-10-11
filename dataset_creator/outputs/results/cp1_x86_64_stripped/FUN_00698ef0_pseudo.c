
void FUN_00698ef0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  puVar3 = param_1 + 0xb;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00938928;
  FUN_006274c0(param_1 + 7);
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_009384a8;
  lVar4 = param_2[1];
  param_1[9] = puVar3;
  uVar2 = lVar4 * 4;
  if ((puVar1 + lVar4 != (undefined4 *)0x0) && (puVar1 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  lVar4 = (long)uVar2 >> 2;
  local_48 = lVar4;
  if (0xc < uVar2) {
                    /* try { // try from 00699041 to 00699065 has its CatchHandler @ 0069906b */
    puVar3 = (undefined8 *)FUN_006b5350(param_1 + 9,&local_48,0);
    param_1[9] = puVar3;
    param_1[0xb] = local_48;
  }
  if (lVar4 == 1) {
    *(undefined4 *)puVar3 = *puVar1;
  }
  else if (lVar4 != 0) {
    FUN_00771ea0(puVar3,puVar1,lVar4,0x3fffffffffffffff);
    puVar3 = (undefined8 *)param_1[9];
  }
  param_1[10] = local_48;
  *(undefined4 *)((long)puVar3 + local_48 * 4) = 0;
  *(uint *)(param_1 + 8) = param_3;
  lVar4 = local_48;
  if ((param_3 & 3) == 0) {
    lVar4 = 0;
  }
                    /* try { // try from 00698fe6 to 00698fea has its CatchHandler @ 00699074 */
  FUN_00698d90(param_1,puVar3,0,lVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

