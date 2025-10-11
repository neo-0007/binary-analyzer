
undefined8
FUN_007873c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  cVar6 = '\0';
  local_c8 = &stack0x00000008;
  local_d0 = 8;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_00786980(2,0,param_9,&local_d0);
  lVar7 = 0x7f;
  FUN_00768c20();
  if (((*(long *)(lVar7 + 0x458) != -1) &&
      (uVar5 = *(ulong *)(lVar7 + 0x448), uVar5 <= DAT_00945858)) &&
     (0x9bf < (ulong)(DAT_00945868 - DAT_00945860))) {
    lVar1 = *(long *)(lVar7 + 0x450);
    uVar3 = (DAT_00945868 - DAT_00945860) - 0x9c0;
    uVar4 = *(long *)(lVar7 + 0x440) + lVar1;
    if (uVar4 <= uVar3) {
      lVar2 = ((uVar3 - uVar4) / uVar5) * uVar5;
      uVar5 = (uVar3 - lVar1) - lVar2;
      if (cVar6 != '\0') {
        if (DAT_00945848 < uVar5) {
          return 0xffffffff;
        }
        DAT_00945848 = (DAT_00945848 - uVar3) + lVar1 + lVar2;
      }
      DAT_00945860 = DAT_00945860 + uVar5;
      *(long *)(lVar7 + 0x458) = DAT_00945860;
      if ((*(byte *)(*(long *)(lVar7 + 0x28) + 0x31c) & 4) != 0) {
        FUN_0078a7c0();
        return 0;
      }
      *(byte *)(lVar7 + 0x31d) = *(byte *)(lVar7 + 0x31d) | 0x40;
      return 0;
    }
  }
  return 0xffffffff;
}

