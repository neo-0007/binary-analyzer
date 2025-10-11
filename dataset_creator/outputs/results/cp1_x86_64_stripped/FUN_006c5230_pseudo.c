
int FUN_006c5230(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar7;
  
  puVar6 = auStack_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_2;
  local_50 = param_3;
  local_70 = FUN_006e1eb0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = param_5 * 4 + 0x17;
  puVar7 = auStack_78;
  puVar2 = auStack_78;
  while (puVar7 != auStack_78 + -(uVar5 & 0xfffffffffffff000)) {
    puVar6 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar7 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar5 = (ulong)((uint)uVar5 & 0xff0);
  lVar1 = -uVar5;
  if (uVar5 != 0) {
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  }
  local_54 = 0;
  local_68 = (ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0;
  while( true ) {
    uVar5 = local_50;
    if ((param_5 == 0) || (param_4 <= local_50)) goto LAB_006c536b;
    lVar8 = param_4 - local_50;
    *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6c52fd;
    uVar3 = thunk_FUN_007134f0(local_50,0,lVar8);
    local_60 = param_4;
    if (uVar3 != 0) {
      lVar8 = uVar3 - uVar5;
      local_60 = uVar3;
    }
    *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6c5333;
    lVar4 = FUN_00771f00(local_68,&local_50,lVar8,param_5,param_2,0x3fffffffffffffff);
    if (lVar4 == -1) break;
    uVar3 = local_60;
    if (local_50 != 0) {
      lVar8 = local_50 - uVar5;
      uVar3 = local_50;
    }
    local_50 = uVar3;
    local_54 = local_54 + (int)lVar8;
    param_5 = param_5 - lVar4;
    if (local_50 < param_4) {
      if (param_5 == 0) goto LAB_006c536b;
      local_48 = *param_2;
      local_50 = local_50 + 1;
      local_54 = local_54 + 1;
      param_5 = param_5 + -1;
    }
  }
  local_50 = uVar5;
  while( true ) {
    *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6c5408;
    uVar3 = FUN_007569f0(0,local_50,param_4 - local_50,&local_48);
    if (0xfffffffffffffffd < uVar3) break;
    local_50 = uVar3 + local_50;
  }
  local_54 = (local_54 + (int)local_50) - (int)uVar5;
  *param_2 = local_48;
LAB_006c536b:
  *(undefined8 *)(puVar6 + lVar1 + -8) = 0x6c5374;
  FUN_006e1eb0(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_54;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + lVar1 + -8) = FUN_006c5440;
  FUN_00771f60();
}

