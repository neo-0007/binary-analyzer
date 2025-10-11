
void FUN_004df900(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  lVar4 = 0;
  lVar3 = 0;
  do {
    uVar1 = uVar2 + *(ulong *)(param_2 + lVar4);
    uVar2 = (lVar3 + (ulong)CARRY8(uVar2,*(ulong *)(param_2 + lVar4))) -
            (ulong)(uVar1 < *(ulong *)(param_3 + lVar4));
    *(ulong *)(param_1 + lVar4) = uVar1 - *(ulong *)(param_3 + lVar4);
    lVar4 = lVar4 + 8;
    lVar3 = (long)uVar2 >> 0x3f;
  } while (lVar4 != 0x38);
  uVar6 = 0;
  uVar1 = 0x2378c292ab5844f3;
  lVar3 = 0;
  while( true ) {
    uVar5 = uVar6 + *(ulong *)(param_1 + lVar3);
    uVar1 = uVar1 & param_5 + uVar2;
    uVar6 = (ulong)CARRY8(uVar6,*(ulong *)(param_1 + lVar3)) + (ulong)CARRY8(uVar5,uVar1);
    *(ulong *)(param_1 + lVar3) = uVar5 + uVar1;
    if (lVar3 + 8 == 0x38) break;
    uVar1 = *(ulong *)((long)&DAT_007f1228 + lVar3);
    lVar3 = lVar3 + 8;
  }
  return;
}

