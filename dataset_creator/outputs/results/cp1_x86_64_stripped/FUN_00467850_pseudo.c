
void FUN_00467850(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  FUN_0053f190(param_1[2]);
  FUN_0041aef0(param_1[7],param_1[8],"../providers/implementations/kdfs/kbkdf.c",0x8d);
  FUN_0041aef0(param_1[5],param_1[6],"../providers/implementations/kdfs/kbkdf.c",0x8e);
  FUN_0041aef0(param_1[3],param_1[4],"../providers/implementations/kdfs/kbkdf.c",0x8f);
  FUN_0041aef0(param_1[9],param_1[10],"../providers/implementations/kdfs/kbkdf.c",0x90);
  param_1[1] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  param_1[0xb] = 0x100000001;
  return;
}

