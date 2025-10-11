
void FUN_0066ea20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined4 *puVar2;
  char in_AL;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 *puVar8;
  
  puVar8 = &local_e8;
  puVar7 = &local_e8;
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_c0 = param_10;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  lVar3 = thunk_FUN_007129d0(param_9);
  puVar2 = &local_e8;
  while (puVar8 != (undefined4 *)((long)&local_e8 - (lVar3 + 0x217U & 0xfffffffffffff000))) {
    puVar7 = (undefined4 *)((long)puVar2 + -0x1000);
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
    puVar8 = (undefined4 *)((long)puVar2 + -0x1000);
    puVar2 = (undefined4 *)((long)puVar2 + -0x1000);
  }
  uVar6 = (ulong)((uint)(lVar3 + 0x217U) & 0xff0);
  lVar1 = -uVar6;
  if (uVar6 != 0) {
    *(undefined8 *)((long)puVar7 + -8) = *(undefined8 *)((long)puVar7 + -8);
  }
  local_e0 = &stack0x00000008;
  local_e8 = 8;
  local_d8 = local_c8;
  local_e4 = 0x30;
  *(undefined8 *)((long)puVar7 + lVar1 + -8) = 0x66eb2a;
  FUN_00692870((ulong)((long)puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0,lVar3 + 0x200,param_9,
               &local_e8);
  *(undefined8 *)((long)puVar7 + lVar1 + -8) = 0x66eb34;
  uVar4 = FUN_006231b0(0x10);
  *(undefined8 *)((long)puVar7 + lVar1 + -8) = 0x66eb3f;
  uVar5 = FUN_006e2820((ulong)((long)puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
                    /* try { // try from 0066eb45 to 0066eb49 has its CatchHandler @ 0066eb57 */
  *(undefined8 *)((long)puVar7 + lVar1 + -8) = 0x66eb4a;
  FUN_00635970(uVar4,uVar5);
  FUN_00403a48();
  return;
}

