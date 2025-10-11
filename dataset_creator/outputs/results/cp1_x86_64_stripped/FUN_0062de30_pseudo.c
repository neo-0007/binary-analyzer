
char FUN_0062de30(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,
                 undefined8 *param_5,ushort *param_6,ushort *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_4c;
  ushort *local_48;
  ushort *local_40;
  long local_30;
  
  local_4c = *(uint *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_3;
  local_40 = param_4;
  FUN_0062dde0(&local_48,&local_4c,param_3,0);
  uVar7 = (uint)uVar1;
  if (0xffff < uVar7) {
    uVar7 = 0xffff;
  }
  puVar6 = local_48;
  if ((ulong)((long)param_4 - (long)local_48) >> 1 != 0) {
    bVar2 = false;
    do {
      if (param_7 == param_6) {
        cVar3 = '\x01';
        if (!bVar2) {
          puVar6 = local_48;
        }
        *param_5 = puVar6;
        *param_8 = param_7;
        goto LAB_0062df17;
      }
      uVar4 = *puVar6;
      if ((local_4c & 1) == 0) {
        uVar4 = uVar4 << 8 | uVar4 >> 8;
      }
      uVar5 = (uint)uVar4;
      if (((uVar5 - 0xd800 < 0x400) || (uVar5 - 0xdc00 < 0x400)) || (uVar7 < uVar5)) {
        cVar3 = '\x02';
        if (!bVar2) {
          puVar6 = local_48;
        }
        *param_5 = puVar6;
        *param_8 = param_6;
        goto LAB_0062df17;
      }
      puVar6 = puVar6 + 1;
      *param_6 = uVar4;
      param_6 = param_6 + 1;
      bVar2 = true;
    } while ((ulong)((long)param_4 - (long)puVar6) >> 1 != 0);
  }
  *param_5 = puVar6;
  *param_8 = param_6;
  cVar3 = (param_4 != puVar6) * '\x02';
LAB_0062df17:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return cVar3;
}

