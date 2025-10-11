
void FUN_006f2760(byte *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  byte *local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined2 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (pbVar4 = param_1;
      ((bVar1 = *pbVar4, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || ((byte)(bVar1 - 0x30) < 10)) ||
      (bVar1 == 0x5f)); pbVar4 = pbVar4 + 1) {
  }
  if ((bVar1 == param_3) &&
     (uVar2 = FUN_006e9a60(param_1,&local_40,0,0,&PTR_PTR_00939c40), local_40 == pbVar4)) {
    uStack_34 = (uint)((unkuint10)(longdouble)DAT_0082538c >> 0x20);
    uVar3 = uStack_34 & 0xc0000000;
    uStack_30 = (undefined2)((unkuint10)(longdouble)DAT_0082538c >> 0x40);
    _local_38 = CONCAT44(uVar3 | (uint)((ulong)uVar2 >> 0x20) & 0x3fffffff,(int)uVar2);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

