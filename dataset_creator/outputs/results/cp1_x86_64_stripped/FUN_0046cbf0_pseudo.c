
void FUN_0046cbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  FUN_0053f190(param_1[1]);
  FUN_0053f190(param_1[2]);
  FUN_0041aef0(param_1[3],param_1[4],"../providers/implementations/kdfs/tls1_prf.c",0x80);
  FUN_004227b0(param_1 + 5,param_1[0x85]);
  param_1[0x85] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x430U >> 3
                      ); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  return;
}

