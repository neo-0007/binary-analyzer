
void SHA3_squeeze(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar1 = param_4 >> 3;
  puVar2 = param_1;
  while( true ) {
    if (param_3 < 8) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar2;
        puVar2 = (undefined8 *)((long)puVar2 + (ulong)bVar3 * -2 + 1);
        param_2 = (undefined8 *)((long)param_2 + (ulong)bVar3 * -2 + 1);
      }
      return;
    }
    *param_2 = *puVar2;
    param_2 = param_2 + 1;
    param_3 = param_3 - 8;
    if (param_3 == 0) break;
    uVar1 = uVar1 - 1;
    puVar2 = puVar2 + 1;
    if (uVar1 == 0) {
      KeccakF1600();
      uVar1 = param_4 >> 3;
      puVar2 = param_1;
    }
  }
  return;
}

