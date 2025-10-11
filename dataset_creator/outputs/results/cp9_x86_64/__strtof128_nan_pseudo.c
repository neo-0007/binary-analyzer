
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __strtof128_nan(byte *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  byte *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (pbVar3 = param_1;
      ((bVar1 = *pbVar3, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || ((byte)(bVar1 - 0x30) < 10)) ||
      (bVar1 == 0x5f)); pbVar3 = pbVar3 + 1) {
  }
  if ((bVar1 != param_3) ||
     (uVar2 = ____strtoul_l_internal(param_1,&local_28,0,0,_nl_C_locobj), local_28 != pbVar3)) {
    uVar2 = _DAT_00834c30;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar3;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

