
undefined1  [16] FUN_007091e0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_10;
  
  uVar3 = DAT_0094ab80;
  if ((*(uint *)(param_1 + 1) & 0xbfffeef0) == 0) {
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0083e5c2;
    }
    uVar2 = FUN_00785c20(puVar4,*(uint *)(param_1 + 1) | 0x80000000,param_1[3],0,DAT_0094b110,
                         DAT_0094b108);
    param_1[2] = uVar2;
    auVar1._8_8_ = uStack_10;
    auVar1._0_8_ = uVar3;
    return auVar1;
  }
  uVar3 = FUN_006e27f0(&DAT_0083ed80,"invalid mode parameter",5);
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0,0,0,uVar3);
}

