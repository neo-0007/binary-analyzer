
ulong FUN_005c1040(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if (0 < param_4) {
    bVar6 = false;
    do {
      uVar2 = *(ulong *)(param_2 + uVar5 * 8);
      puVar1 = (ulong *)(param_3 + uVar5 * 8);
      uVar3 = (ulong)bVar6;
      uVar4 = uVar2 + *puVar1;
      bVar6 = CARRY8(uVar2,*puVar1) || CARRY8(uVar4,uVar3);
      *(ulong *)(param_1 + uVar5 * 8) = uVar4 + uVar3;
      uVar5 = uVar5 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    uVar5 = (ulong)(-(uint)bVar6 & 1);
  }
  return uVar5;
}

