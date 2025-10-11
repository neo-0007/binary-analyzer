
void FUN_00474c20(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_20;
  
  bVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_2;
  local_9c = param_1;
  lVar1 = FUN_004b8230(param_3);
  puVar3 = &local_98;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  FUN_0041cea0(&local_d8,"potential",&local_9c);
  local_78 = local_b8;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  FUN_0041cea0(&local_d8,"iteration",&local_a0);
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_50 = local_b8;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  (**(code **)(lVar1 + 0x48))(&local_98,*(undefined8 *)(lVar1 + 0x50));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

