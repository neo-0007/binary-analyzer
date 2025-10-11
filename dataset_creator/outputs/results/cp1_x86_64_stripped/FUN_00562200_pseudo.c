
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00562200(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (ulong *)0x0) {
    pcVar4 = FUN_005622c0;
    pcVar5 = FUN_005623c0;
    if ((_DAT_0094b59c >> 0x1c & 1) != 0) {
      pcVar4 = FUN_00562680;
      pcVar5 = FUN_005631a0;
    }
    if ((_DAT_0094b59c >> 0x25 & 1) != 0) {
      pcVar4 = FUN_00563240;
    }
    if ((_DAT_0094b59c >> 0x20 & 0x80210000) == 0x80210000) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      param_1[5] = uVar2 & 0xffc0fffffff;
      uVar2 = (uVar2 & 0xffffffc0fffffff) >> 0x2c | (uVar3 & 0xfffffc) << 0x14;
      uVar3 = (uVar3 & 0xffffffc0ffffffc) >> 0x18;
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      param_1[3] = uVar2 * 0x14;
      param_1[4] = uVar3 * 0x14;
      param_1[8] = 0xffffffffffffffff;
      *param_3 = FUN_005643e0;
      param_3[1] = FUN_00565340;
      return 1;
    }
    uVar2 = param_2[1];
    param_1[3] = *param_2 & 0xffffffc0fffffff;
    param_1[4] = uVar2 & 0xffffffc0ffffffc;
    *param_3 = pcVar4;
    param_3[1] = pcVar5;
    uVar1 = 1;
  }
  return uVar1;
}

