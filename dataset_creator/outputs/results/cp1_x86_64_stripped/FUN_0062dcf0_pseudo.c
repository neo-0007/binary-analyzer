
bool FUN_0062dcf0(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,
                 undefined8 *param_5,ushort *param_6,long param_7,undefined8 *param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  puVar5 = param_6;
  if ((uVar3 & 2) != 0) {
    bVar6 = true;
    if ((uVar3 & 1) == 0) {
      if ((ulong)(param_7 - (long)param_6) < 2) goto LAB_0062dd8d;
      puVar5 = param_6 + 1;
      *param_6 = 0xfffe;
    }
    else {
      if ((ulong)(param_7 - (long)param_6) < 2) goto LAB_0062dd8d;
      puVar5 = param_6 + 1;
      *param_6 = 0xfeff;
    }
  }
  puVar4 = puVar5;
  if (param_3 != param_4) {
    do {
      puVar5 = puVar4;
      if ((ulong)(param_7 - (long)puVar4) >> 1 == 0) break;
      uVar1 = *param_3;
      if ((uVar1 - 0xd800 < 0x400) || (uVar2 < uVar1)) {
        *param_5 = param_3;
        *param_8 = puVar4;
        return (bool)2;
      }
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar1 << 8 | uVar1 >> 8;
      }
      param_3 = param_3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar5;
    } while (param_4 != param_3);
  }
  bVar6 = param_4 != param_3;
  param_6 = puVar5;
LAB_0062dd8d:
  *param_5 = param_3;
  *param_8 = param_6;
  return bVar6;
}

