
ulong __strtod_nan(byte *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  ulong uVar4;
  byte *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (pbVar3 = param_1;
      ((bVar1 = *pbVar3, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || ((byte)(bVar1 - 0x30) < 10)) ||
      (bVar1 == 0x5f)); pbVar3 = pbVar3 + 1) {
  }
  uVar4 = DAT_0081b228;
  if ((bVar1 == param_3) &&
     (uVar2 = ____strtoul_l_internal(param_1,&local_28,0,0,_nl_C_locobj), uVar4 = DAT_0081b228,
     local_28 == pbVar3)) {
    uVar4 = uVar2 & 0xffffffff | uVar2 & 0x7ffff00000000 | 0x7ff8000000000000;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar3;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

