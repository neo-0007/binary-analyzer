
void FUN_004e1eb0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  uVar3 = -(param_3 & 0xff);
  do {
    uVar1 = *(uint *)(param_1 + lVar2 * 4);
    *(uint *)(param_1 + lVar2 * 4) = (*(uint *)(param_2 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x28 + lVar2 * 4);
    *(uint *)(param_1 + 0x28 + lVar2 * 4) =
         (*(uint *)(param_2 + 0x28 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x50 + lVar2 * 4);
    *(uint *)(param_1 + 0x50 + lVar2 * 4) =
         (*(uint *)(param_2 + 0x50 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  return;
}

