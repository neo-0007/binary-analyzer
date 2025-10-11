
void FUN_007cc8b0(int param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  puVar1 = *(undefined8 **)(&DAT_00946160 + lVar3 * 8);
  if (param_3 != param_2) {
    if ((&DAT_00939b40)[lVar3] != 0) {
      (&PTR_PTR_0093d9c0)[lVar3] = param_3;
      if ((code *)(&PTR_FUN_00939ac0)[lVar3] != (code *)0x0) {
        (*(code *)(&PTR_FUN_00939ac0)[lVar3])();
      }
    }
    if ((&PTR_PTR_0093d9c0)[lVar3 + 0x10] != "C") {
      FUN_007104f0();
      (&PTR_PTR_0093d9c0)[lVar3 + 0x10] = "C";
    }
  }
  while (puVar1 != (undefined8 *)0x0) {
    if (((undefined *)puVar1[2] != (undefined *)0x0) && (param_3 != (undefined *)puVar1[2])) {
      FUN_006e03d0();
    }
    puVar2 = (undefined8 *)puVar1[3];
    FUN_007104f0(*puVar1);
    FUN_007104f0(puVar1);
    puVar1 = puVar2;
  }
  return;
}

