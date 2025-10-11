
void FUN_006f25e0(byte *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (pbVar2 = param_1;
      ((bVar1 = *pbVar2, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || ((byte)(bVar1 - 0x30) < 10)) ||
      (bVar1 == 0x5f)); pbVar2 = pbVar2 + 1) {
  }
  if (bVar1 == param_3) {
    FUN_006e9a60(param_1,&local_28,0,0,&PTR_PTR_00939c40);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar2;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

