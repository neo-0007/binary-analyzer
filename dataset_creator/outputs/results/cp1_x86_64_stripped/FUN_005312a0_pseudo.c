
ulong FUN_005312a0(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 *local_188;
  ulong local_178;
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [29];
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = *(ulong *)(lVar2 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 + 0x10 == param_4) {
    *(undefined4 *)(lVar2 + 0x20) = 0;
    lVar1 = lVar2 + 0xd0;
    if (uVar3 < 0xc1) {
      local_178 = uVar3 + 0x7f & 0xffffffffffffffc0;
      FUN_004c7880(local_168,&DAT_00804540,local_178,lVar2);
      FUN_00565700(lVar1,local_168);
      local_138 = *(undefined8 *)(lVar2 + 0x94);
      uStack_130 = *(undefined8 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      if (uVar3 == 0) {
        lVar7 = 0x20;
        puVar6 = local_128;
        puVar8 = &local_138;
        local_188 = param_2;
      }
      else {
        if (*(int *)(param_1 + 0x10) == 0) {
          puVar6 = (undefined8 *)FUN_00565670();
        }
        else {
          puVar6 = (undefined8 *)FUN_00565600(param_2,param_3,local_128,uVar3);
        }
        puVar8 = &local_138;
        local_188 = (undefined8 *)((long)param_2 + uVar3);
        param_3 = param_3 + uVar3;
        lVar7 = (long)puVar6 + (0x10 - (long)puVar8);
      }
    }
    else {
      FUN_004c7880(local_168,&DAT_00804540,0x40,lVar2);
      FUN_00565700(lVar1,local_168);
      *(undefined4 *)(lVar2 + 0x20) = 1;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      FUN_00565770(lVar1,lVar2 + 0x94,0x10);
      iVar5 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      if (iVar5 == 0) {
        FUN_00565770(lVar1,param_3,uVar3);
        FUN_004c7880(param_2,param_3,uVar3,lVar2,lVar2 + 0x20);
      }
      else {
        FUN_004c7880(param_2,param_3,uVar3,lVar2);
        FUN_00565770(lVar1,param_2,uVar3);
      }
      local_188 = (undefined8 *)((long)param_2 + uVar3);
      param_3 = param_3 + uVar3;
      FUN_00565770(lVar1,&DAT_00804540,-(int)uVar3 & 0xf);
      puVar6 = local_128;
      lVar7 = 0x10;
      local_178 = 0x40;
      puVar8 = puVar6;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    *puVar6 = *(undefined8 *)(lVar2 + 0xa8);
    puVar6[1] = uVar4;
    FUN_00565770(lVar1,puVar8,lVar7);
    FUN_004227b0(local_168,local_178);
    puVar6 = puVar8;
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x84);
    }
    FUN_00565900(lVar1,puVar6);
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    if (iVar5 == 0) {
      iVar5 = FUN_00422820(puVar8,param_3,0x10);
      if (iVar5 != 0) {
        thunk_FUN_00713720((long)local_188 + (0x10 - param_4),0,param_4 - 0x10);
        param_4 = 0xffffffff;
        goto LAB_00531440;
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x8c);
      *local_188 = *(undefined8 *)(lVar2 + 0x84);
      local_188[1] = uVar4;
    }
    param_4 = param_4 & 0xffffffff;
  }
  else {
    param_4 = 0xffffffff;
  }
LAB_00531440:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

