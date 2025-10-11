
void FUN_0046b940(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  FUN_0053f190(param_1[1]);
  FUN_0043c5e0(param_1 + 2);
  FUN_0041aef0(param_1[5],param_1[6],"../providers/implementations/kdfs/sskdf.c",0x131);
  FUN_0041aef0(param_1[7],param_1[8],"../providers/implementations/kdfs/sskdf.c",0x132);
  FUN_0041aef0(param_1[9],param_1[10],"../providers/implementations/kdfs/sskdf.c",0x133);
  param_1[1] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  param_1[0xb] = 0;
  uVar2 = (ulong)(((int)param_1 - (int)puVar3) + 0x60U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  return;
}

