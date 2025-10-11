
void FUN_0064fce0(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && (param_2 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  lVar2 = param_3 - (long)param_2 >> 2;
  local_28 = lVar2;
  if ((ulong)(param_3 - (long)param_2) < 0xd) {
    puVar1 = (undefined4 *)*param_1;
  }
  else {
    puVar1 = (undefined4 *)FUN_006b5350(param_1,&local_28,0);
    *param_1 = puVar1;
    param_1[2] = local_28;
  }
  if (lVar2 == 1) {
    *puVar1 = *param_2;
  }
  else if (lVar2 != 0) {
    FUN_00771ea0(puVar1,param_2,lVar2,0x3fffffffffffffff);
    puVar1 = (undefined4 *)*param_1;
  }
  param_1[1] = local_28;
  puVar1[local_28] = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

