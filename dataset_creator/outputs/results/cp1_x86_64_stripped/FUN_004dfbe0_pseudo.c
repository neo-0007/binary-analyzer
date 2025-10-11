
void FUN_004dfbe0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  uVar3 = 0;
  do {
    uVar4 = *(ulong *)(param_2 + lVar1) + *(ulong *)(param_3 + lVar1);
    lVar2 = uVar3 + uVar4;
    uVar3 = (ulong)CARRY8(*(ulong *)(param_2 + lVar1),*(ulong *)(param_3 + lVar1)) +
            (ulong)CARRY8(uVar3,uVar4);
    *(long *)(param_1 + lVar1) = lVar2;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x38);
  FUN_004df900(param_1,param_1,&DAT_007f1220,&DAT_007f1220);
  return;
}

