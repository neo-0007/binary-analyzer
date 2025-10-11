
void FUN_006674c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  puVar1 = param_1 + 7;
  *param_1 = &PTR_FUN_00938928;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_006274c0(puVar1);
  param_1[0xc] = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *param_1 = &PTR_FUN_00936cc8;
  FUN_006c3d20(param_1 + 0xd,param_1 + 8);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x2000;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  cVar2 = FUN_006a6b60(puVar1);
  if (cVar2 == '\0') {
    return;
  }
                    /* try { // try from 00667613 to 00667617 has its CatchHandler @ 00667628 */
  uVar3 = FUN_006a51f0(puVar1);
  param_1[0x19] = uVar3;
  return;
}

