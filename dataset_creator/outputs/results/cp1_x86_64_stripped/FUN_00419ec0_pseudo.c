
void FUN_00419ec0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_0093fc5c != 0) && (DAT_0093fc80 == 0)) {
    DAT_0093fc80 = 1;
    FUN_0041ab00();
    puVar2 = DAT_0093fc70;
    while (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      FUN_0041ad60(puVar2,"../crypto/init.c",0x16f);
      puVar2 = puVar1;
    }
    DAT_0093fc70 = (undefined8 *)0x0;
    FUN_00422300(DAT_0093fc68);
    DAT_0093fc68 = 0;
    FUN_004223b0(&DAT_0093fc64);
    FUN_004cc590();
    if (DAT_0093fc14 != 0) {
      FUN_004a97b0();
    }
    if (DAT_0093fc40 != 0) {
      FUN_0051dd40();
    }
    FUN_00428d20();
    FUN_004cdb20();
    FUN_0051a720();
    thunk_FUN_00437ad0();
    FUN_004172a0();
    FUN_0041aad0();
    FUN_004ac680();
    FUN_0040d810();
    FUN_004236d0();
    FUN_0051db70();
    FUN_0041bc00();
    FUN_004cbdb0();
    FUN_00422510();
    DAT_0093fc5c = 0;
    return;
  }
  return;
}

