
void FUN_00428d20(void)

{
  if (DAT_0093fd4c != 0) {
    if ((DAT_0093fd58 != 0) && (*(code **)(DAT_0093fd58 + 0x10) != (code *)0x0)) {
      (**(code **)(DAT_0093fd58 + 0x10))();
    }
    FUN_00428ca0(0);
    FUN_0047bf00();
    FUN_00422300(DAT_0093fd68);
    DAT_0093fd68 = 0;
    FUN_00422300(DAT_0093fd60);
    DAT_0093fd60 = 0;
    FUN_00417450();
    DAT_0093fd4c = 0;
    return;
  }
  return;
}

