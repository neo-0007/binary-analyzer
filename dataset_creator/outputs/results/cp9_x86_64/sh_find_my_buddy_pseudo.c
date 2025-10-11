
long sh_find_my_buddy(long param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = DAT_00932cd8 >> (param_2 & 0x3f);
  uVar1 = (ulong)(param_1 - DAT_00932cd0) / uVar5 + (1L << (param_2 & 0x3f));
  uVar2 = uVar1 >> 3;
  uVar1 = uVar1 ^ 1;
  lVar4 = 0;
  uVar3 = (uint)uVar1 & 7;
  if (((*(byte *)(DAT_00932cf8 + uVar2) >> uVar3 & 1) != 0) &&
     ((*(byte *)(DAT_00932d00 + uVar2) >> uVar3 & 1) == 0)) {
    lVar4 = (~(-1L << (param_2 & 0x3f)) & uVar1) * uVar5 + DAT_00932cd0;
  }
  return lVar4;
}

