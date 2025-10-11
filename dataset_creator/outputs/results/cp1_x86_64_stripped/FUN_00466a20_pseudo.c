
void FUN_00466a20(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  FUN_0043c5e0(param_1 + 2);
  FUN_0041ad60(param_1[5],"../providers/implementations/kdfs/hkdf.c",0x77);
  FUN_0041ad60(param_1[9],"../providers/implementations/kdfs/hkdf.c",0x78);
  FUN_0041ad60(param_1[0xb],"../providers/implementations/kdfs/hkdf.c",0x79);
  FUN_0041aef0(param_1[0xd],param_1[0xe],"../providers/implementations/kdfs/hkdf.c",0x7a);
  FUN_0041aef0(param_1[7],param_1[8],"../providers/implementations/kdfs/hkdf.c",0x7b);
  FUN_004227b0(param_1 + 0xf,param_1[0x10f]);
  param_1[0x10f] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x880U >> 3
                      ); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  return;
}

