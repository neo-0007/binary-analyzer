
undefined1  [16]
FUN_005ab010(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar3 = FUN_0040ab70(param_2,&DAT_007d039e);
  if ((iVar3 != 0) && ((*(uint *)(param_1 + 0xe8) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x140);
    *param_3 = *(undefined8 *)(param_1 + 0x138);
    param_3[1] = uVar1;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x148);
    auVar6._8_8_ = extraout_RDX;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uVar4 = FUN_005b0100();
  auVar5._0_8_ = FUN_005b4360(uVar4,param_2,param_1,param_3,param_4,uVar2);
  auVar5._8_8_ = uVar1;
  return auVar5;
}

